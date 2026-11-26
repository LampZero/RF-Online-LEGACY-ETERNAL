// COMENTARIO_ZECA | Logica da UI. Nenhum dado e inventado: tudo vem da bridge Python.
(function(){
'use strict';
var $=function(id){return document.getElementById(id)};
var cfg=null, settings=null;

function toast(msg){var t=$('toast');t.textContent=msg;t.classList.add('show');clearTimeout(t._t);t._t=setTimeout(function(){t.classList.remove('show')},4600)}
function esc(s){return String(s==null?'':s).replace(/[&<>"']/g,function(c){return {'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]})}
function fmt(n){return (n===null||n===undefined)?'—':Number(n).toLocaleString('pt-BR')}
function busy(btn,on,label){if(!btn)return;btn.disabled=!!on;btn.classList.toggle('is-busy',!!on);if(label)btn.textContent=label}
function progress(on,label,pct){var p=$('progress');p.hidden=!on;if(on){$('progressLabel').textContent=label||'Verificando arquivos…';$('progressBar').style.width=(pct||0)+'%'}}

function showView(v){
  ['home','news','events','ranking'].forEach(function(n){var el=$('view-'+n);if(el)el.hidden=(n!==v)});
  $('view-settings').hidden=(v!=='settings');
  $('promoGrid').hidden=(v!=='home');
  document.querySelectorAll('.navlink').forEach(function(b){b.classList.toggle('is-active',b.dataset.view===v)});
}

function renderStatus(s){
  var on=!!(s&&s.online);$('dot').className='dot '+(on?'on':'off');
  $('statusText').textContent=on?'Conectado':(s?'Indisponível':'Conectando…');
  $('players').textContent=fmt(s&&(s.players!=null?s.players:s.playerCount));
  $('monsters').textContent=fmt(s&&s.monsters);
  $('ping').textContent=(s&&s.pingMs!=null)?s.pingMs+' ms':'—';
  $('chipwar').textContent=(s&&s.chipwar)?String(s.chipwar):'—';
  $('heroJogadores').textContent=fmt(s&&s.players)+' jogadores';
  $('heroMonstros').textContent=fmt(s&&s.monsters)+' monstros';
  $('heroVersao').textContent=s&&s.gameVersion?('v'+s.gameVersion):'v—';
  $('version').textContent=s&&s.gameVersion?('v'+s.gameVersion):'v—';
  $('conn').textContent=on?'Conectado aos servidores':'Servidor indisponível';
}

function renderNews(posts){
  if(!posts||!posts.length){$('newsHome').innerHTML='<h4>Sem notícias publicadas.</h4>';$('newsAll').innerHTML='<div class="item">Sem notícias publicadas.</div>';return}
  var card=function(p,i){return '<h4>'+esc(p.title)+'</h4><time>'+esc((p.date||'').slice(0,10))+' • '+esc(p.author||'Staff')+'</time><p>'+esc(p.summary||p.excerpt||p.body||'')+'</p>'};
  $('newsHome').innerHTML=posts.slice(0,1).map(card).join('');
  $('newsAll').innerHTML=posts.map(function(p){return '<article class="card">'+card(p)+'</article>'}).join('');
}

function renderEvents(d){
  var rows=[];
  (d&&d.chipwar||[]).forEach(function(x){rows.push({t:'Chip War — '+(x.map||'Holystone'),i:x.next_battle_at_ms?new Date(Number(x.next_battle_at_ms)).toLocaleString('pt-BR'):'Horário não publicado'})});
  (d&&d.guildwar||[]).forEach(function(x){rows.push({t:'Guerra de Guild — '+(x.map||'Castelo'),i:x.next_battle_at_ms?new Date(Number(x.next_battle_at_ms)).toLocaleString('pt-BR'):'Horário não publicado'})});
  var html=rows.length?rows.map(function(r){return '<div class="item"><b>'+esc(r.t)+'</b><small>'+esc(r.i)+'</small></div>'}).join(''):'<div class="item"><b>Agenda não publicada</b><small>O launcher não inventa horários. Aguardando dados do servidor.</small></div>';
  $('agendaAll').innerHTML=html;
  $('eventHome').innerHTML=rows.length?('<h4>'+esc(rows[0].t)+'</h4><time>'+esc(rows[0].i)+'</time>'):'<h4>Sem eventos publicados</h4><time>Agendas vêm do servidor</time>';
  $('chips').innerHTML=rows.length?rows.slice(0,4).map(function(r){return '<span>'+esc(r.i.split(' ')[0]||'—')+'</span>'}).join(''):'<span class="muted">Em breve</span>';
}

function renderBackups(lista){
  if(!lista||!lista.length){$('backups').textContent='Nenhum backup ainda. O backup é criado antes de atualizar ou reparar.';return}
  $('backups').textContent=lista.map(function(b){return b.id+' | '+b.criado+' | '+b.motivo+' | '+b.arquivos+' arquivo(s)'}).join('\n');
}

function setMainState(txt,cls){var b=$('btnMain');b.textContent=txt;b.className='btn btn--primary'+(cls?' '+cls:'')}

function verificarUpdate(silent){
  window.api.checkUpdate().then(function(r){
    if(!r||!r.ok){if(!silent)toast('N\u00e3o foi poss\u00edvel verificar: '+((r&&r.erro)||'erro desconhecido'));$('badgeVersion').textContent='Sem confirma\u00e7\u00e3o';$('badgeVersion').className='badge';return}
    $('fonteUpdate').textContent='Fonte: '+(r.fonte==='github'?'GitHub':'Servidor 8081');
    var n=(r.desatualizados||[]).length;
    if(n>0){setMainState('ATUALIZAR');$('badgeVersion').textContent='Atualiza\u00e7\u00e3o dispon\u00edvel';$('badgeVersion').className='badge warn';if(!silent)toast(n+' arquivo(s) para atualizar')}
    else{setMainState('JOGAR');$('badgeVersion').textContent='Atualizado';$('badgeVersion').className='badge ok';if(!silent)toast('Cliente atualizado')}
    if(r.release&&r.release.tag)$('ver').textContent='v'+r.release.tag;
  }).catch(function(e){if(!silent)toast('Erro: '+e)});
}

function applyUpdate(){
  var b=$('btnMain');progress(true,'Baixando atualiza\u00e7\u00e3o\u2026',10);busy(b,true,'ATUALIZANDO');
  window.api.applyUpdate().then(function(r){
    progress(false);busy(b,false);
    if(r.ok || r.atualizados>0){toast((r.atualizados||0)+' arquivo(s) atualizado(s). Backup: '+(r.rollback_id||'\u2014'));setMainState('JOGAR')}
    else toast('Falha: '+(r.erro||'erro'));
    window.api.listBackups().then(renderBackups);verificarUpdate(true);
  }).catch(function(e){progress(false);busy(b,false);toast('Erro: '+e)});
}

function fullCheck(){
  var b=$('btnCheck');busy(b,true,'VERIFICANDO');progress(true,'Verificando integridade (full check)\u2026',15);
  var fn = window.api.fullCheck || window.api.checkUpdate;
  fn().then(function(r){
    progress(false);busy(b,false);
    if(!r||!r.ok){toast('N\u00e3o foi poss\u00edvel verificar: '+((r&&r.erro)||'erro'));return}
    var n=(r.desatualizados||[]).length;
    var okc=r.ok_count!=null?r.ok_count:(r.total-n);
    var msg='Full check: '+okc+'/'+r.total+' OK';
    if(n>0) msg+=', '+n+' arquivo(s) para reparar/baixar.';
    else msg+='. Cliente \u00edntegro.';
    toast(msg);
    $('diag').textContent=JSON.stringify({fullcheck:true,total:r.total,ok:okc,problemas:n,corrompidos:(r.corrompidos||[]).length,faltando:(r.faltando||[]).length},null,2);
    verificarUpdate(true);
  }).catch(function(e){progress(false);busy(b,false);toast('Erro: '+e)});
}

function installAll(){
  var b=$('btnMain');progress(true,'Instalando cliente completo\u2026',5);busy(b,true,'INSTALANDO');
  window.api.installAll().then(function(r){
    progress(false);busy(b,false);
    if(r.ok){toast((r.atualizados||0)+' arquivo(s) instalados. Cliente pronto.');setMainState('JOGAR')}
    else toast('Falha na instala\u00e7\u00e3o: '+(r.erro||'erro'));
    window.api.listBackups().then(renderBackups);verificarUpdate(true);
  }).catch(function(e){progress(false);busy(b,false);toast('Erro: '+e)});
}
function repair(){var b=$('btnRepair');busy(b,true,'REPARANDO');progress(true,'Reparando cliente…',20);
  window.api.applyUpdate().then(function(r){progress(false);busy(b,false);toast(r.ok?('Reparo concluído: '+r.atualizados+' arquivo(s).'):('Falha: '+(r.erro||'erro')));verificarUpdate(true)}).catch(function(e){progress(false);busy(b,false);toast('Erro: '+e)})}

function repairLang(){window.api.repairLanguage().then(function(r){toast(r.ok?('Idioma PT-BR reparado ('+r.arquivos.length+' arquivos). Backup: '+(r.rollback_id||'—')):('Falha: '+(r.erro||'erro')));window.api.listBackups().then(renderBackups)})}

function rollback(){window.api.restaurarBackup().then(function(r){toast(r.ok?('Restaurado '+r.id+': '+r.restaurados+' arquivo(s).'):('Falha: '+(r.erro||JSON.stringify(r.falhas))));window.api.listBackups().then(renderBackups);verificarUpdate(true)})}

/* Configuracoes: somente opcoes reais do R3Engine.ini */
function fillSettings(s){
  settings=s||{};
  var res=$('res');var atual=settings.ScreenXSize+' x '+settings.ScreenYSize;
  var opts=[atual,'1280 x 720','1600 x 900','1920 x 1080'];
  res.innerHTML=opts.filter(function(v,i,a){return a.indexOf(v)===i}).map(function(v){return '<option>'+v+'</option>'}).join('');
  res.value=atual;
  document.querySelectorAll('#screenMode button[data-mode]').forEach(function(b){b.classList.toggle('is-active',b.dataset.mode===(String(settings.bFullScreen).toUpperCase()==='TRUE'?'full':'window'))});
  $('volSound').value=Math.round((settings.SoundVol||0)*100);$('volMusic').value=Math.round((settings.MusicVol||0)*100);$('volAmb').value=Math.round((settings.AmbVol||0)*100);
  $('outSound').textContent=$('volSound').value+'%';$('outMusic').textContent=$('volMusic').value+'%';$('outAmb').textContent=$('volAmb').value+'%';
  $('tgSound').classList.toggle('is-on',String(settings.Sound).toUpperCase()==='TRUE');
  $('tgMusic').classList.toggle('is-on',String(settings.music).toUpperCase()==='TRUE');
  $('texture').value=settings.TextureDetail||3;$('shadow').value=settings.ShadowDetail||3;$('light').value=settings.DynamicLight||3;
  $('see').value=settings.SeeDistance||3;$('outSee').textContent=$('see').value;$('gamma').value=Math.round((settings.Gamma||1.8)*10);$('outGamma').textContent=(settings.Gamma||1.8).toFixed(1);
  $('langAtual').textContent=settings.Language||'Brazil';
}
function collectSettings(){
  var r=$('res').value.split(' x ');
  return {ScreenXSize:r[0],ScreenYSize:r[1],
    bFullScreen:(document.querySelector('#screenMode button.is-active')||{}).dataset.mode==='full'?'TRUE':'FALSE',
    SoundVol:($('volSound').value/100).toFixed(2),MusicVol:($('volMusic').value/100).toFixed(2),AmbVol:($('volAmb').value/100).toFixed(2),
    Sound:$('tgSound').classList.contains('is-on')?'TRUE':'FALSE',music:$('tgMusic').classList.contains('is-on')?'TRUE':'FALSE',
    TextureDetail:$('texture').value,ShadowDetail:$('shadow').value,DynamicLight:$('light').value,
    SeeDistance:$('see').value,Gamma:(($('gamma').value)/10).toFixed(1)};
}
function saveSettings(){
  var obj=collectSettings();var b=$('btnSaveSettings');busy(b,true,'SALVANDO');
  window.api.saveClientSettings(obj).then(function(r){busy(b,false);toast(r.ok?('Configuração salva. Backup criado antes da alteração.'+((r.reiniciar)?' Reinicie o jogo para aplicar.':'')):('Falha: '+(r.erro||'erro')))}).catch(function(e){busy(b,false);toast('Erro: '+e)});
}

function acoes(){
  document.querySelectorAll('.navlink').forEach(function(b){b.addEventListener('click',function(){showView(b.dataset.view)})});
  document.querySelectorAll('[data-ir]').forEach(function(b){b.addEventListener('click',function(){showView(b.dataset.ir)})});
  document.querySelectorAll('.settings-nav button').forEach(function(b){b.addEventListener('click',function(){document.querySelectorAll('.settings-nav button').forEach(function(x){x.classList.remove('is-active')});b.classList.add('is-active');['screen','audio','game','advanced'].forEach(function(p){$('panel-'+p).hidden=(p!==b.dataset.panel)})})});
  document.querySelectorAll('#screenMode button[data-mode]').forEach(function(b){b.addEventListener('click',function(){document.querySelectorAll('#screenMode button[data-mode]').forEach(function(x){x.classList.remove('is-active')});b.classList.add('is-active')})});
  ['Sound','Music','Amb'].forEach(function(k){$('vol'+k).addEventListener('input',function(){$('out'+k).textContent=this.value+'%'})});
  $('see').addEventListener('input',function(){$('outSee').textContent=this.value});
  $('gamma').addEventListener('input',function(){$('outGamma').textContent=(this.value/10).toFixed(1)});
  $('tgSound').addEventListener('click',function(){this.classList.toggle('is-on')});
  $('tgMusic').addEventListener('click',function(){this.classList.toggle('is-on')});
  $('btnMute').addEventListener('click',function(){$('tgSound').classList.remove('is-on');$('tgMusic').classList.remove('is-on');toast('Som e música desativados. Salve para aplicar.')});
  $('eye').addEventListener('click',function(){$('loginPass').type=($('loginPass').type==='password'?'text':'password')});
  $('winMin').addEventListener('click',function(){window.api.minimize()});
  $('winClose').addEventListener('click',function(){window.api.closeLauncher()});
  $('btnMain').addEventListener('click',function(){
    var t=this.textContent.trim();
    if(t==='ATUALIZAR')return applyUpdate();
    if(t==='INSTALAR' || t==='INSTALAR CLIENTE')return installAll();
    window.api.startGame().then(function(r){
      if(r && r.precisa_instalar){ toast('Cliente não encontrado. Clique em INSTALAR CLIENTE para baixar do GitHub.'); setMainState('INSTALAR CLIENTE'); return; }
      toast(r.ok?r.mensagem:('Erro: '+r.erro));
    });
  });
  $('btnCheck').addEventListener('click',fullCheck);$('btnCheck2').addEventListener('click',fullCheck);
  $('btnRepair').addEventListener('click',repair);
  $('btnLang').addEventListener('click',repairLang);$('btnRollback').addEventListener('click',rollback);
  $('btnSaveSettings').addEventListener('click',saveSettings);
  $('btnResetSettings').addEventListener('click',function(){window.api.getClientSettings().then(function(s){fillSettings(s);toast('Valores atuais restaurados na tela.')})});
  $('btnStatusGame').addEventListener('click',function(){window.api.statusGame().then(function(s){$('statusGame').textContent=s})});
  $('btnCredential').addEventListener('click',function(){$('modalCred').hidden=false;window.api.getCredential().then(function(c){$('credId').value=c.email||'';$('credPass').value=''})});
  $('btnCloseCred').addEventListener('click',function(){$('modalCred').hidden=true});
  $('btnSaveCred').addEventListener('click',function(){window.api.saveCredential($('credId').value,$('credPass').value).then(function(r){toast(r.ok?r.mensagem:('Erro: '+r.erro));$('modalCred').hidden=true;$('credPass').value=''})});
  $('btnLogin').addEventListener('click',function(){
    var b=this;busy(b,true,'ENTRANDO');
    var salvar = $('saveId').checked;
    window.api.saveCredential($('loginId').value,$('loginPass').value,salvar).then(function(r){
      busy(b,false);
      if(!salvar){$('loginId').value=''}
      $('loginPass').value='';
      $('loginMsg').textContent=r.ok?'Credencial salva localmente. Clique em JOGAR.':(r.erro||'');
      if(r.ok){ window.api.startGame().then(function(g){ if(g && g.ok) toast('Jogo iniciado!'); else if(g && g.precisa_instalar){ setMainState('INSTALAR CLIENTE'); toast('Cliente faltando. Instale pelo launcher.'); } }); }
    });
  });
  $('forgot').addEventListener('click',function(){toast('Use o fluxo oficial de recuperação do site do servidor.')});
  document.querySelectorAll('.side-item').forEach(function(b){b.addEventListener('click',function(){
    var g=b.dataset.go;
    if(g==='check')fullCheck();else if(g==='update')verificarUpdate(false);else if(g==='repair')repair();
    else if(g==='language')repairLang();else if(g==='rollback')rollback();
    else if(g==='status')showView('home');else if(g==='folder')window.api.openFolder();
  })});
}

function checkLauncherSelfUpdate(){
  if(!window.api.selfUpdateCheck) return;
  window.api.selfUpdateCheck().then(function(r){
    if(r && r.ok && r.tem_novo){
      toast('Nova versão do launcher disponível (v'+r.remoto+'). Atualizando...');
      window.api.selfUpdateApply().then(function(a){
        if(a && a.ok && a.reiniciando) toast('Launcher será reiniciado para atualizar.');
        else if(a && a.ok) toast('Atualização do launcher baixada: '+(a.path||'cache'));
        else if(a && a.erro) toast('Auto-update launcher: '+a.erro);
      });
    }
  }).catch(function(){});
}

function resolveApi(){
  if(window.api) return window.api;
  if(window.pywebview && window.pywebview.api){ window.api = window.pywebview.api; return window.api; }
  return null;
}

function init(){
  var api = resolveApi();
  if(!api){
    // pywebview às vezes demora; tenta novamente por alguns segundos
    var tries = 0;
    var t = setInterval(function(){
      tries++;
      api = resolveApi();
      if(api){ clearInterval(t); init(); }
      else if(tries > 40){ clearInterval(t); document.body.innerHTML='<p style="padding:30px;color:#fff;font-family:sans-serif">API do launcher indisponível. Verifique se o launcher foi aberto pelo executável (pywebview).</p>'; }
    }, 250);
    return;
  }
  acoes();
  window.api.getConfig().then(function(c){cfg=c;$('ver').textContent='v'+c.versao;$('diag').textContent=JSON.stringify(c,null,2)}).catch(function(e){toast('Config: '+e)});
  window.api.getStatus().then(renderStatus).catch(function(){});
  window.api.getNews().then(renderNews).catch(function(){});
  window.api.getSchedule().then(renderEvents).catch(function(){});
  window.api.getCredential().then(function(c){$('loginId').value=c.email||'';$('saveId').checked=!!c.email}).catch(function(){});
  window.api.getClientSettings().then(fillSettings).catch(function(){});
  window.api.listBackups().then(renderBackups).catch(function(){});
  checkLauncherSelfUpdate();
  verificarUpdate(true);
  setInterval(function(){window.api.getStatus().then(renderStatus).catch(function(){})},15000);
}
window.addEventListener('pywebviewready',function(){ resolveApi(); init(); });
if(document.readyState === 'loading') document.addEventListener('DOMContentLoaded',function(){ setTimeout(init, 50); });
else setTimeout(init, 50);
})();
