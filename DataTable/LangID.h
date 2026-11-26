#ifndef __LANG_ID_H__
#define __LANG_ID_H__

#define LSID_VERSION	( 2021, 12, 23 )

#include "DataTable/CLangManager.h"
#define LANG(str)		_GetLangMgr()->GetString( (str) )

#define LSID_BELLATO							0x00000000		// 벨라토
#define LSID_CORA								0x00000001		// 코라
#define LSID_ACCRETIA							0x00000002		// 아크레시아
#define LSID_BELLATO_ARMY						0x00000003		// 연방군
#define LSID_CORA_ARMY							0x00000004		// 동맹군
#define LSID_ACCRETIA_ARMY						0x00000005		// 제국군
#define LSID_BELLATO_FULL						0x00000006		// 벨라토 연방
#define LSID_CORA_FULL							0x00000007		// 신성동맹 코라
#define LSID_ACCRETIA_FULL						0x00000008		// 아크레시아 제국
#define LSID_MONEY_GOLD							0x00000009		// 골드
#define LSID_MONEY_DALANT						0x0000000A		// 달란트
#define LSID_MONEY_DISENA						0x0000000B		// 디세나
#define LSID_MONEY_CP							0x0000000C		// CP
#define LSID_MALE								0x0000000D		// 남자
#define LSID_FEMALE								0x0000000E		// 여자
#define LSID_MALE_SHORT							0x0000000F		// 남
#define LSID_FEMALE_SHORT						0x00000010		// 여
#define LSID_WCN_SWORD							0x00000011		// 소드류
#define LSID_WCN_KNIFE							0x00000012		// 나이프류
#define LSID_WCN_AXE							0x00000013		// 엑스류
#define LSID_WCN_MACE							0x00000014		// 메이스류
#define LSID_WCN_STAFF							0x00000015		// 스태프류
#define LSID_WCN_SPEAR							0x00000016		// 스피어류
#define LSID_WCN_BOW							0x00000017		// 보우류
#define LSID_WCN_FIREARM						0x00000018		// 파이어암류
#define LSID_WCN_LAUNCHER						0x00000019		// 런처류
#define LSID_WCN_THROW							0x0000001A		// 던지기 형
#define LSID_WCN_MINE							0x0000001B		// 채굴기
#define LSID_WCN_EX1							0x0000001C		// EX1
#define LSID_WCN_EX2							0x0000001D		// EX2
#define LSID_WCN_EX3							0x0000001E		// EX3
#define LSID_WCN_EX4							0x0000001F		// EX4
#define LSID_WCN_EX5							0x00000020		// EX5
#define LSID_HELMET								0x00000021		// 투구
#define LSID_ARMOR_UPPER						0x00000022		// 상의
#define LSID_ARMOR_LOWER						0x00000023		// 하의
#define LSID_GLOVES								0x00000024		// 장갑
#define LSID_SHOES								0x00000025		// 신발
#define LSID_SHIELD								0x00000026		// 방패
#define LSID_AMULET								0x00000027		// 아뮬렛
#define LSID_RING								0x00000028		// 링
#define LSID_HP									0x00000029		// 생명력
#define LSID_FP									0x0000002A		// 포스력
#define LSID_SP									0x0000002B		// 스테미너
#define LSID_BULLET								0x0000002C		// 탄창
#define LSID_ARROW								0x0000002D		// 화살
#define LSID_ADRENALINE							0x0000002E		// 아드레날린
#define LSID_ORE								0x0000002F		// 원석
#define LSID_RESOURCE							0x00000030		// 재료
#define LSID_BOOTY								0x00000031		// 기타
#define LSID_GEM								0x00000032		// 보석
#define LSID_TOOL								0x00000033		// 제작 도구
#define LSID_BAG								0x00000034		// 가방
#define LSID_BATTERY							0x00000035		// 채굴 배터리
#define LSID_UNIT_KEY							0x00000036		// 벨라토필드유닛
#define LSID_BEL_TOWER_ARM						0x00000037		// 벨라토공성유닛
#define LSID_COR_TOWER_ARM						0x00000038		// 코라공성유닛
#define LSID_ACC_TOWER_ARM						0x00000039		// 아크레시아공성유닛
#define LSID_MAP								0x0000003A		// 맵
#define LSID_TOWN								0x0000003B		// 이동
#define LSID_DUNGEON							0x0000003C		// 게이트
#define LSID_GUARD_TOWER						0x0000003D		// 가드타워
#define LSID_TRAP								0x0000003E		// 트랩
#define LSID_DARK								0x0000003F		// 다크
#define LSID_HOLY								0x00000040		// 홀리
#define LSID_FIRE								0x00000041		// 파이어
#define LSID_AQUA								0x00000042		// 아쿠아
#define LSID_TERRA								0x00000043		// 테라
#define LSID_WIND								0x00000044		// 윈드
#define LSID_ANIMUSLIVER						0x00000045		// 애니머스리버
#define LSID_ATTR_FIRE							0x00000046		// 불
#define LSID_ATTR_WATER							0x00000047		// 물
#define LSID_ATTR_EARTH							0x00000048		// 흙
#define LSID_ATTR_WIND							0x00000049		// 바람
#define LSID_DESC_CLASS_WARRIOR1				0x0000004A		// 용기는 전사들이 가진
#define LSID_DESC_CLASS_WARRIOR2				0x0000004B		// 또 다른 심장!
#define LSID_DESC_CLASS_RANGER1					0x0000004C		// 시선이 멈출 때마다
#define LSID_DESC_CLASS_RANGER2					0x0000004D		// 하나의 생명이 소멸한다.
#define LSID_DESC_CLASS_SPIRIT1					0x0000004E		// Deus, Baptizare Ego Honor!
#define LSID_DESC_CLASS_SPIRIT2					0x0000004F		// 신이여, 나의 명예를 지켜주소서!
#define LSID_DESC_CLASS_SPECIAL1				0x00000050		// 생각하라! 그것이
#define LSID_DESC_CLASS_SPECIAL2				0x00000051		// 우리를 자유롭게 할 것이다.
#define LSID_GRASP_RIGHT						0x00000052		// 오른손
#define LSID_GRASP_LEFT							0x00000053		// 왼손
#define LSID_GRASP_BOTH							0x00000054		// 양손
#define LSID_GRASP_DUEL							0x00000055		// 듀얼
#define LSID_SPEED_VERYSLOW						0x00000056		// 매우느림
#define LSID_SPEED_SLOW							0x00000057		// 느림
#define LSID_SPEED_NORMAL						0x00000058		// 보통
#define LSID_SPEED_FAST							0x00000059		// 빠름
#define LSID_SPEED_VERYFAST						0x0000005A		// 매우빠름
#define LSID_UNIT_ATTACK_CLOSE					0x0000005B		// 근접 공격
#define LSID_UNIT_ATTACK_LONG					0x0000005C		// 원거리 공격
#define LSID_SKILL_CLOSE						0x0000005D		// 근접
#define LSID_SKILL_LONG							0x0000005E		// 원거리
#define LSID_SKILL_LAUNCHER						0x0000005F		// 런처
#define LSID_SKILL_FORCE						0x00000060		// 포스
#define LSID_SKILL_SHIELD						0x00000061		// 방패
#define LSID_SKILL_DEFENCE						0x00000062		// 방어
#define LSID_ATTACKSKILL_LV1					0x00000063		// 스컬러
#define LSID_ATTACKSKILL_LV2					0x00000064		// 익스퍼트
#define LSID_ATTACKSKILL_LV3					0x00000065		// 마스터
#define LSID_ATTACKSKILL_LV4					0x00000066		// 그랜져
#define LSID_NONE								0x00000067		// 없음
#define LSID_YES								0x00000068		// 예
#define LSID_NO									0x00000069		// 아니오
#define LSID_OK									0x0000006A		// 확인
#define LSID_CANCEL								0x0000006B		// 취소
#define LSID_HELP								0x0000006C		// 도움말
#define LSID_AUTO000001							0x0000006D		// 이상이동1 맵=%d,obj=%d old pos %.3f %.3f %.3f,new pos %.3f %.3f %.3f diff=%.3f
#define LSID_AUTO000002							0x0000006E		// 이상이동2 맵=%d,obj=%d old pos %.3f %.3f %.3f,new pos %.3f %.3f %.3f diff=%.3f
#define LSID_AUTO000003							0x0000006F		// 지속적인 에러가 발생할 경우 RFOnline에 문의를 해주시길 바랍니다. RFOnline에 에러를 보내시겠습니까?
#define LSID_AUTO000004							0x00000070		// 방화벽(firewall)이나 기타 네트웍문제로 서버에 접속할 수 없습니다.Code:%d
#define LSID_AUTO000005							0x00000071		// 플레이어와 트레이드 중에는 프로그램을 종료할 수 없습니다.
#define LSID_AUTO000006							0x00000072		// 프로그램을 종료하는 중입니다.
#define LSID_AUTO000007							0x00000073		// 키보드 입력에 문제가 발생하였습니다. 프로그램을 종료합니다.
#define LSID_AUTO000008							0x00000074		// %s의 효과가 해제 되었습니다.
#define LSID_AUTO000009							0x00000075		// 채굴중에는 아이템 루팅이 불가능합니다.
#define LSID_AUTO000010							0x00000076		// 획득 권한이 없는 아이템입니다.
#define LSID_AUTO000011							0x00000077		// 포탈을 연 플레이어 혹은 파티원만이 사용할 수 있습니다.
#define LSID_AUTO000012							0x00000078		// 기갑 장비는 해당 클래스를 가진 플레이어만이 탑승할 수 있습니다.
#define LSID_AUTO000013							0x00000079		// 아바타가 움직일 수 없는 상태에서는 전투 모드를 변경할 수 없습니다.
#define LSID_AUTO000014							0x0000007A		// 아바타가 움직일 수 없는 상태에서는 걷기/뛰기 모드를 변경할 수 없습니다.
#define LSID_AUTO000015							0x0000007B		// 현재 아바타가 뛰기 제한에 걸려있습니다.
#define LSID_AUTO000016							0x0000007C		// 스테미너가 부족해서 뛸 수 없습니다. 최소 %d이상의 SP가 필요합니다.
#define LSID_AUTO000017							0x0000007D		// 부스터를 장착하지 않았거나 모두 사용하였습니다.
#define LSID_AUTO000018							0x0000007E		// 아바타가 움직일 수 없는 상태에서는 앉기/서기 모드를 변경할 수 없습니다.
#define LSID_AUTO000019							0x0000007F		// 다른 종족의 마을내에서는 공격할 수가 없습니다.
#define LSID_AUTO000020							0x00000080		// 마을내에서는 공격할 수가 없습니다.
#define LSID_AUTO000021							0x00000081		// 마을내에서는 공격형 스킬/포스를 시전할 수가 없습니다.
#define LSID_AUTO000022							0x00000082		// 패시브 스킬/포스는 사용할 수 없습니다.
#define LSID_AUTO000023							0x00000083		// 현재 선택한 스킬/포스는 적 캐릭터에게만 사용 가능합니다.
#define LSID_AUTO000024							0x00000084		// 현재 선택한 스킬/포스는 아바타나 같은 종족일 경우에만 사용 가능합니다.
#define LSID_AUTO000025							0x00000085		// 현재 선택한 스킬/포스는 다른 종족일 경우에만 사용 가능합니다.
#define LSID_AUTO000026							0x00000086		// 아바타가 죽은 상태에서는 스킬/포스를 장착/해제/사용할 수 없습니다.
#define LSID_AUTO000027							0x00000087		// 부활 후 잠시 동안은 스킬/포스를 사용할 수 없습니다.
#define LSID_AUTO000028							0x00000088		// 유닛 탑승상태에서는 스킬/포스를 사용할 수 없습니다.
#define LSID_AUTO000029							0x00000089		// 채굴 상태에서는 스킬/포스를 사용할 수 없습니다.
#define LSID_AUTO000030							0x0000008A		// 공격형 스킬/포스는 전투 모드에서만 사용 가능합니다.
#define LSID_AUTO000031							0x0000008B		// 아바타가 해당 스킬/포스의 사용 제한에 걸려있습니다.
#define LSID_AUTO000032							0x0000008C		// 해당 스킬/포스를 시전하기 위해선 특수한 효과가 필요합니다.
#define LSID_AUTO000033							0x0000008D		// 스킬/포스 시전에 필요한 HP가 부족합니다.
#define LSID_AUTO000034							0x0000008E		// 스킬/포스 시전에 필요한 FP가 부족합니다.
#define LSID_AUTO000035							0x0000008F		// 스킬/포스 시전에 필요한 SP가 부족합니다.
#define LSID_AUTO000036							0x00000090		// 선택한 스킬/포스는 현재 아바타가 장착중인 무기로는 사용할 수 없습니다.
#define LSID_AUTO000037							0x00000091		// 선택한 스킬/포스를 사용하려면 해당 무기를 장착해 주십시오.
#define LSID_AUTO000038							0x00000092		// 선택한 스킬/포스를 사용하려면 방패를 장착해 주십시오.
#define LSID_AUTO000039							0x00000093		// 스킬/포스를 준비중입니다.
#define LSID_AUTO000040							0x00000094		// 선택한 스킬/포스는 잠시 후 사용하실 수 있습니다.
#define LSID_AUTO000041							0x00000095		// 지속형 스킬/포스는 남은 시간이 10%% 이하로 남아있어야만 재시전이 가능합니다.
#define LSID_AUTO000042							0x00000096		// 현재 선택한 공격 파츠의 잔탄수가 부족합니다. 발사물을 구입하거나 다른 공격 파츠를 이용하여 주십시오.
#define LSID_AUTO000043							0x00000097		// 현재 장착중인 무기가 사용할 수 있는 발사물을 장착 해 주십시요.
#define LSID_AUTO000044							0x00000098		// 소환에 필요한 FP가 부족합니다.
#define LSID_AUTO000045							0x00000099		// 애니머스의 HP가 30 %%이하일 경우에는 소환할 수 없습니다.
#define LSID_AUTO000046							0x0000009A		// 아바타가 사용할 수 없는 아이템입니다. 다른 종족의 아이템입니다.
#define LSID_AUTO000047							0x0000009B		// 아바타가 사용할 수 없는 아이템입니다. 사용 가능 레벨이 아바타의 레벨보다 높습니다.
#define LSID_AUTO000048							0x0000009C		// 아바타가 사용할 수 없는 아이템입니다. 사용 가능 숙련도가 아바타의 숙련도보다 높습니다.
#define LSID_AUTO000049							0x0000009D		// 아바타가 사용할 수 없는 아이템입니다. 사용 가능 클래스가 아닙니다.
#define LSID_AUTO000050							0x0000009E		// 아바타가 현재 회복 불가능 상태입니다. 포션을 사용할 수 없습니다.
#define LSID_AUTO000051							0x0000009F		// 해당 포션은 잠시후 사용 가능합니다.
#define LSID_AUTO000052							0x000000A0		// 해당 포션은 사용하셔도 아무 효과가 없습니다.
#define LSID_AUTO000053							0x000000A1		// 해당 포션의 효과ID 가 잘못되었습니다.
#define LSID_AUTO000054							0x000000A2		// 현재 선택한 스킬/포스는 알맞은 성향을 가졌거나 해당 클래스로 승직을 한 플레이어만이 사용할 수 있습니다.
#define LSID_AUTO000055							0x000000A3		// 현재 선택한 스킬/포스를 사용하기 위한 마스터리가 부족합니다.
#define LSID_AUTO000056							0x000000A4		// 아바타의 소환 숙련도가 낮기때문에, 애니머스 리버를 사용할 수 없습니다.
#define LSID_AUTO000057							0x000000A5		// 현재 방패를 장착중이므로 양손/쌍손 무기는 장착할 수 없습니다.
#define LSID_AUTO000058							0x000000A6		// 현재 양손/쌍손 무기를 장착중이므로 방패는 장착할 수 없습니다.
#define LSID_AUTO000059							0x000000A7		// %s의 효과가 적용 되었습니다.
#define LSID_AUTO000060							0x000000A8		// HP 감소
#define LSID_AUTO000061							0x000000A9		// 공격력 증가 (Melee)
#define LSID_AUTO000062							0x000000AA		// 명중률 증가 (Melee)
#define LSID_AUTO000063							0x000000AB		// 사정 거리 증가 (Melee)
#define LSID_AUTO000064							0x000000AC		// 스킬의 지속 시간을 늘려줌
#define LSID_AUTO000065							0x000000AD		// 반격기 사용
#define LSID_AUTO000066							0x000000AE		// 공격시 방패 무시
#define LSID_AUTO000067							0x000000AF		// 크리티컬 공격 확률 증가
#define LSID_AUTO000068							0x000000B0		// 상대방을 밀어냄
#define LSID_AUTO000069							0x000000B1		// 상대방을 기절시킴
#define LSID_AUTO000070							0x000000B2		// 크리티컬 공격 & 기절
#define LSID_AUTO000071							0x000000B3		// 크리티컬 공격 & 밀어내기
#define LSID_AUTO000072							0x000000B4		// 공격시 모든 방어력 무시
#define LSID_AUTO000073							0x000000B5		// 공격 딜레이 감소 (Bow)
#define LSID_AUTO000074							0x000000B6		// 사정 거리 증가 (Bow)
#define LSID_AUTO000075							0x000000B7		// 명중률 증가 (Bow)
#define LSID_AUTO000076							0x000000B8		// 공격 딜레이 감소 (Fire Arm)
#define LSID_AUTO000077							0x000000B9		// 사정 거리 증가 (Fire Arm)
#define LSID_AUTO000078							0x000000BA		// 명중률 증가 (Fire Arm)
#define LSID_AUTO000079							0x000000BB		// 공격 딜레이 감소 (Throw)
#define LSID_AUTO000080							0x000000BC		// 사정 거리 증가 (Throw)
#define LSID_AUTO000081							0x000000BD		// 명중률 증가 (Throw)
#define LSID_AUTO000082							0x000000BE		// 공격 딜레이 감소 (Launcher)
#define LSID_AUTO000083							0x000000BF		// 사정 거리 증가 (Launcher)
#define LSID_AUTO000084							0x000000C0		// 무기 방패 제작
#define LSID_AUTO000085							0x000000C1		// 방어구 (투구,상의,하의,장갑,신발) 제작
#define LSID_AUTO000086							0x000000C2		// 발사물 제작
#define LSID_AUTO000087							0x000000C3		// 소환
#define LSID_AUTO000088							0x000000C4		// 포스 사정거리 증가
#define LSID_AUTO000089							0x000000C5		// 자신의 현재 HP를 대상의 FP로 만듬
#define LSID_AUTO000090							0x000000C6		// 공격 포스의 시전 딜레이 감소
#define LSID_AUTO000091							0x000000C7		// 포스 공격력 증가
#define LSID_AUTO000092							0x000000C8		// 공격 속도 증가 (Melee)
#define LSID_AUTO000093							0x000000C9		// 이동 속도 증가
#define LSID_AUTO000094							0x000000CA		// 포스 성공 확률 증가
#define LSID_AUTO000095							0x000000CB		// 지속 피해 보조 포스의 남은 시간 늘려주기
#define LSID_AUTO000096							0x000000CC		// 모든 스킬/포스의 사용시 FP소모량 감소
#define LSID_AUTO000097							0x000000CD		// 가격하는 데미지의 일정량을 FP로 흡수
#define LSID_AUTO000098							0x000000CE		// 스텔스
#define LSID_AUTO000099							0x000000CF		// 부활
#define LSID_AUTO000100							0x000000D0		// 현재 HP 증가
#define LSID_AUTO000101							0x000000D1		// 현재 SP 증가
#define LSID_AUTO000102							0x000000D2		// HP & FP 회복 속도 증가
#define LSID_AUTO000103							0x000000D3		// 저항력 증가
#define LSID_AUTO000104							0x000000D4		// 방어력 증가
#define LSID_AUTO000105							0x000000D5		// 일반 공격 회피율 증가
#define LSID_AUTO000106							0x000000D6		// 지속 이득 보조 포스의 남은 시간 늘려주기
#define LSID_AUTO000107							0x000000D7		// 가격하는 데미지의 일정량을 HP로 흡수
#define LSID_AUTO000108							0x000000D8		// 절대 방어
#define LSID_AUTO000109							0x000000D9		// 오버 힐링
#define LSID_AUTO000110							0x000000DA		// 시야 감소
#define LSID_AUTO000111							0x000000DB		// 저항력 감소
#define LSID_AUTO000112							0x000000DC		// 방어력 감소
#define LSID_AUTO000113							0x000000DD		// 일반 & 포스의 공격력 감소
#define LSID_AUTO000114							0x000000DE		// 일반 공격의 명중률 감소
#define LSID_AUTO000115							0x000000DF		// 일반 공격의 속도 감소
#define LSID_AUTO000116							0x000000E0		// HP & FP 회복 속도 감소
#define LSID_AUTO000117							0x000000E1		// 최대 공격력 선택확률 감소
#define LSID_AUTO000118							0x000000E2		// HP / FP / SP 회복 제한
#define LSID_AUTO000119							0x000000E3		// 뛰기 제한 (걷기만 가능함)
#define LSID_AUTO000120							0x000000E4		// 지속 이득 보조 스킬의 사용 제한
#define LSID_AUTO000121							0x000000E5		// 이동 금지 (걷기/뛰기 포함)
#define LSID_AUTO000122							0x000000E6		// 지속 피해 보조 포스의 사용 제한
#define LSID_AUTO000123							0x000000E7		// 지속 이득 보조 포스의 사용 제한
#define LSID_AUTO000124							0x000000E8		// 모든 공격 스킬의 사용 제한
#define LSID_AUTO000125							0x000000E9		// 모든 공격 포스의 사용 제한
#define LSID_AUTO000126							0x000000EA		// 가장 최근에 적용된 지속 이득 보조 스킬의 해제
#define LSID_AUTO000127							0x000000EB		// 가장 최근에 적용된 지속 이득 보조 포스의 해제
#define LSID_AUTO000128							0x000000EC		// 가장 최근에 적용된 지속 피해 보조 포스의 해제
#define LSID_AUTO000129							0x000000ED		// 투명화 해제
#define LSID_AUTO000130							0x000000EE		// 걸려있는 모든 지속 이득 보조 스킬의 해제
#define LSID_AUTO000131							0x000000EF		// 걸려있는 모든 지속 이득 보조 포스의 해제
#define LSID_AUTO000132							0x000000F0		// 걸려있는 모든 지속 피해 보조 포스의 해제
#define LSID_AUTO000133							0x000000F1		// 시전자 주위 일정범위내에 있는 모든 적들의 지속 이득 보조 포스 & 스킬 해제
#define LSID_AUTO000134							0x000000F2		// 득
#define LSID_AUTO000135							0x000000F3		// 실
#define LSID_AUTO000136							0x000000F4		// ( %s ) %d. %s %d레벨 : %d/%d초
#define LSID_AUTO000137							0x000000F5		// 실패
#define LSID_AUTO000138							0x000000F6		// 성공
#define LSID_AUTO000139							0x000000F7		// [스킬] %s < Lv : %d > - %s ( 효과 : %s )
#define LSID_AUTO000140							0x000000F8		// [포스] %s < Lv : %d > - %s ( 효과 : %s )
#define LSID_AUTO000141							0x000000F9		// 나이프
#define LSID_AUTO000142							0x000000FA		// 소드
#define LSID_AUTO000143							0x000000FB		// 엑스
#define LSID_AUTO000144							0x000000FC		// 메이스
#define LSID_AUTO000145							0x000000FD		// 스피어
#define LSID_AUTO000146							0x000000FE		// 보우
#define LSID_AUTO000147							0x000000FF		// 파이어 암
#define LSID_AUTO000148							0x00000100		// 런쳐
#define LSID_AUTO000149							0x00000101		// 스태프
#define LSID_AUTO000150							0x00000102		// 모든 무기
#define LSID_AUTO000151							0x00000103		// 공격력 %d%%%% 증가
#define LSID_AUTO000152							0x00000104		// 공격 데미지 %.2f%%%%를 HP로 흡수
#define LSID_AUTO000153							0x00000105		// 가격하는 데미지의 %.2f%%%%를 FP로 흡수
#define LSID_AUTO000154							0x00000106		// 스턴 확률 %d%%%% 증가
#define LSID_AUTO000155							0x00000107		// 공격 사정 거리 %d 증가
#define LSID_AUTO000156							0x00000108		// 방어력 %s
#define LSID_AUTO000157							0x00000109		// 지속 피해 보조 시간 %d%%%% 단축
#define LSID_AUTO000158							0x0000010A		// %s속성으로 변환
#define LSID_AUTO000159							0x0000010B		// %s내성 %d 증가
#define LSID_AUTO000160							0x0000010C		// %d%%%% HP회복량 증가
#define LSID_AUTO000161							0x0000010D		// 회피율 %s
#define LSID_AUTO000162							0x0000010E		// SP 최대량 %s
#define LSID_AUTO000163							0x0000010F		// 스킬 포스 사용시 FP 소모량 %s
#define LSID_AUTO000164							0x00000110		// 일반공격 명중률 %d%%%% 증가
#define LSID_AUTO000165							0x00000111		// 일반공격 회피율 %d%%%% 증가
#define LSID_AUTO000166							0x00000112		// HP FP 최대량 %s
#define LSID_AUTO000167							0x00000113		// 모든 공격력 %s
#define LSID_AUTO000168							0x00000114		// 사용 가능한 스킬 레벨 %s
#define LSID_AUTO000169							0x00000115		// 디텍트
#define LSID_AUTO000170							0x00000116		// 지속피해보조기술 해제
#define LSID_AUTO000171							0x00000117		// 이동속도 %d% 증가
#define LSID_AUTO000172							0x00000118		// PC나 NPC(MOB)의 약한 부위를 가르쳐줌
#define LSID_AUTO000173							0x00000119		// FP 회복량 %d 증가
#define LSID_AUTO000174							0x0000011A		// 포스 공격력 %s
#define LSID_AUTO000175							0x0000011B		// FP 최대량 %s
#define LSID_AUTO000176							0x0000011C		// 현재 위치한 장소의 맵 아이템이 없습니다.
#define LSID_AUTO000177							0x0000011D		// 알수없는 QBI 입니다.
#define LSID_AUTO000178							0x0000011E		// 아바타가 죽은 상태에서는 맵 이동을 할 수 없습니다.
#define LSID_AUTO000179							0x0000011F		// 아바타가 움직일 수 없는 상태에서는 맵 이동을 할 수 없습니다.
#define LSID_AUTO000180							0x00000120		// 채굴중에는 맵 이동을 할 수 없습니다.
#define LSID_AUTO000181							0x00000121		// 보상 - %s : %d
#define LSID_AUTO000182							0x00000122		// %s  골드 : %d 
#define LSID_AUTO000183							0x00000123		// %s  경험치 : %d 
#define LSID_AUTO000184							0x00000124		// 서기
#define LSID_AUTO000185							0x00000125		// 앉기
#define LSID_AUTO000186							0x00000126		// 인사
#define LSID_AUTO000187							0x00000127		// 경례
#define LSID_AUTO000188							0x00000128		// 안녕
#define LSID_AUTO000189							0x00000129		// 부르기
#define LSID_AUTO000190							0x0000012A		// 박수
#define LSID_AUTO000191							0x0000012B		// 만세
#define LSID_AUTO000192							0x0000012C		// 울기
#define LSID_AUTO000193							0x0000012D		// 웃기
#define LSID_AUTO000194							0x0000012E		// 기백
#define LSID_AUTO000195							0x0000012F		// 함성
#define LSID_AUTO000196							0x00000130		// 파티
#define LSID_AUTO000197							0x00000131		// 길드
#define LSID_AUTO000198							0x00000132		// 국가
#define LSID_AUTO000199							0x00000133		// 종족
#define LSID_AUTO000200							0x00000134		// 같은 종족 모두에게 메세지를 보낼 수 없습니다.
#define LSID_AUTO000201							0x00000135		// 마을
#define LSID_AUTO000202							0x00000136		// 공지
#define LSID_AUTO000203							0x00000137		// 팁
#define LSID_AUTO000204							0x00000138		// 이동
#define LSID_AUTO000205							0x00000139		// 정보
#define LSID_AUTO000206							0x0000013A		// %투명인간
#define LSID_AUTO000207							0x0000013B		// 일반 등급의 플레이어를 공격할 수 없습니다.
#define LSID_AUTO000208							0x0000013C		// 다른 종족의 상인과는 거래가 불가능합니다.
#define LSID_AUTO000209							0x0000013D		// 01. 사정 거리 (+): <S>%d - <F>%d - <M>%d - <B>%d - <F>%d - <L>%d - <T>%d<br>
#define LSID_AUTO000210							0x0000013E		// 02. 공격 속도 (+) : <S>%d - <F>%d - <M>%d - <B>%d - <F>%d - <L>%d - <T>%d<br>
#define LSID_AUTO000211							0x0000013F		// 03. 공격력 (*) : <S>%.2f - <F>%.2f - <M>%.2f - <B>%.2f - <F>%.2f - <L>%.2f - <T>%.2f<br>
#define LSID_AUTO000212							0x00000140		// 04. 명중률 (*) : <S>%.2f - <F>%.2f - <M>%.2f - <B>%.2f - <F>%.2f - <L>%.2f - <T>%.2f<br>
#define LSID_AUTO000213							0x00000141		// 05. 회피율 (*) : <S>%.2f - <F>%.2f - <M>%.2f - <B>%.2f - <F>%.2f - <L>%.2f - <T>%.2f<br>
#define LSID_AUTO000214							0x00000142		// 06. FP 소모량 (*) : %.2f<br>
#define LSID_AUTO000215							0x00000143		// 07. 이동 속도 (+) : %.2f<br>
#define LSID_AUTO000216							0x00000144		// 08. 시야 거리 (*) : %.2f<br>
#define LSID_AUTO000217							0x00000145		// 10. 방어력 - 방패 제외 (*) : %.2f<br>
#define LSID_AUTO000218							0x00000146		// 11. 최대 HP & FP (*) : %.2f<br>
#define LSID_AUTO000219							0x00000147		// 12. 방어력 (*) : %.2f<br>
#define LSID_AUTO000220							0x00000148		// 13. 스킬 레벨 (+) : %d<br>
#define LSID_AUTO000221							0x00000149		// 14. 적 캐릭터의 약한 부위 표시 (+) : %d<br>
#define LSID_AUTO000222							0x0000014A		// 15. 스텔스 가능 (+) : %d<br>
#define LSID_AUTO000223							0x0000014B		// 16. 디텍트 가능 (+) : %d<br>
#define LSID_AUTO000224							0x0000014C		// 17. 반격 가능 (+) : %d<br>
#define LSID_AUTO000225							0x0000014D		// 18. 달리기 불가능 (+) : %d<br>
#define LSID_AUTO000226							0x0000014E		// 19. 움직임 불가능 (+) : %d<br>
#define LSID_AUTO000227							0x0000014F		// 20. 스킬 사용 불가능 (+) : <A>%d - <SO>%d - <SCP>%d - <SCL>%d<br>
#define LSID_AUTO000228							0x00000150		// 21. 포스 사용 불가능 (+) : <A>%d - <SO>%d - <SCP>%d - <SCL>%d<br>
#define LSID_AUTO000229							0x00000151		// 22. 일반 공격력 : <Min>%d - <Max>%d<br>
#define LSID_AUTO000230							0x00000152		// 23. 포스 공격력 : <Min>%d - <Max>%d<br>
#define LSID_AUTO000231							0x00000153		// 24. 방어력 : %d<br>
#define LSID_AUTO000232							0x00000154		// 25. 내성 : <Fire>%d - <Water>%d - <Earth>%d - <Wind>%d<br>
#define LSID_AUTO000233							0x00000155		// 26. 증가된 딜레이 : %d<br>
#define LSID_AUTO000234							0x00000156		// 27. 현재 무기의 명중률 증가치: %.2f<br>
#define LSID_AUTO000235							0x00000157		// 28. 약한 부위 : %d<br>
#define LSID_AUTO000236							0x00000158		// 파티 리더
#define LSID_AUTO000237							0x00000159		// 유닛 탑승중에는 아이템을 장착 / 해제할 수 없습니다.
#define LSID_AUTO000238							0x0000015A		// 아바타가 전투중이거나 스킬/포스 등의 사용중에는 무기/방패를 장착/해제할 수 없습니다.
#define LSID_AUTO000239							0x0000015B		// 인벤토리 빈 공간이 없습니다.
#define LSID_AUTO000240							0x0000015C		// 이미 방패를 구입하고 있으므로 양손/쌍손 무기 장착/구입할 수 없습니다.
#define LSID_AUTO000241							0x0000015D		// 이미 양손/쌍손 무기를 구입하고 있으므로 방패는 장착/구입할 수 없습니다.
#define LSID_AUTO000242							0x0000015E		// 인벤토리에 가방을 더 이상 추가할 수 없습니다.
#define LSID_AUTO000243							0x0000015F		// 소환중인 애니머스 아이템은 인벤토리로 옮길 수 없습니다.
#define LSID_AUTO000244							0x00000160		// 플레이어와 아이템을 트레이드 하는 중에는 아이템을 장착 / 해제할 수 없습니다.
#define LSID_AUTO000245							0x00000161		// 현재는 채굴중이므로 인벤토리에 최소한 한칸은 남겨두어야 합니다.
#define LSID_AUTO000246							0x00000162		// 현재 채굴에 사용중인 배터리 입니다. 채굴이 끝날때까지 기다려 주십시오.
#define LSID_AUTO000247							0x00000163		// 채굴중에는 귀환 아이템을 사용할 수 없습니다.
#define LSID_AUTO000248							0x00000164		// 던전내에서는 사용이 불가능 합니다.
#define LSID_AUTO000249							0x00000165		// 기갑 장비 출고를 위해서는 %s %s가 필요합니다.
#define LSID_AUTO000250							0x00000166		// 기갑 장비 출고시 %s %s가 소모됩니다.<br>출고 하시겠습니까?
#define LSID_AUTO000251							0x00000167		// 가드 타워 설치는 해당 스킬을 가진 사람만이 사용할 수 있습니다.
#define LSID_AUTO000252							0x00000168		// 가드 타워 설치를 위해 필요한 FP가 부족합니다.
#define LSID_AUTO000253							0x00000169		// 가드 타워 제작에 필요한 재료가 부족합니다. %s %d개가 필요합니다.
#define LSID_AUTO000254							0x0000016A		// 트랩 설치는 해당 스킬을 가진 사람만이 사용할 수 있습니다.
#define LSID_AUTO000255							0x0000016B		// 트랩 설치를 위해 필요한 FP가 부족합니다.
#define LSID_AUTO000256							0x0000016C		// 인벤토리에 빈 공간이 없습니다.
#define LSID_AUTO000257							0x0000016D		// 플레이어와 트레이드 중에는 아이템을 루팅할 수 없습니다.
#define LSID_AUTO000258							0x0000016E		// %s %d개를 획득하였습니다. ( %d번째 가방 %d번째 칸에 삽입 되었습니다. )
#define LSID_AUTO000259							0x0000016F		// %s %d개를 획득하였습니다. ( %d번째 가방 %d번째 칸에 합쳐졌습니다. )
#define LSID_AUTO000260							0x00000170		// 아이템을 나눌 수 없습니다.
#define LSID_AUTO000261							0x00000171		// 플레이어와 아이템을 트레이드 하는 중에는 아이템을 이동할 수 없습니다.
#define LSID_AUTO000262							0x00000172		// 같은 종류의 아이템이 아닙니다.<br>다른 종류의 아이템은 교체될 수 없습니다.
#define LSID_AUTO000263							0x00000173		// 스와핑할 수 없습니다.
#define LSID_AUTO000264							0x00000174		// 기갑 장비 탑승중에는 포션을 사용할 수 없습니다.
#define LSID_AUTO000265							0x00000175		// 현재 거래중인 소켓입니다.
#define LSID_AUTO000266							0x00000176		// 현재 거래중인 아이템은 이동할 수 없습니다.
#define LSID_AUTO000267							0x00000177		// 장착중인 아이템은 업그레이드가 불가능합니다.
#define LSID_AUTO000268							0x00000178		// 업그레이드가 불가능한 아이템 입니다.
#define LSID_AUTO000269							0x00000179		// 이미 동일한 아이템이 있습니다.
#define LSID_AUTO000270							0x0000017A		// 더 이상 같은 종류의 탈릭을 사용할 수 없습니다.
#define LSID_AUTO000271							0x0000017B		// 무기에는 광휘, 정화, 수호, 신념의 탈릭 중 오직 하나만을 사용할 수 있습니다.
#define LSID_AUTO000272							0x0000017C		// 업그레이드에는 탈릭 혹은 보석만이 사용됩니다.
#define LSID_AUTO000273							0x0000017D		// 먼저 업그레이드할 아이템을 선택해 주십시오.
#define LSID_AUTO000274							0x0000017E		// 업그레이드할 아이템이 없습니다.
#define LSID_AUTO000275							0x0000017F		// 업그레이드시에는 반드시 탈릭이 있어야 합니다.
#define LSID_AUTO000276							0x00000180		// 더 이상 업그레이드가 불가능한 아이템 입니다.
#define LSID_AUTO000277							0x00000181		// 더 이상 다운그레이드 할 수 없는 아이템 입니다.
#define LSID_AUTO000278							0x00000182		// 아이템 제작은 해당 클래스를 가진 플레이어만이 할 수 있습니다.
#define LSID_AUTO000279							0x00000183		// 아이템을 제작하기 위해 필요한 자원이 없거나 수량이 부족합니다.
#define LSID_AUTO000280							0x00000184		// %s 1개를 제작하였습니다. ( %d번째 가방 %d번째 칸 )
#define LSID_AUTO000281							0x00000185		// 아이템 제작에 실패 하였습니다.
#define LSID_AUTO000282							0x00000186		// 이미 원석 가공을 요청하였습니다. 잠시만 기다려 주십시오.
#define LSID_AUTO000283							0x00000187		// 가공을 시작하려면 먼저 임시 저장창을 모두 비워 주십시오.
#define LSID_AUTO000284							0x00000188		// 원석 가공에 필요한 %s가 부족합니다.
#define LSID_AUTO000285							0x00000189		// %s %d개가 %d번째 가방 %d번째 칸에 합쳐졌습니다.
#define LSID_AUTO000286							0x0000018A		// %s %d개가 %d번째 가방 %d번째 칸으로 이동되었습니다.
#define LSID_AUTO000287							0x0000018B		// 공격할 타겟을 먼저 선택해 주십시오.
#define LSID_AUTO000288							0x0000018C		// 우호적인 캐릭터는 공격할 수 없습니다. 적 캐릭터를 선택해 주십시오.
#define LSID_AUTO000289							0x0000018D		// 소환창에 이미 등록되어 있는 애니머스입니다.
#define LSID_AUTO000290							0x0000018E		// 애니머스를 소환하였습니다.
#define LSID_AUTO000291							0x0000018F		// 애니머스를 귀환시켰습니다.
#define LSID_AUTO000292							0x00000190		// 아직 소환 기술을 사용할 수 없습니다. 잠시 기다려 주십시오 ( 대기시간 %d초 ).
#define LSID_AUTO000293							0x00000191		// 아바타가 사용할 수 없는 포스입니다.
#define LSID_AUTO000294							0x00000192		// 포스창에 이미 등록되어 있는 포스입니다.
#define LSID_AUTO000295							0x00000193		// 현재 선택한 위치는 채굴을 할 수 없는 곳입니다.
#define LSID_AUTO000296							0x00000194		// 현재 위치는 채굴할 수 없는 곳입니다.
#define LSID_AUTO000297							0x00000195		// 배터리의 용량이 부족합니다. 새로운 배터리를 사용하십시오.
#define LSID_AUTO000298							0x00000196		// 인벤토리에 배터리가 없습니다.
#define LSID_AUTO000299							0x00000197		// 채굴을 할 수 없는 상태에서는 채굴 모드를 변경할 수 없습니다.
#define LSID_AUTO000300							0x00000198		// 환전에 실패 했습니다.
#define LSID_AUTO000301							0x00000199		// [%s] 골드
#define LSID_AUTO000302							0x0000019A		// 환전 금액의 일부가 수수료로 감안되어<br>%s로 환전됩니다.<br><br>승인하시겠습니까?<br>
#define LSID_AUTO000303							0x0000019B		// %s님이 파티에 초대 하였습니다. 합류 하시겠습니까?
#define LSID_AUTO000304							0x0000019C		// %s님이 현재 파티에 합류 요청을 하였습니다. 허락하시겠습니까?
#define LSID_AUTO000305							0x0000019D		// %s님으로부터 아이템 트레이드 요청이 왔습니다. 허락하시겠습니까?
#define LSID_AUTO000306							0x0000019E		// %s님께 승직할 수 있는 자격이 주어졌습니다. 베이스내의 종족관리인을 통해 승직할 수 있습니다.
#define LSID_AUTO000307							0x0000019F		// %s님께 새로운 퀘스트가 전달되었습니다. 브리핑을 받으시겠습니까?
#define LSID_AUTO000308							0x000001A0		// 현재 수행중인 퀘스트를 완수하지 못했습니다. 결과를 확인하시겠습니까?
#define LSID_AUTO000309							0x000001A1		// 현재 수행중인 퀘스트를 완수하였습니다. 결과를 확인하시겠습니까?
#define LSID_AUTO000310							0x000001A2		// %s님께서 수행하신 퀘스트에 대한 보상이 주어졌습니다. 내용을 확인해 주십시오.
#define LSID_AUTO000311							0x000001A3		// 부활 하시겠습니까?
#define LSID_AUTO000312							0x000001A4		// 기여도
#define LSID_AUTO000313							0x000001A5		// 일반 파티 멤버에게는 가입 초대나 가입 요청을 할 수 없습니다.
#define LSID_AUTO000314							0x000001A6		// 이미 다른 파티에 속한 플레이어 입니다.
#define LSID_AUTO000315							0x000001A7		// 파티 멤버는 다른 플레이어를 초대할 수 없습니다.
#define LSID_AUTO000316							0x000001A8		// 파티 잠금 상태에서는 새로운 파티원을 가입시킬 수 없습니다.
#define LSID_AUTO000317							0x000001A9		// 아바타가 이미 파티에 가입되어 있습니다.
#define LSID_AUTO000318							0x000001AA		// 파티 리더만이 변경 요청을 할 수 있습니다.
#define LSID_AUTO000319							0x000001AB		// 자신의 파티원만을 리더로 변경할 수 있습니다.
#define LSID_AUTO000320							0x000001AC		// 파티리더 변경이 실패하였습니다.
#define LSID_AUTO000321							0x000001AD		// 파티리더가 %s님으로 변경 되었습니다.
#define LSID_AUTO000322							0x000001AE		// 파티리더가 변경 되었습니다.
#define LSID_AUTO000323							0x000001AF		// 파티 리더만이 파티원을 강제 퇴장 시킬 수 있습니다.
#define LSID_AUTO000324							0x000001B0		// 자신의 파티원만을 강제 퇴장 시킬 수 있습니다.
#define LSID_AUTO000325							0x000001B1		// 파티에서 강퇴 당하였습니다.
#define LSID_AUTO000326							0x000001B2		// %s님이 파티에서 강퇴 당하였습니다.
#define LSID_AUTO000327							0x000001B3		// 파티원이 강퇴 당하였습니다.
#define LSID_AUTO000328							0x000001B4		// 파티 리더는 파티를 탈퇴할 수 없습니다.
#define LSID_AUTO000329							0x000001B5		// 파티를 탈퇴하였습니다.
#define LSID_AUTO000330							0x000001B6		// %s님이 파티를 탈퇴 하였습니다.
#define LSID_AUTO000331							0x000001B7		// 파티원이 탈퇴 하였습니다.
#define LSID_AUTO000332							0x000001B8		// 파티 리더만이 잠금 요청을 할 수 있습니다.
#define LSID_AUTO000333							0x000001B9		// 다시 튜토리얼을 하실 수 없습니다.<br>그래도 그만 하시겠습니까?
#define LSID_AUTO000334							0x000001BA		// %s 튜토리얼 파일이 없습니다!
#define LSID_AUTO000335							0x000001BB		// Dev 버전에선 'K' 키로 해당 튜토리얼 스킵가능합니다.
#define LSID_AUTO000336							0x000001BC		// 지금 취소하시면 다시 튜토리얼을 하실 수 없습니다.<br>그래도 취소하시겠습니까?
#define LSID_AUTO000337							0x000001BD		// 튜토리얼
#define LSID_AUTO000338							0x000001BE		// 아바타가 죽은 상태에서는 아이템을 장착/해제/사용할 수 없습니다.
#define LSID_AUTO000339							0x000001BF		// 아이템을 버리시겠습니까?
#define LSID_AUTO000340							0x000001C0		// 버리기가 불가능한 아이템 입니다.
#define LSID_AUTO000341							0x000001C1		// 플레이어와 트레이드 중에는 아이템을 버릴 수 없습니다.
#define LSID_AUTO000342							0x000001C2		// %s %d개를 버렸습니다.
#define LSID_AUTO000343							0x000001C3		// 이미 링크된 아이템입니다.
#define LSID_AUTO000344							0x000001C4		// 빈 공간이 없습니다.
#define LSID_AUTO000345							0x000001C5		// 단축 아이템은 거래할 수 없습니다.
#define LSID_AUTO000346							0x000001C6		// %s님에게 이미 거래를 요청하였습니다. 잠시만 기다려 주십시오.
#define LSID_AUTO000347							0x000001C7		// 아이템 트레이드가 불가능한 아이템 입니다.
#define LSID_AUTO000348							0x000001C8		// 현재 기갑 장비 아이템은 트레이드할 수 없습니다.
#define LSID_AUTO000349							0x000001C9		// 거래 리스트에 이미 동일한 아이템이 있습니다.
#define LSID_AUTO000350							0x000001CA		// 거래를 하는데 필요한 공간이 확보되지 않았습니다.
#define LSID_AUTO000351							0x000001CB		// 두 사람 모두 거래 리스트를 잠궈야만 승인할 수 있습니다.
#define LSID_AUTO000352							0x000001CC		// 구입
#define LSID_AUTO000353							0x000001CD		// 판매
#define LSID_AUTO000354							0x000001CE		// 수리
#define LSID_AUTO000355							0x000001CF		// 교환
#define LSID_AUTO000356							0x000001D0		// [ 아이템 %s 성공 ]<br><br>
#define LSID_AUTO000357							0x000001D1		// %s%d . %s ( %d개 )<br>
#define LSID_AUTO000358							0x000001D2		// %s<br>금액 : %s - %s<br>
#define LSID_AUTO000359							0x000001D3		// %s       골드 - %s
#define LSID_AUTO000360							0x000001D4		// [ 아이템 %s 실패 ]
#define LSID_AUTO000361							0x000001D5		// 해당 아이템은 사용할 수 있는 클래스를 가진 플레이어만이 구입할 수 있습니다.
#define LSID_AUTO000362							0x000001D6		// 빈 소켓이 없습니다.
#define LSID_AUTO000363							0x000001D7		// %s가 부족합니다.
#define LSID_AUTO000364							0x000001D8		// Gold가 부족합니다.
#define LSID_AUTO000365							0x000001D9		// 이미 방패를 구입하고 있으므로 양손/쌍손 무기는 장착/구입할 수 없습니다.
#define LSID_AUTO000366							0x000001DA		// 기갑 장비 아이템은 단일 수량으로만 거래할 수 있습니다.
#define LSID_AUTO000367							0x000001DB		// 더 이상 기갑장비 아이템을 구입할 수 없습니다.
#define LSID_AUTO000368							0x000001DC		// 판매가 불가능한 아이템입니다.
#define LSID_AUTO000369							0x000001DD		// 이 상점에는 팔 수 없는 아이템입니다.
#define LSID_AUTO000370							0x000001DE		// 수리가 불가능한 아이템입니다.
#define LSID_AUTO000371							0x000001DF		// 수리할 필요가 없는 아이템입니다.
#define LSID_AUTO000372							0x000001E0		// 거래량 초과
#define LSID_AUTO000373							0x000001E1		// 선택된 아이템을 %s하시겠습니까?
#define LSID_AUTO000374							0x000001E2		// 이미 다른 유닛을 출고 하였습니다.
#define LSID_AUTO000375							0x000001E3		// 현재 출고한 유닛이 없습니다.
#define LSID_AUTO000376							0x000001E4		// 이미 다른 기갑 장비를 튜닝하고 있습니다.
#define LSID_AUTO000377							0x000001E5		// 기갑장비를 튜닝하기 위한 %s가 부족합니다.
#define LSID_AUTO000378							0x000001E6		// 기갑 장비 튜닝을 마쳤습니다.
#define LSID_AUTO000379							0x000001E7		// 기갑 장비 튜닝에 실패하였습니다.
#define LSID_AUTO000380							0x000001E8		// 이미 최종 단계의 클래스까지 승직을 마쳤습니다.
#define LSID_AUTO000381							0x000001E9		// 아직 승직할 수 있는 자격이 없습니다.
#define LSID_AUTO000382							0x000001EA		// 선택한 클래스로 승직 하시겠습니까?
#define LSID_AUTO000383							0x000001EB		// 선택한 아이템을 보상으로 받으시겠습니까?
#define LSID_AUTO000384							0x000001EC		// 아바타의 클래스가 %s(으)로 승직 되었습니다.
#define LSID_AUTO000385							0x000001ED		// 새로운 클래스 스킬이 추가 되었습니다.
#define LSID_AUTO000386							0x000001EE		// 잠시후 다시 시도해 주십시오.
#define LSID_AUTO000387							0x000001EF		// 테스트용 캐릭터 크레이트 화면 - -^
#define LSID_AUTO000388							0x000001F0		// 종족 : BELLATOR
#define LSID_AUTO000389							0x000001F1		// 종족 : CORA
#define LSID_AUTO000390							0x000001F2		// 종족 : ACCRETIAN
#define LSID_AUTO000391							0x000001F3		// 성별 : 남
#define LSID_AUTO000392							0x000001F4		// 성별 : 여
#define LSID_AUTO000393							0x000001F5		// 서버에서 응답이 없습니다. 프로그램을 종료합니다.<br>잠시후 다시 접속해 주십시오.
#define LSID_AUTO000394							0x000001F6		// ID가 성공적으로 만들어 졌습니다.
#define LSID_AUTO000395							0x000001F7		// 동기화 에러입니다.
#define LSID_AUTO000396							0x000001F8		// DB 에러 입니다.
#define LSID_AUTO000397							0x000001F9		// 로그인 중에는 계정을 만들수가 없습니다.
#define LSID_AUTO000398							0x000001FA		// 이미 등록된 계정입니다.
#define LSID_AUTO000399							0x000001FB		// 아이디가 유효하지 않습니다.
#define LSID_AUTO000400							0x000001FC		// 아이디 인증에 실패했습니다.<br>잘못된 패스워드입니다.
#define LSID_AUTO000401							0x000001FD		// 동기화 에러 입니다.
#define LSID_AUTO000402							0x000001FE		// 계정이 이미 로그인 중입니다.<br>기존의 접속을 끊으시겠습니까?
#define LSID_AUTO000403							0x000001FF		// 유저수가 너무 많습니다. 
#define LSID_AUTO000404							0x00000200		// 로그인을 실패했습니다.<br>잠시후 다시 접속해 주십시오.
#define LSID_AUTO000405							0x00000201		// 월드 서버 리스트 요청에 실패했습니다.
#define LSID_AUTO000406							0x00000202		// 월드 서버 선택 요청에 실패했습니다.
#define LSID_AUTO000407							0x00000203		// 월드 서버 접속에 실패했습니다.
#define LSID_AUTO000408							0x00000204		// 디스커넥트 요청을 실패했습니다.
#define LSID_AUTO000409							0x00000205		// 잠시기다려주세요.
#define LSID_AUTO000410							0x00000206		// 캐릭터가 성공적으로 생성되었습니다.
#define LSID_AUTO000411							0x00000207		// 이미 같은 캐릭터 이름이 있습니다
#define LSID_AUTO000412							0x00000208		// 캐릭터 생성 에러
#define LSID_AUTO000413							0x00000209		// 캐릭터 선택 오류발생.
#define LSID_AUTO000414							0x0000020A		// 캐릭터가 삭제되었습니다.
#define LSID_AUTO000415							0x0000020B		// 캐릭터 삭제 오류발생.
#define LSID_AUTO000416							0x0000020C		// 캐릭터 정보를 가져올 수가 없습니다.
#define LSID_AUTO000417							0x0000020D		// 같은 이름의 캐릭터가 있습니다.
#define LSID_AUTO000418							0x0000020E		// 서버와 연결이 종료되었습니다.
#define LSID_AUTO000419							0x0000020F		// %s 패치를 받아주세요. 다시실행하시길 바랍니다.
#define LSID_AUTO000420							0x00000210		// 로딩 중 입니다. 잠시 기다려 주세요!!
#define LSID_AUTO000421							0x00000211		// 서버에 접속할 수 없습니다.
#define LSID_AUTO000422							0x00000212		// [Deprecated]
#define LSID_AUTO000423							0x00000213		// [Deprecated]
#define LSID_AUTO000424							0x00000214		// [Deprecated]
#define LSID_AUTO000425							0x00000215		// [Deprecated]
#define LSID_AUTO000426							0x00000216		// [Deprecated]
#define LSID_AUTO000427							0x00000217		// [Deprecated]
#define LSID_AUTO000428							0x00000218		// [Deprecated]
#define LSID_AUTO000429							0x00000219		// [Deprecated]
#define LSID_AUTO000430							0x0000021A		// [Deprecated]
#define LSID_AUTO000431							0x0000021B		// [Deprecated]
#define LSID_AUTO000432							0x0000021C		// [Deprecated]
#define LSID_AUTO000433							0x0000021D		// 플레이어와 트레이드 중에는 로그아웃 할 수 없습니다.
#define LSID_AUTO000434							0x0000021E		// 바른말 고운말을 사용합시다.
#define LSID_AUTO000435							0x0000021F		// 광고성 문구나 비속한 문장을 포함였습니다.
#define LSID_AUTO000436							0x00000220		// Ctrl + F1 : 도움말 On / Off
#define LSID_AUTO000437							0x00000221		// Ctrl + F2 : 장착 제한 On / Off
#define LSID_AUTO000438							0x00000222		// Ctrl + F3 : 맵 이동 On / Off
#define LSID_AUTO000439							0x00000223		// Ctrl + F4 : 충돌맵 On / Off
#define LSID_AUTO000440							0x00000224		// Ctrl + F5 : 게임 정보 On / Off
#define LSID_AUTO000441							0x00000225		// Ctrl + F6 : 캐릭터 정보 On / Off
#define LSID_AUTO000442							0x00000226		// Ctrl + F7 : 바운딩 박스 렌더링 On / Off
#define LSID_AUTO000443							0x00000227		// Ctrl + F8 : 네트웍 메세지 저장 On / Off
#define LSID_AUTO000444							0x00000228		// 서버로부터 응답이 없어 프로그램을 종료합니다. 잠시후 다시 접속해 주십시오.
#define LSID_AUTO000445							0x00000229		// %d초 후에 로그 아웃합니다.
#define LSID_AUTO000446							0x0000022A		// 더 이상 이동할 수 없습니다. 지역을 벗어나서는 튜토리얼을 진행할 수 없습니다.
#define LSID_AUTO000447							0x0000022B		// [Deprecated]
#define LSID_AUTO000448							0x0000022C		// %s 파일이 없습니다!
#define LSID_AUTO000449							0x0000022D		// 튜토리얼중에는 로그아웃을 할수 없습니다. 튜토리얼을 끝까지 마쳐 주십시오.
#define LSID_AUTO000450							0x0000022E		// 스크린샷을 저장하였습니다.
#define LSID_AUTO000451							0x0000022F		// 아바타의 파티 탈퇴 요청이 실패 했습니다.
#define LSID_AUTO000452							0x00000230		// 아바타의 파티 강퇴 요청이 실패 했습니다.
#define LSID_AUTO000453							0x00000231		// 파티가 해제 되었습니다.
#define LSID_AUTO000454							0x00000232		// 파티 해제 요청이 실패하였습니다.
#define LSID_AUTO000455							0x00000233		// 파티리더 변경요청이 실패 했습니다.
#define LSID_AUTO000456							0x00000234		// 파티 잠금 요청 실패
#define LSID_AUTO000457							0x00000235		// 클라이언트와 서버의 맵 인덱스가 틀립니다.
#define LSID_AUTO000458							0x00000236		// 맵 이동 실패 : 잘못된 포탈 번호
#define LSID_AUTO000459							0x00000237		// 맵 이동 실패 : 포탈과의 거리가 너무 멈
#define LSID_AUTO000460							0x00000238		// 맵 이동 실패 : 잘못된 맵 코드
#define LSID_AUTO000461							0x00000239		// 맵 이동 실패 : 잘못된 포탈 코드
#define LSID_AUTO000462							0x0000023A		// 맵 이동 실패 : 연결 좌표 영역 에러
#define LSID_AUTO000463							0x0000023B		// 맵 이동 실패 : 알 수 없는 에러
#define LSID_AUTO000464							0x0000023C		// 바인딩 위치 저장에 성공하였습니다.
#define LSID_AUTO000465							0x0000023D		// 바인딩 위치 저장에 실패하였습니다.
#define LSID_AUTO000466							0x0000023E		// 던젼 관련 에러 : 던젼 아이템이 없습니다.
#define LSID_AUTO000467							0x0000023F		// 던젼 관련 에러 : 던젼 아이템이 아닙니다.
#define LSID_AUTO000468							0x00000240		// 던젼 관련 에러 : 현재 던젼을 생성시킬 수 없습니다. 잠시후 다시 시도해 주십시오.
#define LSID_AUTO000469							0x00000241		// 던젼 관련 에러 : 던젼 생성을 실패하였습니다.
#define LSID_AUTO000470							0x00000242		// 던젼 관련 에러 : 존재하지 않는 던젼입니다.
#define LSID_AUTO000471							0x00000243		// 던젼 관련 에러 : 던젼에 들어갈 수 있는 권한이 없습니다.
#define LSID_AUTO000472							0x00000244		// 던젼 관련 에러 : 위치 설정에 실패 하였습니다.
#define LSID_AUTO000473							0x00000245		// 던젼 관련 에러 : 현재 맵 이동 중입니다.
#define LSID_AUTO000474							0x00000246		// 던젼 관련 에러 : 현재 던젼안에 있지 않습니다.
#define LSID_AUTO000475							0x00000247		// 던젼 관련 에러 : 던젼과 거리가 멉니다.
#define LSID_AUTO000476							0x00000248		// 던젼 관련 에러 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000477							0x00000249		// 아이템 장착 실패 : 저장 위치 틀림
#define LSID_AUTO000478							0x0000024A		// 아이템 장착 실패 : 없는 아이템
#define LSID_AUTO000479							0x0000024B		// 아이템 장착 실패 : 장착 아이템이 아님
#define LSID_AUTO000480							0x0000024C		// 아이템 장착 실패 : 사용할 수 없는 종족임
#define LSID_AUTO000481							0x0000024D		// 아이템 장착 실패 : 방패를 들었음
#define LSID_AUTO000482							0x0000024E		// 아이템 장착 실패 : 양손 무기를 들었음
#define LSID_AUTO000483							0x0000024F		// 아이템 장착 실패 : 숙련도가 낮음
#define LSID_AUTO000484							0x00000250		// 아이템 장착 실패 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000485							0x00000251		// 아이템 루팅 실패 - 빈 공간이 없음
#define LSID_AUTO000486							0x00000252		// 아이템 루팅 실패 - 인벤토리에 기존의 아이템이 없음
#define LSID_AUTO000487							0x00000253		// 아이템 루팅 실패 - 인벤토리에 빈공간이 없음
#define LSID_AUTO000488							0x00000254		// 아이템 루팅 실패 - 루팅하려는 그라운드 아이템이 없음
#define LSID_AUTO000489							0x00000255		// 아이템 루팅 실패 - 루팅 권한이 없음
#define LSID_AUTO000490							0x00000256		// 아이템 루팅 실패 - 거리 제한
#define LSID_AUTO000491							0x00000257		// 아이템 루팅 실패 - 알 수 없는 에러
#define LSID_AUTO000492							0x00000258		// 루팅 성공
#define LSID_AUTO000493							0x00000259		// 아이템 제작 실패 : 제작 도구가 아닙니다.
#define LSID_AUTO000494							0x0000025A		// 아이템 제작 실패 : 제작 도구가 없습니다.
#define LSID_AUTO000495							0x0000025B		// 아이템 제작 실패 : 인벤토리에 빈 공간이 없습니다.
#define LSID_AUTO000496							0x0000025C		// 아이템 제작 실패 : 제작에 필요한 재료의 수량이 부족합니다.
#define LSID_AUTO000497							0x0000025D		// 아이템 제작 실패 : 제작에 필요한 재료가 없습니다.
#define LSID_AUTO000498							0x0000025E		// 아이템 제작 실패 : 알 수 없는 에러
#define LSID_AUTO000499							0x0000025F		// 아이템 업그레이드에 성공 했습니다.
#define LSID_AUTO000500							0x00000260		// 아이템 업그레이드에 실패 하였습니다.
#define LSID_AUTO000501							0x00000261		// 아이템 업그레이드 실패 : 기존의 탈릭이 모두 파괴되었습니다.
#define LSID_AUTO000502							0x00000262		// 아이템 업그레이드 실패 : 업그레이드 하려던 아이템이 파괴되었습니다.
#define LSID_AUTO000503							0x00000263		// 아이템 업그레이드 실패 : 소유하지 않은 탈릭입니다.
#define LSID_AUTO000504							0x00000264		// 아이템 업그레이드 실패 : 탈릭이 아닙니다.
#define LSID_AUTO000505							0x00000265		// 아이템 업그레이드 실패 : 업그레이드 툴이 아닙니다.
#define LSID_AUTO000506							0x00000266		// 아이템 업그레이드 실패 : 업그레이드 하려는 아이템이 없습니다.
#define LSID_AUTO000507							0x00000267		// 아이템 업그레이드 실패 : 소유하지 않은 보석입니다.
#define LSID_AUTO000508							0x00000268		// 아이템 업그레이드 실패 : 보석이 보석입니다.
#define LSID_AUTO000509							0x00000269		// 아이템 업그레이드 실패 : 이미 내성탈릭을 이용해 업그레이드한 아이템입니다.
#define LSID_AUTO000510							0x0000026A		// 아이템 업그레이드 실패 : 업그레이드가 불가능한 아이템입니다.
#define LSID_AUTO000511							0x0000026B		// 아이템 업그레이드 실패 : 이미 최고 단계까지 업그레이드 되어있는 아이템입니다.
#define LSID_AUTO000512							0x0000026C		// 아이템 업그레이드 실패 : 업그레이드 하려는 아이템에 해당 탈릭을 추가할 수 없습니다.
#define LSID_AUTO000513							0x0000026D		// 아이템 업그레이드 실패 : 알 수 없는 에러.
#define LSID_AUTO000514							0x0000026E		// 아이템 다운그레이드에 성공 했습니다.
#define LSID_AUTO000515							0x0000026F		// 아이템 다운그레이드 실패 : 소유하지 않은 탈릭입니다.
#define LSID_AUTO000516							0x00000270		// 아이템 다운그레이드 실패 : 탈릭이 아닙니다.
#define LSID_AUTO000517							0x00000271		// 아이템 다운그레이드 실패 : 다운그레이드 툴이 아닙니다.
#define LSID_AUTO000518							0x00000272		// 아이템 다운그레이드 실패 : 다운그레이드 하려는 아이템이 없습니다.
#define LSID_AUTO000519							0x00000273		// 아이템 다운그레이드 실패 : 소유하지 않은 보석입니다.
#define LSID_AUTO000520							0x00000274		// 아이템 다운그레이드 실패 : 보석이 보석입니다.
#define LSID_AUTO000521							0x00000275		// 아이템 다운그레이드 실패 : 이미 내성탈릭을 이용해 다운그레이드한 아이템입니다.
#define LSID_AUTO000522							0x00000276		// 아이템 다운그레이드 실패 : 다운그레이드가 불가능한 아이템입니다.
#define LSID_AUTO000523							0x00000277		// 아이템 다운그레이드 실패 : 이미 최고 단계까지 다운그레이드 되어있는 아이템입니다.
#define LSID_AUTO000524							0x00000278		// 아이템 다운그레이드 실패 : 다운그레이드 하려는 아이템에 해당 탈릭을 추가할 수 없습니다.
#define LSID_AUTO000525							0x00000279		// 아이템 다운그레이드 실패 : 다운그레이드가 되어있지 않은 아이템입니다.
#define LSID_AUTO000526							0x0000027A		// 아이템 다운그레이드 실패 : 알 수 없는 에러.
#define LSID_AUTO000527							0x0000027B		// 아이템 관련 에러 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000528							0x0000027C		// 캐릭터 타겟팅 실패
#define LSID_AUTO000529							0x0000027D		// 아이템 정리 관련 에러 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000530							0x0000027E		// 애니머스가 귀환되었습니다.
#define LSID_AUTO000531							0x0000027F		// 애니머스에게 공격 명령을 전달하였습니다.
#define LSID_AUTO000532							0x00000280		// 애니머스에게 이동 명령을 전달하였습니다.
#define LSID_AUTO000533							0x00000281		// 애니머스의 타겟을 설정하였습니다.
#define LSID_AUTO000534							0x00000282		// 애니머스 타겟 설정 에러 ( %d )
#define LSID_AUTO000535							0x00000283		// 소환 실패 : 이미 애니머스를 소환중입니다.
#define LSID_AUTO000536							0x00000284		// 소환 실패 : 애니머스 리버가 없습니다.
#define LSID_AUTO000537							0x00000285		// 소환 실패 : 애니머스의 HP가 30 %% 이하입니다.
#define LSID_AUTO000538							0x00000286		// 소환 실패 : FP가 부족합니다.
#define LSID_AUTO000539							0x00000287		// 소환 실패 : 지금은 소환할 수 없습니다. 잠시후 다시 시도해 주십시오.
#define LSID_AUTO000540							0x00000288		// 소환 실패 : 맵이동 중입니다.
#define LSID_AUTO000541							0x00000289		// 소환 실패 : 소환 상태가 아닙니다.
#define LSID_AUTO000542							0x0000028A		// 소환 실패 : 타겟이 올바르지 않습니다.
#define LSID_AUTO000543							0x0000028B		// 소환 실패 : 코라 종족만이 소환할 수 있습니다.
#define LSID_AUTO000544							0x0000028C		// 소환 실패 : 소환 마스터리가 부족합니다.
#define LSID_AUTO000545							0x0000028D		// 소환 실패 : 아바타는 현재 소환이 불가능한 클래스입니다.
#define LSID_AUTO000546							0x0000028E		// 소환 실패 : 애니머스 소환에 실패하였습니다. ( %d )
#define LSID_AUTO000547							0x0000028F		// 서버와 클라이언트의 금액이 틀립니다. ( 서버 : %d Dalant - %d Gold ) ( 클라이언트 : %d Dalant - %d Gold )
#define LSID_AUTO000548							0x00000290		// 기갑 장비를 수리하였습니다.
#define LSID_AUTO000549							0x00000291		// 기갑 장비가 파괴되었습니다.
#define LSID_AUTO000550							0x00000292		// 기갑 장비가 자동 견인 되었습니다. 견인료 %d 달란트가 지출되거나 채무로 남게됩니다.
#define LSID_AUTO000551							0x00000293		// 기갑장비 : 사용할 수 없는 종족입니다. ( %d )
#define LSID_AUTO000552							0x00000294		// 기갑장비 : 현재 기갑장비를 보관소에서 출고한 상태입니다. ( %d )
#define LSID_AUTO000553							0x00000295		// 기갑장비 : 기갑장비를 보관할 수 있는 최대수를 초과하였습니다. ( %d )
#define LSID_AUTO000554							0x00000296		// 기갑장비 : 인벤토리의 빈 공간이 부족합니다. ( %d )
#define LSID_AUTO000555							0x00000297		// 기갑장비 : 빈 슬롯입니다. ( %d )
#define LSID_AUTO000556							0x00000298		// 기갑장비 : 기갑장비의 메인프레임과 일치하지 않습니다. ( %d )
#define LSID_AUTO000557							0x00000299		// 기갑장비 : 자금이 부족합니다. ( %d )
#define LSID_AUTO000558							0x0000029A		// 기갑장비 : 존재하지 않는 파츠입니다. ( %d )
#define LSID_AUTO000559							0x0000029B		// 기갑장비 : 존재하지 않는 메인프레임입니다. ( %d )
#define LSID_AUTO000560							0x0000029C		// 기갑장비 : 현재 파츠를 튜닝하기 위한 레벨이 부족합니다. ( %d )
#define LSID_AUTO000561							0x0000029D		// 기갑장비 : 현재 파츠를 튜닝하기 위한 숙련도가 부족합니다. ( %d )
#define LSID_AUTO000562							0x0000029E		// 기갑장비 : 기갑장비의 내구도가 손상되지 않았습니다. ( %d )
#define LSID_AUTO000563							0x0000029F		// 기갑장비 : 발사물의 종류가 일치하지 않습니다. ( %d )
#define LSID_AUTO000564							0x000002A0		// 기갑장비 : 발사물의 개수가 꽉 찼습니다. ( %d )
#define LSID_AUTO000565							0x000002A1		// 기갑장비 : 백팩이 없습니다. ( %d )
#define LSID_AUTO000566							0x000002A2		// 기갑장비 : 여유 공간이 없습니다. ( %d )
#define LSID_AUTO000567							0x000002A3		// 기갑장비 : 월드내의 기갑 장비 최대치를 초과하였습니다. ( %d )
#define LSID_AUTO000568							0x000002A4		// 기갑장비 : 기갑 장비와 거리가 멉니다. ( %d )
#define LSID_AUTO000569							0x000002A5		// 기갑장비 : 기갑 장비 상인과 거리가 멉니다. ( %d )
#define LSID_AUTO000570							0x000002A6		// 기갑장비 : 기갑 장비에 탑승하지 않은 상태입니다. ( %d )
#define LSID_AUTO000571							0x000002A7		// 기갑장비 : 기갑 장비 상인이 아닙니다. ( %d )
#define LSID_AUTO000572							0x000002A8		// 기갑장비 : 기갑 장비에서 내릴 위치가 너무 멉니다. ( %d )
#define LSID_AUTO000573							0x000002A9		// 기갑장비 : 빈 공간입니다. ( %d )
#define LSID_AUTO000574							0x000002AA		// 기갑장비 : 공격 파츠와 발사물의 타입이 틀립니다. ( %d )
#define LSID_AUTO000575							0x000002AB		// 기갑장비 : 기갑장비를 출고할 수 있는 지역이 아닙니다. ( %d )
#define LSID_AUTO000576							0x000002AC		// 기갑장비 : 기갑장비를 사용할 수 없는 클래스입니다. ( %d )
#define LSID_AUTO000577							0x000002AD		// 기갑장비 : 데이터 오류 ( %d )
#define LSID_AUTO000578							0x000002AE		// 기갑장비 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000579							0x000002AF		// 아이템 트레이드 요청 성공 : 트레이드 수락을 대기중입니다.
#define LSID_AUTO000580							0x000002B0		// 아이템 트레이드 요청 실패 : 이미 다른 사람과 트레이드 중입니다.
#define LSID_AUTO000581							0x000002B1		// 아이템 트레이드 요청 실패 : 대상자와의 거리가 멉니다.
#define LSID_AUTO000582							0x000002B2		// 아이템 트레이드 요청 실패 : 유효한 대상이 아닙니다.
#define LSID_AUTO000583							0x000002B3		// 아이템 트레이드 요청 실패 : 대상자가 이미 다른 사람과 트레이드 중입니다.
#define LSID_AUTO000584							0x000002B4		// 아이템 트레이드 요청 실패 : 알 수 없는 에러
#define LSID_AUTO000585							0x000002B5		// 아이템 트레이드 수락 성공 : 아이템 트레이드를 시작합니다.
#define LSID_AUTO000586							0x000002B6		// 아이템 트레이드 수락 실패 : 유효한 요청이 아닙니다.
#define LSID_AUTO000587							0x000002B7		// 아이템 트레이드 수락 실패 : 아바타가 이미 다른 사람과 트레이드 중입니다.
#define LSID_AUTO000588							0x000002B8		// 아이템 트레이드 수락 실패 : 대상자가 이미 다른 사람과 트레이드 중입니다.
#define LSID_AUTO000589							0x000002B9		// 아이템 트레이드 수락 실패 : asker가자신을요청중아님.
#define LSID_AUTO000590							0x000002BA		// 아이템 트레이드 수락 실패 : 대상자와의 거리가 멉니다.
#define LSID_AUTO000591							0x000002BB		// 아이템 트레이드 수락 실패 : 유효한 대상이 아닙니다.
#define LSID_AUTO000592							0x000002BC		// 아이템 트레이드 수락 실패 : 알 수 없는 에러
#define LSID_AUTO000593							0x000002BD		// %s ( %d개 )
#define LSID_AUTO000594							0x000002BE		// 아이템 트레이드를 취소하였습니다.
#define LSID_AUTO000595							0x000002BF		// 아이템 트레이드 취소 실패 : 아바타가 트레이드중이 아닙니다.
#define LSID_AUTO000596							0x000002C0		// 아이템 트레이드 취소 실패 : 트레이드 잠금 상태입니다.
#define LSID_AUTO000597							0x000002C1		// 아이템 트레이드 취소 실패 : 알 수 없는 에러
#define LSID_AUTO000598							0x000002C2		// 상대방이 아이템 트레이드를 취소하였습니다.
#define LSID_AUTO000599							0x000002C3		// 트레이드 종료 요청 실패 : 상대방의 인벤토리 공간이 부족합니다.
#define LSID_AUTO000600							0x000002C4		// 트레이드 종료 요청 실패
#define LSID_AUTO000601							0x000002C5		// 아이템 트레이드를 종료하였습니다.
#define LSID_AUTO000602							0x000002C6		// 아이템 트레이드를 실패하였습니다.
#define LSID_AUTO000603							0x000002C7		// 거래에 오류가 있습니다. 거래를 종료합니다.
#define LSID_AUTO000604							0x000002C8		// 스킬 시전 실패
#define LSID_AUTO000605							0x000002C9		// 포스 시전 실패
#define LSID_AUTO000606							0x000002CA		// 일반 공격 실패
#define LSID_AUTO000607							0x000002CB		// 공격 실패
#define LSID_AUTO000608							0x000002CC		// 공격 관련 에러 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000609							0x000002CD		// 전투 관련 에러 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000610							0x000002CE		// 승직 관련 에러 : 알 수 없는 에러 ( %d )
#define LSID_AUTO000611							0x000002CF		// 일반
#define LSID_AUTO000612							0x000002D0		// 승직
#define LSID_AUTO000613							0x000002D1		// 퀘스트
#define LSID_AUTO000614							0x000002D2		// 보상 아이템 추가에 실패 했습니다. 인벤토리에 빈 공간이 없습니다.
#define LSID_AUTO000615							0x000002D3		// 보상 아이템을 인벤토리 %d번째 가방 %d번째 칸에 추가 하였습니다.
#define LSID_AUTO000616							0x000002D4		// 크리스털이 출몰하였습니다.
#define LSID_AUTO000617							0x000002D5		// 모든 종족이 크리스털 파괴에 실패했습니다. 따라서 이후에 출몰하는 홀리스톤 키퍼는 모든 종족에 대해서 적대적입니다.
#define LSID_AUTO000618							0x000002D6		// %s종족이 크리스털을 파괴해 홀리스톤 키퍼를 장악했습니다.
#define LSID_AUTO000619							0x000002D7		// 20분후 홀리스톤 키퍼가 출몰합니다.
#define LSID_AUTO000620							0x000002D8		// 현재 우리 종족과 우호적인 상태의 홀리스톤 키퍼가 출몰하였습니다.
#define LSID_AUTO000621							0x000002D9		// 현재 우리 종족과 적대적인 상태의 홀리스톤 키퍼가 출몰하였습니다.
#define LSID_AUTO000622							0x000002DA		// 홀리 스톤 키퍼가 사라졌습니다.
#define LSID_AUTO000623							0x000002DB		// %s종족 %s님께서 홀리스톤 키퍼를 통제할 수 있는 칩을 가장 먼저 확보하셨습니다.
#define LSID_AUTO000624							0x000002DC		// 잘못된 광산 인덱스 : %x
#define LSID_AUTO000625							0x000002DD		// 채굴 시작
#define LSID_AUTO000626							0x000002DE		// 채굴 시작 요청 실패 : 채굴 장소 아님
#define LSID_AUTO000627							0x000002DF		// 채굴 시작 요청 실패 : 장비 에러 )
#define LSID_AUTO000628							0x000002E0		// 채굴 시작 요청 실패 : 현재 채굴 모드임
#define LSID_AUTO000629							0x000002E1		// 채굴 시작 요청 실패
#define LSID_AUTO000630							0x000002E2		// 채굴 시작 실패
#define LSID_AUTO000631							0x000002E3		// 채굴 취소 요청 성공
#define LSID_AUTO000632							0x000002E4		// 채굴 취소
#define LSID_AUTO000633							0x000002E5		// 채굴 취소 요청 실패 : 배터리 에러
#define LSID_AUTO000634							0x000002E6		// 채굴 취소 요청 실패 : 지연시간 에러
#define LSID_AUTO000635							0x000002E7		// 채굴 취소 요청 실패 : 채굴장비에러
#define LSID_AUTO000636							0x000002E8		// 채굴 취소 요청 실패
#define LSID_AUTO000637							0x000002E9		// %s %d개를 획득하였습니다.
#define LSID_AUTO000638							0x000002EA		// 채굴 실패 : 지연시간에러
#define LSID_AUTO000639							0x000002EB		// 채굴 실패 : 원석가방에러
#define LSID_AUTO000640							0x000002EC		// 채굴 실패 : 담을공간없음
#define LSID_AUTO000641							0x000002ED		// 채굴 실패 : 원석종류에러
#define LSID_AUTO000642							0x000002EE		// 채굴 실패 : 베터리 에러
#define LSID_AUTO000643							0x000002EF		// 채굴 실패 : 채굴 장비 에러
#define LSID_AUTO000644							0x000002F0		// 채굴 실패
#define LSID_AUTO000645							0x000002F1		// 원석 가공 에러 - 원석이 인벤토리에 없습니다.
#define LSID_AUTO000646							0x000002F2		// 원석 가공 에러 - 원석 임시 가공창에 빈 공간이 없습니다.
#define LSID_AUTO000647							0x000002F3		// 원석 가공에 성공 하였습니다.
#define LSID_AUTO000648							0x000002F4		// 원석 가공 에러 ( 원석 가방 or 시리얼실패 )
#define LSID_AUTO000649							0x000002F5		// 원석 가공 에러 ( 수량실패 )
#define LSID_AUTO000650							0x000002F6		// 원석 가공 에러 ( 소지금부족 )
#define LSID_AUTO000651							0x000002F7		// 원석 가공 에러 ( 가공임시공간 안비움 )
#define LSID_AUTO000652							0x000002F8		// 원석 가공 에러 ( None )
#define LSID_AUTO000653							0x000002F9		// 원석 가공에 실패 하였습니다.
#define LSID_AUTO000654							0x000002FA		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 가공모드아님 )
#define LSID_AUTO000655							0x000002FB		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 자원없거나부족 )
#define LSID_AUTO000656							0x000002FC		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 사용가방아님 )
#define LSID_AUTO000657							0x000002FD		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 가방공간부족 )
#define LSID_AUTO000658							0x000002FE		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 가방에없는슬롯 )
#define LSID_AUTO000659							0x000002FF		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 슬롯당용량초과 )
#define LSID_AUTO000660							0x00000300		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( 가방과내용이다름 )
#define LSID_AUTO000661							0x00000301		// 잉갓 이동 ( 가공창 => 인벤토리 ) 실패 ( None )
#define LSID_AUTO000662							0x00000302		// 자원 이동 실패
#define LSID_AUTO000663							0x00000303		// 가공된 원석을 모두 처분하였습니다.
#define LSID_AUTO000664							0x00000304		// 서버와의 연결이 끊어졌습니다. 프로그램을 종료합니다.
#define LSID_AUTO000665							0x00000305		// 서버의 응답을 대기중입니다. 잠시만 기다려 주십시오.
#define LSID_AUTO000666							0x00000306		// 귓속말을 보낼 플레이어가 잘못되었거나 접속해 있지 않습니다.
#define LSID_AUTO000667							0x00000307		// 스킬/포스 시전 실패 : 존재하지 않는 포스입니다.
#define LSID_AUTO000668							0x00000308		// 스킬/포스 시전 실패 : 시전 대상이 존재하지 않습니다..
#define LSID_AUTO000669							0x00000309		// 스킬/포스 시전 실패 : 시전하기 위한 마스터리가 부족합니다.
#define LSID_AUTO000670							0x0000030A		// 스킬/포스 시전 실패 : 사용 가능 종족이 아닙니다.
#define LSID_AUTO000671							0x0000030B		// 스킬/포스 시전 실패 : 시전 대상이 올바르지 않습니다.
#define LSID_AUTO000672							0x0000030C		// 스킬/포스 시전 실패 : 시전에 필요한 FP가 부족합니다.
#define LSID_AUTO000673							0x0000030D		// 스킬/포스 시전 실패 : 효과 제한으로 인한 시전 불가능 상태입니다.
#define LSID_AUTO000674							0x0000030E		// 스킬/포스 시전 실패 : 데이터가 일치하지 않습니다.
#define LSID_AUTO000675							0x0000030F		// 스킬/포스 시전 실패 : 스킬/포스 시전을 준비중입니다.
#define LSID_AUTO000676							0x00000310		// 스킬/포스 시전 실패 : 시전 대상이 지속형 피해 보조 스킬/포스가 적용될 수 없는 상태입니다.
#define LSID_AUTO000677							0x00000311		// 스킬/포스 시전 실패 : 이전에 적용된 스킬/포스보다 레벨이 낮습니다.
#define LSID_AUTO000678							0x00000312		// 스킬/포스 시전 실패 : 지속형 스킬/포스는 남은 시간이 10%% 이하로 남아있어야만 재시전이 가능합니다.
#define LSID_AUTO000679							0x00000313		// 스킬/포스 시전 실패 : 선택한 대상에 시전이 불가능합니다. 
#define LSID_AUTO000680							0x00000314		// 스킬/포스 시전 실패 : 기갑 장비 탑승상태에서는 스킬/포스를 시전할 수 없습니다.
#define LSID_AUTO000681							0x00000315		// 스킬/포스 시전 실패 : 스킬/포스를 시전할 수 없는 클래스 입니다.
#define LSID_AUTO000682							0x00000316		// 스킬/포스 시전 실패 : 스킬/포스 시전에 실패하였습니다. ( %d )
#define LSID_AUTO000683							0x00000317		// 가드 타워 설치를 시작하였습니다.
#define LSID_AUTO000684							0x00000318		// 더 이상 가드 타워를 설치할 수 없습니다.
#define LSID_AUTO000685							0x00000319		// 인벤토리에 가드 타워 아이템이 없습니다.
#define LSID_AUTO000686							0x0000031A		// 가드 타워 아이템이 아닙니다.
#define LSID_AUTO000687							0x0000031B		// 가드 타워 설치에 필요한 재료의 조합이 틀립니다.
#define LSID_AUTO000688							0x0000031C		// 가드 타워 설치에 필요한 재료의 수량이 틀립니다.
#define LSID_AUTO000689							0x0000031D		// 가드 타워 설치를 너무 먼 거리에 설치하려 하고 있습니다.
#define LSID_AUTO000690							0x0000031E		// 가드 타워 설치 스킬을 사용할 수 없는 클래스입니다.
#define LSID_AUTO000691							0x0000031F		// FP가 부족합니다.
#define LSID_AUTO000692							0x00000320		// 가까운 곳에 이미 다른 가드 타워가 설치되어 있습니다.
#define LSID_AUTO000693							0x00000321		// 마을내에서는 가드 타워를 설치할 수가 없습니다.
#define LSID_AUTO000694							0x00000322		// 가드 타워 관련 에러 : 알 수 없는 에러 (%d)
#define LSID_AUTO000695							0x00000323		// 가드 타워를 회수 하였습니다.
#define LSID_AUTO000696							0x00000324		// 가드 타워 관련 에러 : 현재 작동중인 가드 타워가 아닙니다.
#define LSID_AUTO000697							0x00000325		// 가드 타워 설치가 완료되었습니다.
#define LSID_AUTO000698							0x00000326		// 이전에 설치되었던 가드타워가 재설치 되었습니다.
#define LSID_AUTO000699							0x00000327		// 트랩 설치를 시작하였습니다.
#define LSID_AUTO000700							0x00000328		// 더 이상 트랩를 설치할 수 없습니다.
#define LSID_AUTO000701							0x00000329		// 인벤토리에 트랩 아이템이 없습니다.
#define LSID_AUTO000702							0x0000032A		// 트랩 아이템이 아닙니다.
#define LSID_AUTO000703							0x0000032B		// 트랩 설치에 필요한 재료의 조합이 틀립니다.
#define LSID_AUTO000704							0x0000032C		// 트랩 설치에 필요한 재료의 수량이 틀립니다.
#define LSID_AUTO000705							0x0000032D		// 트랩 설치를 너무 먼 거리에 설치하려 하고 있습니다.
#define LSID_AUTO000706							0x0000032E		// 트랩 설치 스킬을 사용할 수 없는 클래스입니다.
#define LSID_AUTO000707							0x0000032F		// 가까운 곳에 이미 다른 트랩가 설치되어 있습니다.
#define LSID_AUTO000708							0x00000330		// 마을내에서는 트랩을 설치할 수가 없습니다.
#define LSID_AUTO000709							0x00000331		// 트랩 관련 에러 : 알 수 없는 에러 (%d)
#define LSID_AUTO000710							0x00000332		// 트랩 설치가 완료되었습니다.
#define LSID_AUTO000711							0x00000333		// 튜토리얼중에는 아이템을 버릴수 없습니다.
#define LSID_AUTO000712							0x00000334		// 셰잎 요청 실패 - 요청한 플레이어의 접속이 끊어졌음( S : %d )
#define LSID_AUTO000713							0x00000335		// 셰잎 요청 실패 - 요청한 플레이어의 시리얼이 잘못되었음.( S : %d )
#define LSID_AUTO000714							0x00000336		// 셰잎 요청 실패 - 알 수 없는 에러 ( S : %d )
#define LSID_AUTO000715							0x00000337		// 부활 관련 에러 ( %d )
#define LSID_AUTO000716							0x00000338		// 부활 성공
#define LSID_AUTO000717							0x00000339		// 부활 실패
#define LSID_AUTO000718							0x0000033A		// 잠시 후 게임 서비스가 중단됩니다. 자세한 사항은 운영자에게 문의하시기 바랍니다.
#define LSID_AUTO000719							0x0000033B		// 같은 계정의 사용자가 다른곳에서 로그인을 하였습니다. 잠시 후 접속이 끊어집니다.
#define LSID_AUTO000720							0x0000033C		// 잠시 후 게임 서비스가 중단됩니다. 자세한 사항은 RF Online 공식 홈페이지를 참조하시기 바랍니다.
#define LSID_AUTO000721							0x0000033D		// 현재 아바타가 이동 제한에 걸려있습니다.
#define LSID_AUTO000722							0x0000033E		// 이동 에러 ( %d )
#define LSID_AUTO000723							0x0000033F		// /마을 명령어는 아바타 종족의 베이스 맵이나 킵에서만 사용할 수 있습니다.
#define LSID_AUTO000724							0x00000340		// 정해진 장소로 이동할 수 없습니다.
#define LSID_AUTO000725							0x00000341		// 순간 이동 실패 : 해당 플레이어가 다른 존에 있습니다.
#define LSID_AUTO000726							0x00000342		// 순간 이동 실패 : 해당 플레이어가 없습니다.
#define LSID_AUTO000727							0x00000343		// 순간 이동 실패 : 알 수 없는 에러.
#define LSID_AUTO000728							0x00000344		// %s 레벨 GM
#define LSID_AUTO000729							0x00000345		// %s 레벨 %d 상승
#define LSID_AUTO000730							0x00000346		// 근접기술 숙련도
#define LSID_AUTO000731							0x00000347		// 원거리기술 숙련도
#define LSID_AUTO000732							0x00000348		// 종족특화기술 숙련도
#define LSID_AUTO000733							0x00000349		// 포스기술 숙련도
#define LSID_AUTO000734							0x0000034A		// 방패기술 숙련도
#define LSID_AUTO000735							0x0000034B		// 방어기술 숙련도
#define LSID_AUTO000736							0x0000034C		// 무기/방패제작 숙련도
#define LSID_AUTO000737							0x0000034D		// 방어구제작 숙련도
#define LSID_AUTO000738							0x0000034E		// 발사물제작 숙련도
#define LSID_AUTO000739							0x0000034F		// 장소 이동
#define LSID_AUTO000740							0x00000350		// %s과 대화
#define LSID_AUTO000741							0x00000351		// NPC와 대화
#define LSID_AUTO000742							0x00000352		// 다른 종족
#define LSID_AUTO000743							0x00000353		// 몬스터
#define LSID_AUTO000744							0x00000354		// 아이템
#define LSID_AUTO000745							0x00000355		// 캐릭터 %d레벨 달성
#define LSID_AUTO000746							0x00000356		// 숙련도
#define LSID_AUTO000747							0x00000357		// 스킬
#define LSID_AUTO000748							0x00000358		// 포스
#define LSID_AUTO000749							0x00000359		// 아이템 업그레이드
#define LSID_AUTO000750							0x0000035A		// 기여도 %d 포인트
#define LSID_AUTO000751							0x0000035B		// %s 획득
#define LSID_AUTO000752							0x0000035C		// 브리핑 내용 확인
#define LSID_AUTO000753							0x0000035D		// 확 인
#define LSID_AUTO000754							0x0000035E		// 취 소
#define LSID_AUTO000755							0x0000035F		// 전체 사용 가능
#define LSID_AUTO000756							0x00000360		// 벨라토 연방, 신성동맹 코라
#define LSID_AUTO000757							0x00000361		// 무관
#define LSID_AUTO000758							0x00000362		// 근접
#define LSID_AUTO000759							0x00000363		// 원거리
#define LSID_AUTO000760							0x00000364		// 런처
#define LSID_AUTO000761							0x00000365		// 방어
#define LSID_AUTO000762							0x00000366		// 근접 공격
#define LSID_AUTO000763							0x00000367		// 원거리 공격
#define LSID_AUTO000764							0x00000368		// 요구 기술
#define LSID_AUTO000765							0x00000369		// %s기술 GM
#define LSID_AUTO000766							0x0000036A		// %s기술 %d
#define LSID_AUTO000767							0x0000036B		// [가격 정보]
#define LSID_AUTO000768							0x0000036C		// %s 가격
#define LSID_AUTO000769							0x0000036D		// %s ( 총계 %s ) %s
#define LSID_AUTO000770							0x0000036E		// 사용가능무기
#define LSID_AUTO000771							0x0000036F		// 내성
#define LSID_AUTO000772							0x00000370		// 종류
#define LSID_AUTO000773							0x00000371		// 사용 레벨
#define LSID_AUTO000774							0x00000372		// 잡는 유형
#define LSID_AUTO000775							0x00000373		// 사용 종족
#define LSID_AUTO000776							0x00000374		// 내구도
#define LSID_AUTO000777							0x00000375		// 수리여부
#define LSID_AUTO000778							0x00000376		// 가능
#define LSID_AUTO000779							0x00000377		// 불가
#define LSID_AUTO000780							0x00000378		// 제한없음
#define LSID_AUTO000781							0x00000379		// 일반 공격력
#define LSID_AUTO000782							0x0000037A		// 포스 공격력
#define LSID_AUTO000783							0x0000037B		// 속성
#define LSID_AUTO000784							0x0000037C		// 업그레이드
#define LSID_AUTO000785							0x0000037D		// [설명]
#define LSID_AUTO000786							0x0000037E		// 성별
#define LSID_AUTO000787							0x0000037F		// 방어력
#define LSID_AUTO000788							0x00000380		// 잔량
#define LSID_AUTO000789							0x00000381		// 공격력
#define LSID_AUTO000790							0x00000382		// 회복량
#define LSID_AUTO000791							0x00000383		// 수량
#define LSID_AUTO000792							0x00000384		// 효과
#define LSID_AUTO000793							0x00000385		// 계열
#define LSID_AUTO000794							0x00000386		// 레벨
#define LSID_AUTO000795							0x00000387		// 공격타입
#define LSID_AUTO000796							0x00000388		// 이동속도
#define LSID_AUTO000797							0x00000389		// [설치 재료]
#define LSID_AUTO000798							0x0000038A		// %s %d개
#define LSID_AUTO000799							0x0000038B		// 공격딜레이
#define LSID_AUTO000800							0x0000038C		// 차지량
#define LSID_AUTO000801							0x0000038D		// 부스터 속도
#define LSID_AUTO000802							0x0000038E		// 스킬분류
#define LSID_AUTO000803							0x0000038F		// %s스킬
#define LSID_AUTO000804							0x00000390		// 스킬단계
#define LSID_AUTO000805							0x00000391		// 포스분류
#define LSID_AUTO000806							0x00000392		// 필요포스량
#define LSID_AUTO000807							0x00000393		// 딜레이
#define LSID_AUTO000808							0x00000394		// 클래스스킬
#define LSID_AUTO000809							0x00000395		// 근접 전투형
#define LSID_AUTO000810							0x00000396		// 원거리 전투형
#define LSID_AUTO000811							0x00000397		// 힐러형
#define LSID_AUTO000812							0x00000398		// 보조형
#define LSID_AUTO000813							0x00000399		// 등급
#define LSID_AUTO000814							0x0000039A		// 요구숙련도
#define LSID_AUTO000815							0x0000039B		// 오어 선택
#define LSID_AUTO000816							0x0000039C		// 채굴 모드
#define LSID_AUTO000817							0x0000039D		// 이동 모드
#define LSID_AUTO000818							0x0000039E		// 승 직
#define LSID_AUTO000819							0x0000039F		// 환 전 소
#define LSID_AUTO000820							0x000003A0		// 경제지표
#define LSID_AUTO000821							0x000003A1		// -12D -10D -8D  -6D  -4D  -2D  현재
#define LSID_AUTO000822							0x000003A2		// 세 율
#define LSID_AUTO000823							0x000003A3		// 환 율
#define LSID_AUTO000824							0x000003A4		// 보유금액
#define LSID_AUTO000825							0x000003A5		// 환전조절
#define LSID_AUTO000826							0x000003A6		// 환 전
#define LSID_AUTO000827							0x000003A7		// 복 구
#define LSID_AUTO000828							0x000003A8		// 세율은 아이템을 거래할 때 부가
#define LSID_AUTO000829							0x000003A9		// 되는 금액입니다.
#define LSID_AUTO000830							0x000003AA		// 환율은 1골드 당 환전할 수 있는
#define LSID_AUTO000831							0x000003AB		// %s의 금액입니다.
#define LSID_AUTO000832							0x000003AC		// ]경제지표 변동
#define LSID_AUTO000833							0x000003AD		// ]세율 및 환율
#define LSID_AUTO000834							0x000003AE		// 1 골드 당 %d %s
#define LSID_AUTO000835							0x000003AF		// 아이템 거래
#define LSID_AUTO000836							0x000003B0		// 경제지표 확인
#define LSID_AUTO000837							0x000003B1		// 가 공
#define LSID_AUTO000838							0x000003B2		// 아이템/돈 창고 기능
#define LSID_AUTO000839							0x000003B3		// 안 내
#define LSID_AUTO000840							0x000003B4		// 입 장
#define LSID_AUTO000841							0x000003B5		// 킬포인트
#define LSID_AUTO000842							0x000003B6		// 기갑 장비 튜닝
#define LSID_AUTO000843							0x000003B7		// 기갑 장비 출고
#define LSID_AUTO000844							0x000003B8		// 클래스 승직
#define LSID_AUTO000845							0x000003B9		// 위치 바인딩
#define LSID_AUTO000846							0x000003BA		// 랭킹
#define LSID_AUTO000847							0x000003BB		// 가공비용
#define LSID_AUTO000848							0x000003BC		// 가  공
#define LSID_AUTO000849							0x000003BD		// 처  분
#define LSID_AUTO000850							0x000003BE		// 가공결과입니다.
#define LSID_AUTO000851							0x000003BF		// 인벤토리에 넣어주세요.
#define LSID_AUTO000852							0x000003C0		// 기여도 보상
#define LSID_AUTO000853							0x000003C1		// PvP 포인트
#define LSID_AUTO000854							0x000003C2		// 보상금
#define LSID_AUTO000855							0x000003C3		// 보상 조절
#define LSID_AUTO000856							0x000003C4		// 이전
#define LSID_AUTO000857							0x000003C5		// 다음
#define LSID_AUTO000858							0x000003C6		// 상점 거래
#define LSID_AUTO000859							0x000003C7		// 골  드
#define LSID_AUTO000860							0x000003C8		// 구  입
#define LSID_AUTO000861							0x000003C9		// 수  리
#define LSID_AUTO000862							0x000003CA		// 판  매
#define LSID_AUTO000863							0x000003CB		// 총 구입비용
#define LSID_AUTO000864							0x000003CC		// 총 판매비용
#define LSID_AUTO000865							0x000003CD		// 총 수리비용
#define LSID_AUTO000866							0x000003CE		// 공격할 타겟 선택
#define LSID_AUTO000867							0x000003CF		// 공격 모드
#define LSID_AUTO000868							0x000003D0		// 제  작
#define LSID_AUTO000869							0x000003D1		// 주재료
#define LSID_AUTO000870							0x000003D2		// 부재료
#define LSID_AUTO000871							0x000003D3		// 무기 제작
#define LSID_AUTO000872							0x000003D4		// 방어구 제작
#define LSID_AUTO000873							0x000003D5		// %s %3d개
#define LSID_AUTO000874							0x000003D6		// 저  급
#define LSID_AUTO000875							0x000003D7		// 중  급
#define LSID_AUTO000876							0x000003D8		// 고  급
#define LSID_AUTO000877							0x000003D9		// 최고급
#define LSID_AUTO000878							0x000003DA		// %s 숙련도 %2d Point
#define LSID_AUTO000879							0x000003DB		// 근거리 스킬
#define LSID_AUTO000880							0x000003DC		// 원거리 스킬
#define LSID_AUTO000881							0x000003DD		// 클래스 스킬
#define LSID_AUTO000882							0x000003DE		// 리더 변경
#define LSID_AUTO000883							0x000003DF		// 강퇴
#define LSID_AUTO000884							0x000003E0		// 탈  퇴
#define LSID_AUTO000885							0x000003E1		// 잠  금
#define LSID_AUTO000886							0x000003E2		// 잠금해제
#define LSID_AUTO000887							0x000003E3		// 파티 구성원 모두가 아이템 루팅 권한을 갖는다
#define LSID_AUTO000888							0x000003E4		// 파티 리더만 아이템 루팅 권한을 갖는다
#define LSID_AUTO000889							0x000003E5		// 모든 파티 구성원이 순서대로 루팅 권한을 갖는다
#define LSID_AUTO000890							0x000003E6		// 파 티  0/%d
#define LSID_AUTO000891							0x000003E7		// 파 티  %d/%d
#define LSID_AUTO000892							0x000003E8		// 지역 이동
#define LSID_AUTO000893							0x000003E9		// 어디로 이동하시겠습니까?
#define LSID_AUTO000894							0x000003EA		// 클릭하면 확대된 맵를 볼 수 있습니다.
#define LSID_AUTO000895							0x000003EB		// 클릭하면 확대된 맵를 닫습니다.
#define LSID_AUTO000896							0x000003EC		// 옵 션
#define LSID_AUTO000897							0x000003ED		// 로그 아웃
#define LSID_AUTO000898							0x000003EE		// 게임 종료
#define LSID_AUTO000899							0x000003EF		// 사운드 설정
#define LSID_AUTO000900							0x000003F0		// 효 과 음
#define LSID_AUTO000901							0x000003F1		// 환 경 음
#define LSID_AUTO000902							0x000003F2		// 그래픽 설정
#define LSID_AUTO000903							0x000003F3		// 감 마
#define LSID_AUTO000904							0x000003F4		// 이 펙 트
#define LSID_AUTO000905							0x000003F5		// 그 림 자
#define LSID_AUTO000906							0x000003F6		// 시야 거리
#define LSID_AUTO000907							0x000003F7		// 뽀 샤 시
#define LSID_AUTO000908							0x000003F8		// 기타 설정
#define LSID_AUTO000909							0x000003F9		// 귓말 거부
#define LSID_AUTO000910							0x000003FA		// 파티요청 거부
#define LSID_AUTO000911							0x000003FB		// 거래요청 거부
#define LSID_AUTO000912							0x000003FC		// 환경효과 제거
#define LSID_AUTO000913							0x000003FD		// 도움말 켜기
#define LSID_AUTO000914							0x000003FE		// 자동 시야거리
#define LSID_AUTO000915							0x000003FF		// 카메라 시점
#define LSID_AUTO000916							0x00000400		// 등급 순위
#define LSID_AUTO000917							0x00000401		// 순위
#define LSID_AUTO000918							0x00000402		// 캐릭터명
#define LSID_AUTO000919							0x00000403		// 소속
#define LSID_AUTO000920							0x00000404		// 교 환
#define LSID_AUTO000921							0x00000405		// 승 인
#define LSID_AUTO000922							0x00000406		// 보유한 %s가 없습니다.
#define LSID_AUTO000923							0x00000407		// 보유한 골드가 없습니다
#define LSID_AUTO000924							0x00000408		// 보관비용 %10s %s
#define LSID_AUTO000925							0x00000409		// 기갑장비 목록
#define LSID_AUTO000926							0x0000040A		// 출 고
#define LSID_AUTO000927							0x0000040B		// 기갑장비 튜닝
#define LSID_AUTO000928							0x0000040C		// 메인프레임 : 
#define LSID_AUTO000929							0x0000040D		// 방  어  력 : 
#define LSID_AUTO000930							0x0000040E		// 내구도 : 
#define LSID_AUTO000931							0x0000040F		// 이동력 : 
#define LSID_AUTO000932							0x00000410		// 기본 무장
#define LSID_AUTO000933							0x00000411		// 무기명 : 
#define LSID_AUTO000934							0x00000412		// 공격력 : 
#define LSID_AUTO000935							0x00000413		// 잔  탄 : 
#define LSID_AUTO000936							0x00000414		// 추가 무장
#define LSID_AUTO000937							0x00000415		// 기본파츠
#define LSID_AUTO000938							0x00000416		// 탄 약
#define LSID_AUTO000939							0x00000417		// 튜닝비용           %s
#define LSID_AUTO000940							0x00000418		// 수 리
#define LSID_AUTO000941							0x00000419		// 승인요청
#define LSID_AUTO000942							0x0000041A		// 백팩
#define LSID_AUTO000943							0x0000041B		// 머리
#define LSID_AUTO000944							0x0000041C		// 상체
#define LSID_AUTO000945							0x0000041D		// 하체
#define LSID_AUTO000946							0x0000041E		// 기본무기
#define LSID_AUTO000947							0x0000041F		// 추가무기
#define LSID_AUTO000948							0x00000420		// 탄창1
#define LSID_AUTO000949							0x00000421		// 탄창2
#define LSID_AUTO000950							0x00000422		// 또는
#define LSID_AUTO000951							0x00000423		// 스킵
#define LSID_AUTO000952							0x00000424		// %s 방송센터
#define LSID_AUTO000953							0x00000425		// 조직 방송
#define LSID_AUTO000954							0x00000426		// 해적 방송
#define LSID_AUTO000955							0x00000427		// 결과 :
#define LSID_AUTO000956							0x00000428		// 조건 :
#define LSID_AUTO000957							0x00000429		// 저널을 클릭하면 리스트로 돌아갑니다
#define LSID_AUTO000958							0x0000042A		// 저널을 클릭하면 해당정보가 나타납니다
#define LSID_AUTO000959							0x0000042B		// 저 널
#define LSID_AUTO000960							0x0000042C		// 오더
#define LSID_AUTO000961							0x0000042D		// 태스크
#define LSID_AUTO000962							0x0000042E		// 클루
#define LSID_AUTO000963							0x0000042F		// 퀘스트 아이템
#define LSID_AUTO000964							0x00000430		// 퀘스트용 아이템
#define LSID_AUTO000965							0x00000431		// 오더 보상 선택
#define LSID_AUTO000966							0x00000432		// 기본보상
#define LSID_AUTO000967							0x00000433		// 기본보상은 다음과 같습니다.
#define LSID_AUTO000968							0x00000434		// 추가보상
#define LSID_AUTO000969							0x00000435		// 추가보상은 다음과 같습니다.
#define LSID_AUTO000970							0x00000436		// 확인버튼
#define LSID_AUTO000971							0x00000437		// 추가보상은 다음과 같습니다. 보상으로 받을 하나의 아이템을 선택하십시오.
#define LSID_AUTO000972							0x00000438		// 선택이 완료되면 확인버튼을 누르면 완료됩니다.
#define LSID_AUTO000973							0x00000439		// 확인버튼을 누르면 완료됩니다.
#define LSID_AUTO000974							0x0000043A		// 머리 공격
#define LSID_AUTO000975							0x0000043B		// 상체 공격
#define LSID_AUTO000976							0x0000043C		// 하체 공격
#define LSID_AUTO000977							0x0000043D		// 손   공격
#define LSID_AUTO000978							0x0000043E		// 발   공격
#define LSID_AUTO000979							0x0000043F		// 일반 정보
#define LSID_AUTO000980							0x00000440		// 상태 정보
#define LSID_AUTO000981							0x00000441		// 기술 정보
#define LSID_AUTO000982							0x00000442		// 내성 정보
#define LSID_AUTO000983							0x00000443		// 캐릭터 이름:
#define LSID_AUTO000984							0x00000444		//        종족:
#define LSID_AUTO000985							0x00000445		//        성별:
#define LSID_AUTO000986							0x00000446		//        레벨:
#define LSID_AUTO000987							0x00000447		// 클래스 성향:
#define LSID_AUTO000988							0x00000448		//      클래스:
#define LSID_AUTO000989							0x00000449		//        등급:
#define LSID_AUTO000990							0x0000044A		//      기여도:
#define LSID_AUTO000991							0x0000044B		//  소속길드명:
#define LSID_AUTO000992							0x0000044C		//      생명력:
#define LSID_AUTO000993							0x0000044D		//      포스력:
#define LSID_AUTO000994							0x0000044E		//    스테미너:
#define LSID_AUTO000995							0x0000044F		//      경험치:
#define LSID_AUTO000996							0x00000450		// 일반 공격력:
#define LSID_AUTO000997							0x00000451		// 포스 공격력:
#define LSID_AUTO000998							0x00000452		// 평균 방어력:
#define LSID_AUTO000999							0x00000453		//   공격 속도:
#define LSID_AUTO001000							0x00000454		//        명중:
#define LSID_AUTO001001							0x00000455		//        회피:
#define LSID_AUTO001002							0x00000456		// 테  라
#define LSID_AUTO001003							0x00000457		// 윈  드
#define LSID_AUTO001004							0x00000458		// 전투 숙련도
#define LSID_AUTO001005							0x00000459		// 근접  기술
#define LSID_AUTO001006							0x0000045A		// 원거리기술
#define LSID_AUTO001007							0x0000045B		// 포스  기술
#define LSID_AUTO001008							0x0000045C		// 방패  기술
#define LSID_AUTO001009							0x0000045D		// 방어  기술
#define LSID_AUTO001010							0x0000045E		// 제작 숙련도
#define LSID_AUTO001011							0x0000045F		// 무기  방패
#define LSID_AUTO001012							0x00000460		// 방  어  구
#define LSID_AUTO001013							0x00000461		// 발  사  물
#define LSID_AUTO001014							0x00000462		// %.2f 배속
#define LSID_AUTO001015							0x00000463		// 평화 모드
#define LSID_AUTO001016							0x00000464		// 전투 모드
#define LSID_AUTO001017							0x00000465		// 캐릭터
#define LSID_AUTO001018							0x00000466		// 캐릭터 정보
#define LSID_AUTO001019							0x00000467		// 캐릭터 액션
#define LSID_AUTO001020							0x00000468		// 전체
#define LSID_AUTO001021							0x00000469		// 시스템
#define LSID_AUTO001022							0x0000046A		// 일반채팅
#define LSID_AUTO001023							0x0000046B		// 귓속말
#define LSID_AUTO001024							0x0000046C		// 파티채팅
#define LSID_AUTO001025							0x0000046D		// 길드채팅
#define LSID_AUTO001026							0x0000046E		// 종족메시지
#define LSID_AUTO001027							0x0000046F		// 시스템메시지
#define LSID_AUTO001028							0x00000470		// 전체채팅 옵션
#define LSID_AUTO001029							0x00000471		// 파티채팅 옵션
#define LSID_AUTO001030							0x00000472		// 길드채팅 옵션
#define LSID_AUTO001031							0x00000473		// 시스템메시지 옵션
#define LSID_AUTO001032							0x00000474		// /파티 
#define LSID_AUTO001033							0x00000475		// /길드 
#define LSID_AUTO001034							0x00000476		// /국가 
#define LSID_AUTO001035							0x00000477		// 수동/자동공격
#define LSID_AUTO001036							0x00000478		// 달리기/걷기
#define LSID_AUTO001037							0x00000479		// 평화/전투
#define LSID_AUTO001038							0x0000047A		// %s<br>단축 '%s'
#define LSID_AUTO001039							0x0000047B		// 인벤토리
#define LSID_AUTO001040							0x0000047C		// 저널
#define LSID_AUTO001041							0x0000047D		// 게임옵션
#define LSID_AUTO001042							0x0000047E		// 레이다
#define LSID_AUTO001043							0x0000047F		// 게임시스템
#define LSID_AUTO001044							0x00000480		// 메인 무기
#define LSID_AUTO001045							0x00000481		// 보조 무기
#define LSID_AUTO001046							0x00000482		// 하차
#define LSID_AUTO001047							0x00000483		// 제 %d 배낭
#define LSID_AUTO001048							0x00000484		// 1:1 대화
#define LSID_AUTO001049							0x00000485		// 거래하기
#define LSID_AUTO001050							0x00000486		// 파티권유
#define LSID_AUTO001051							0x00000487		// 길드가입
#define LSID_AUTO001052							0x00000488		// 친구등록
#define LSID_AUTO001053							0x00000489		// 따라가기
#define LSID_AUTO001054							0x0000048A		// 탑 승
#define LSID_AUTO001055							0x0000048B		// 견 인
#define LSID_AUTO001056							0x0000048C		// 보 관
#define LSID_AUTO001057							0x0000048D		// 회 수
#define LSID_AUTO001058							0x0000048E		// 파티가입
#define LSID_AUTO001059							0x0000048F		// 캐릭터 생성
#define LSID_AUTO001060							0x00000490		// 성 별
#define LSID_AUTO001061							0x00000491		// 이 름
#define LSID_AUTO001062							0x00000492		// 헤어 스타일
#define LSID_AUTO001063							0x00000493		// 얼굴 생김새
#define LSID_AUTO001064							0x00000494		// 기본 상의
#define LSID_AUTO001065							0x00000495		// 기본 하의
#define LSID_AUTO001066							0x00000496		// 기본 장갑
#define LSID_AUTO001067							0x00000497		// 기본 신발
#define LSID_AUTO001068							0x00000498		// 성 향
#define LSID_AUTO001069							0x00000499		// 기본 능력치
#define LSID_AUTO001070							0x0000049A		// 전투기술 보너스
#define LSID_AUTO001071							0x0000049B		// 제작기술 보너스
#define LSID_AUTO001072							0x0000049C		// 생 명 력(HP)
#define LSID_AUTO001073							0x0000049D		// 포 스 력(FP)
#define LSID_AUTO001074							0x0000049E		// 스테미너(SP)
#define LSID_AUTO001075							0x0000049F		// 근  접
#define LSID_AUTO001076							0x000004A0		// 유  닛
#define LSID_AUTO001077							0x000004A1		// 포  스
#define LSID_AUTO001078							0x000004A2		// 방  패
#define LSID_AUTO001079							0x000004A3		// 방  어
#define LSID_AUTO001080							0x000004A4		// 무기/방패
#define LSID_AUTO001081							0x000004A5		// 방어구
#define LSID_AUTO001082							0x000004A6		// 발사물타입
#define LSID_AUTO001083							0x000004A7		// 소  환
#define LSID_AUTO001084							0x000004A8		// 런  처
#define LSID_AUTO001085							0x000004A9		// 좌로 회전
#define LSID_AUTO001086							0x000004AA		// 우로 회전
#define LSID_AUTO001087							0x000004AB		// 아이디를 입력하세요
#define LSID_AUTO001088							0x000004AC		// 패스워드를 입력하세요
#define LSID_AUTO001089							0x000004AD		// 패스워드가 일치하지 않습니다.
#define LSID_AUTO001090							0x000004AE		// 게임시작
#define LSID_AUTO001091							0x000004AF		// 제작진
#define LSID_AUTO001092							0x000004B0		// 종료
#define LSID_AUTO001093							0x000004B1		// 이전 캐릭터
#define LSID_AUTO001094							0x000004B2		// 다음 캐릭터
#define LSID_AUTO001095							0x000004B3		// 캐릭터 삭제
#define LSID_AUTO001096							0x000004B4		// 종  료
#define LSID_AUTO001097							0x000004B5		// 캐릭터를 삭제하겠습니까?
#define LSID_AUTO001098							0x000004B6		// 게임을 종료하시겠습니까?
#define LSID_AUTO001099							0x000004B7		// 이름 : %s
#define LSID_AUTO001100							0x000004B8		// 레벨 : %s
#define LSID_AUTO001101							0x000004B9		// 전사계
#define LSID_AUTO001102							0x000004BA		// 레인저계
#define LSID_AUTO001103							0x000004BB		// 정신계
#define LSID_AUTO001104							0x000004BC		// 특수계
#define LSID_AUTO001105							0x000004BD		// 성향 : %s
#define LSID_AUTO001106							0x000004BE		// 골 드 : %s
#define LSID_AUTO001107							0x000004BF		// 골  드 : %s
#define LSID_AUTO001108							0x000004C0		// 벨 라 토
#define LSID_AUTO001109							0x000004C1		// 코   라
#define LSID_AUTO001110							0x000004C2		// 확  인
#define LSID_AUTO001111							0x000004C3		// 취  소
#define LSID_AUTO001112							0x000004C4		// 신성동맹
#define LSID_AUTO001113							0x000004C5		// 유닛  기술
#define LSID_AUTO001114							0x000004C6		// 소환  기술
#define LSID_AUTO001115							0x000004C7		// 런처  기술
#define LSID_AUTO001116							0x000004C8		// 경혐치
#define LSID_AUTO001117							0x000004C9		// 도우미
#define LSID_AUTO001118							0x000004CA		// 고객센터
#define LSID_AUTO001119							0x000004CB		// 운영자
#define LSID_AUTO001120							0x000004CC		// 운영팀
#define LSID_AUTO001121							0x000004CD		// 관리자
#define LSID_AUTO001122							0x000004CE		// 관리팀
#define LSID_AUTO001123							0x000004CF		// 개발자
#define LSID_AUTO001125							0x000004D0		// 개발사
#define LSID_AUTO001126							0x000004D1		// 개발팀
#define LSID_AUTO001127							0x000004D2		// 10분후 홀리스톤 키퍼가 출몰합니다.
#define LSID_AUTO001128							0x000004D3		// 이미 설치할 수 있는 최대 갯수의 트랩이 설치되어 있습니다.
#define LSID_AUTO001129							0x000004D4		// 채굴 관련 : 채굴 장소가 잘못되었습니다.
#define LSID_AUTO001130							0x000004D5		// 채굴 관련 : 채굴 장소가 아닙니다.
#define LSID_AUTO001131							0x000004D6		// 채굴 관련 : 현재 채굴중입니다.
#define LSID_AUTO001132							0x000004D7		// 채굴 관련 : 채굴기를 장착하지 않았습니다.
#define LSID_AUTO001133							0x000004D8		// 채굴 관련 : 장착한 아이템이 채굴기가 아닙니다.
#define LSID_AUTO001134							0x000004D9		// 채굴 관련 : 채굴 지연 시간이 초과 되었습니다.
#define LSID_AUTO001135							0x000004DA		// 채굴 관련 : 채굴 지연 시간이 안 되었습니다.
#define LSID_AUTO001136							0x000004DB		// 채굴 관련 : 배터리가 부족합니다.
#define LSID_AUTO001137							0x000004DC		// 채굴 관련 : 원석 선택을 잘못하였습니다.
#define LSID_AUTO001138							0x000004DD		// 채굴 관련 : 인벤토리 공간이 부족합니다.
#define LSID_AUTO001139							0x000004DE		// 채굴 관련 : 현재 아이템을 사용할 수가 없습니다.
#define LSID_AUTO001140							0x000004DF		// 채굴 관련 : 채굴을 요청했을때와 위치가 틀립니다.
#define LSID_AUTO001141							0x000004E0		// 채굴 관련 실패 ( %d )
#define LSID_AUTO001142							0x000004E1		// 가드타워 : 더 이상 가드타워를 설치할 수 없습니다.
#define LSID_AUTO001143							0x000004E2		// 가드타워 : 인벤토리에 가드타워 아이템이 없습니다.
#define LSID_AUTO001144							0x000004E3		// 가드타워 : 현재 사용하려는 아이템은 가드타워 아이템이 아닙니다.
#define LSID_AUTO001145							0x000004E4		// 가드타워 : 가드타워 설치 재료가 중복되었습니다.
#define LSID_AUTO001146							0x000004E5		// 가드타워 : 가드타워 설치 재료를 가지고 있지 않습니다.
#define LSID_AUTO001147							0x000004E6		// 가드타워 : 가드타워 설치에 필요한 재료의 조합이 틀립니다.
#define LSID_AUTO001148							0x000004E7		// 가드타워 : 가드타워 설치 재료의 수량이 부족합니다.
#define LSID_AUTO001149							0x000004E8		// 가드타워 : 가드타워 설치에 필요한 재료의 수량이 틀립니다.
#define LSID_AUTO001150							0x000004E9		// 가드타워 : 가드타워를 너무 먼 거리에 설치하려 하고 있습니다.
#define LSID_AUTO001151							0x000004EA		// 가드타워 : 현재 작동중인 가드타워가 아닙니다.
#define LSID_AUTO001152							0x000004EB		// 가드타워 : 설치할 수 있는 가드타워의 갯수를 초과하였습니다.
#define LSID_AUTO001153							0x000004EC		// 가드타워 : 가드타워 설치 스킬을 사용할 수 없는 클래스입니다.
#define LSID_AUTO001154							0x000004ED		// 가드타워 : 가드타워 설치에 필요한 FP가 부족합니다.
#define LSID_AUTO001155							0x000004EE		// 가드타워 : 가까운 곳에 이미 다른 가드타워가 설치되어 있습니다.
#define LSID_AUTO001156							0x000004EF		// 가드타워 : 마을내에서는 가드타워를 설치할 수가 없습니다.
#define LSID_AUTO001157							0x000004F0		// 가드타워 : 알 수 없는 에러 (%d)
#define LSID_AUTO001158							0x000004F1		// 트랩 : 더 이상 트랩을 설치할 수 없습니다.
#define LSID_AUTO001159							0x000004F2		// 트랩 : 인벤토리에 트랩 아이템이 없습니다.
#define LSID_AUTO001160							0x000004F3		// 트랩 : 현재 사용하려는 아이템은 트랩 아이템이 아닙니다.
#define LSID_AUTO001161							0x000004F4		// 트랩 : 트랩 설치 재료가 중복되었습니다.
#define LSID_AUTO001162							0x000004F5		// 트랩 : 트랩 설치 재료를 가지고 있지 않습니다.
#define LSID_AUTO001163							0x000004F6		// 트랩 : 트랩 설치에 필요한 재료의 조합이 틀립니다.
#define LSID_AUTO001164							0x000004F7		// 트랩 : 트랩 설치 재료의 수량이 부족합니다.
#define LSID_AUTO001165							0x000004F8		// 트랩 : 트랩 설치에 필요한 재료의 수량이 틀립니다.
#define LSID_AUTO001166							0x000004F9		// 트랩 : 트랩을 너무 먼 거리에 설치하려 하고 있습니다.
#define LSID_AUTO001167							0x000004FA		// 트랩 : 현재 작동중인 트랩이 아닙니다.
#define LSID_AUTO001168							0x000004FB		// 트랩 : 설치할 수 있는 트랩의 갯수를 초과하였습니다.
#define LSID_AUTO001169							0x000004FC		// 트랩 : 트랩 설치 스킬을 사용할 수 없는 클래스입니다.
#define LSID_AUTO001170							0x000004FD		// 트랩 : 트랩 설치에 필요한 FP가 부족합니다.
#define LSID_AUTO001171							0x000004FE		// 트랩 : 가까운 곳에 이미 다른 트랩이 설치되어 있습니다.
#define LSID_AUTO001172							0x000004FF		// 트랩 : 마을내에서는 트랩을 설치할 수가 없습니다.
#define LSID_AUTO001173							0x00000500		// 트랩 : 알 수 없는 에러 (%d)
#define LSID_AUTO001174							0x00000501		// 아무곳
#define LSID_AUTO001175							0x00000502		// 자신 & 자기종족
#define LSID_AUTO001176							0x00000503		// 타종족
#define LSID_AUTO001177							0x00000504		// 시전 대상
#define LSID_AUTO001178							0x00000505		// C  P  : %s
#define LSID_AUTO001179							0x00000506		// 스킬/포스를 시전해도 더 이상 효과가 없습니다.
#define LSID_AUTO001180							0x00000507		// 해당 아이템은 사용할 수 있는 클래스를 가진 플레이어만이 사용할 수 있습니다.
#define LSID_AUTO001181							0x00000508		// 현재는 채굴을 할 수 없는 상태입니다. 채굴 가능 상태에서만 채굴 모드를 변경할 수 있습니다.
#define LSID_AUTO001182							0x00000509		// 부활 하시겠습니까? 5분이내 부활하지 않을 경우, 자동으로 부활됩니다.
#define LSID_AUTO001183							0x0000050A		// 코라길드
#define LSID_AUTO001184							0x0000050B		// 새로 설립할 길드명을 입력하세요.
#define LSID_AUTO001185							0x0000050C		// 코라%d호
#define LSID_AUTO001186							0x0000050D		// 길드명을 입력하지 않았습니다.
#define LSID_AUTO001187							0x0000050E		// 특정 길드에 소속되지 않은 8명의 플레이어로 구성된 파티의 장만 길드 설립을 신청할 수 있습니다.
#define LSID_AUTO001188							0x0000050F		// 현재 플레이어와 거래중입니다.
#define LSID_AUTO001189							0x00000510		// 채굴 상태에서는 아이템을 트레이드 할 수 없습니다.
#define LSID_AUTO001190							0x00000511		// 채굴 상태인 플레이어와 아이템을 트레이드 할 수 없습니다.
#define LSID_AUTO001191							0x00000512		// 새로 설립된 %s 길드의 창설자가 되었습니다.
#define LSID_AUTO001192							0x00000513		// 같은 이름을 가진 길드가 존재합니다.
#define LSID_AUTO001193							0x00000514		// 다른 작업중입니다. 잠시후 다시 신청하여 주시기 바랍니다.
#define LSID_AUTO001194							0x00000515		// 길드 설립에 실패 하였습니다.
#define LSID_AUTO001195							0x00000516		// %s 님이 길드에 가입하였습니다.
#define LSID_AUTO001196							0x00000517		// %s 님이 길드에서 탈퇴하였습니다.
#define LSID_AUTO001197							0x00000518		// 스킬/포스 시전 실패 : 사용 제한에 걸려있는 스킬/포스입니다.
#define LSID_AUTO001198							0x00000519		// 스킬/포스 시전 실패 : 마을에서는 피해 보조형 스킬/포스를 시전할 수 없습니다.
#define LSID_AUTO001199							0x0000051A		// 맨손
#define LSID_AUTO001200							0x0000051B		// 가입 신청
#define LSID_AUTO001201							0x0000051C		// 가입 신청할 길드 이름을 입력하십시오.
#define LSID_AUTO001202							0x0000051D		// 입 력
#define LSID_AUTO001203							0x0000051E		// 승인 대기 중
#define LSID_AUTO001204							0x0000051F		// 현재 %s 길드에 가입신청중입니다.<br>가입신청을 취소하시겠습니까?
#define LSID_AUTO001205							0x00000520		// 캐릭터명 검색
#define LSID_AUTO001206							0x00000521		// 검색
#define LSID_AUTO001207							0x00000522		// 나디아나디아나디
#define LSID_AUTO001208							0x00000523		// 찬 성
#define LSID_AUTO001209							0x00000524		// 반 대
#define LSID_AUTO001210							0x00000525		// 현재 제안된 안건이 없습니다.
#define LSID_AUTO001211							0x00000526		// 현재 접속 중인 의사결정권자 : %d / %d
#define LSID_AUTO001212							0x00000527		// %s님이 %s길드와 길드전을 제안하셨습니다.
#define LSID_AUTO001213							0x00000528		// %s님이 %s 행성전을 제안하셨습니다.
#define LSID_AUTO001214							0x00000529		// %s님이 %s님의 강제추방을 제안하셨습니다.
#define LSID_AUTO001215							0x0000052A		// %s님이 광고를 제안하셨습니다.
#define LSID_AUTO001216							0x0000052B		// %s님이 아이템 구입을 제안하셨습니다.
#define LSID_AUTO001217							0x0000052C		// %s님이 엠블렘 구입을 제안하셨습니다.
#define LSID_AUTO001218							0x0000052D		// %s님이 길드유지금 인출을 제안하셨습니다.<br><br>
#define LSID_AUTO001219							0x0000052E		// %s님이 무인판매기 세율을 %d으로 변경할 것을 제안하셨습니다.
#define LSID_AUTO001220							0x0000052F		// (찬성 %3d표 : %.2f%%)
#define LSID_AUTO001221							0x00000530		// (반대 %3d표 : %.2f%%)
#define LSID_AUTO001222							0x00000531		// 보유금
#define LSID_AUTO001223							0x00000532		// 입금할 금액을 입력하십시오.
#define LSID_AUTO001224							0x00000533		// 입 금
#define LSID_AUTO001225							0x00000534		// 길드와 관련되어 삭제된 데이터는 복구되지 않습니다. 또, 길드에 따라 다시 가입할 수 없는 경우도 있습니다.
#define LSID_AUTO001228							0x00000535		// 탈퇴하시겠습니까?
#define LSID_AUTO001229							0x00000536		// 선택
#define LSID_AUTO001230							0x00000537		// 거 부
#define LSID_AUTO001231							0x00000538		// 구성원에 대한 강제 추방 안건은 모든 구성원들에게 전달되며, 의사 결정권자들의 투표에 의해 부결될 수도 있습니다.
#define LSID_AUTO001233							0x00000539		// 강제 추방할 길드원을 입력하십시오.
#define LSID_AUTO001234							0x0000053A		// 배경 선택
#define LSID_AUTO001235							0x0000053B		// 마크 선택
#define LSID_AUTO001236							0x0000053C		// 금액 : %13s %s
#define LSID_AUTO001237							0x0000053D		// 길드전 선포
#define LSID_AUTO001238							0x0000053E		// 행선전 선포
#define LSID_AUTO001239							0x0000053F		// 구성원 강제 추방
#define LSID_AUTO001240							0x00000540		// 길드 홍보
#define LSID_AUTO001241							0x00000541		// 길드 아이템 구매
#define LSID_AUTO001242							0x00000542		// 길드 엠블렘 구매
#define LSID_AUTO001243							0x00000543		// 길드 유지금 인출
#define LSID_AUTO001244							0x00000544		// 무인 거래기 세율 조정
#define LSID_AUTO001245							0x00000545		// 메인메뉴
#define LSID_AUTO001246							0x00000546		// 길 드
#define LSID_AUTO001247							0x00000547		// 길드명 :
#define LSID_AUTO001248							0x00000548		// 등  급 :
#define LSID_AUTO001249							0x00000549		// 지  수 :
#define LSID_AUTO001250							0x0000054A		// 일 반
#define LSID_AUTO001251							0x0000054B		// 관 리
#define LSID_AUTO001252							0x0000054C		// %d 등급
#define LSID_AUTO001253							0x0000054D		// 구성원 정보 확인
#define LSID_AUTO001254							0x0000054E		// 안건 정보 확인
#define LSID_AUTO001255							0x0000054F		// 길드 유지금 입금
#define LSID_AUTO001256							0x00000550		// 길드카페
#define LSID_AUTO001257							0x00000551		// 창고
#define LSID_AUTO001258							0x00000552		// 길드 탈퇴
#define LSID_AUTO001259							0x00000553		// 가입 승인
#define LSID_AUTO001260							0x00000554		// 안건 제시
#define LSID_AUTO001261							0x00000555		// 금전 출납 확인
#define LSID_AUTO001262							0x00000556		// 생성된 캐릭터가 있습니다.
#define LSID_AUTO001263							0x00000557		// 잠시 기다려주세요.
#define LSID_AUTO001264							0x00000558		// 캐릭터를 생성해주세요.
#define LSID_AUTO001265							0x00000559		// 다른 종족의 캐릭터가 이미 생성되어 있습니다. 
#define LSID_AUTO001266							0x0000055A		// 캐릭터 이름에 문제가 있습니다. 
#define LSID_AUTO001267							0x0000055B		// 이미 로딩된 Index:%d
#define LSID_AUTO001268							0x0000055C		// 파티클 생성 실패Index:%d
#define LSID_AUTO001269							0x0000055D		// API 가 변조되었습니다. 해킹 시도의 가능성이 있으므로 게임을 종료합니다.
#define LSID_AUTO001270							0x0000055E		// 시간 흐름이 정상적이지 않습니다. 스피드핵의 가능성이 있으므로 게임을 종료합니다.
#define LSID_AUTO001271							0x0000055F		// 다른 게임이 실행 중입니다. 실행 중인 게임을 종료하고 다시 실행하여 주십시오.
#define LSID_AUTO001272							0x00000560		// 해킹 프로그램 또는 디버거가 실행중입니다. 게임을 종료합니다.
#define LSID_AUTO001273							0x00000561		// 게임의 일부 프로그램이 강제 종료 되었습니다. 게임을 종료합니다.
#define LSID_AUTO001274							0x00000562		// 시간 처리 하드웨어에 이상이 발생하였습니다. 게임을 종료합니다.
#define LSID_AUTO001275							0x00000563		// 게임 프로그램의 일부가 변경되었습니다. 해킹 시도의 가능성이 있으므로 게임을 종료합니다.
#define LSID_AUTO001276							0x00000564		// 알려지지 않은 오류입니다. 게임 종료 후 다시 실행하여 보시고, 계속해서 오류가 발생하면 운영팀에게 문의바랍니다.
#define LSID_AUTO001277							0x00000565		// SOCKET ERROR: 다른 네트워크 보안프로그램이 실행 되었을 경우에도, 나타날 수 있습니다.
#define LSID_AUTO001278							0x00000566		// SOCKET ERROR: 다른 네트워크 보안프로그램이 실행 되었을 경우에도 나타날 수 있습니다.
#define LSID_ANIMUS_RECRUIT						0x00000567		// Recruit
#define LSID_ANIMUS_VETERAN						0x00000568		// Veteran
#define LSID_ANIMUS_MASTER						0x00000569		// Master
#define LSID_ANIMUS_AMI							0x0000056A		// Ami
#define LSID_AUTO001279							0x0000056B		// 해당 스킬/포스는 SP가 50%%이하 상태에서만 시전할 수 있습니다.
#define LSID_AUTO001280							0x0000056C		// 다른 플레이어와 트레이드 중에는 아이템 사용이 불가능합니다.
#define LSID_AUTO001281							0x0000056D		// 기갑 장비 탑승 상태에서는 귀환 아이템을 사용할 수 없습니다.
#define LSID_AUTO001282							0x0000056E		// 현재는 귀환 아이템을 사용할 수 없습니다.
#define LSID_AUTO001283							0x0000056F		// 코라두살
#define LSID_AUTO001284							0x00000570		// 코라대장
#define LSID_AUTO001285							0x00000571		// 코라0호
#define LSID_AUTO001286							0x00000572		// 벨라토비
#define LSID_AUTO001287							0x00000573		// 벨라벨라
#define LSID_AUTO001288							0x00000574		// 코라%02d호
#define LSID_AUTO001289							0x00000575		// 현재 %s님은 파티 거부 상태입니다.
#define LSID_AUTO001290							0x00000576		// 현재 %s님은 트레이드 거부 상태입니다.
#define LSID_AUTO001291							0x00000577		// %s님께서 %s %d개를 획득하셨습니다.
#define LSID_AUTO001292							0x00000578		// 백팩에 있는 탄환을 장착하였습니다.
#define LSID_AUTO001293							0x00000579		// 승직하기 위한 레벨이 부족합니다.
#define LSID_AUTO001294							0x0000057A		// 클래스를 잘못 선택하였습니다.
#define LSID_AUTO001295							0x0000057B		// 더 이상 승직할 수 없습니다.
#define LSID_AUTO001296							0x0000057C		// 보상아이템을 잘못 선택하였습니다.
#define LSID_AUTO001297							0x0000057D		// 승직 보상 아이템을 위한 인벤토리 공간이 부족합니다.
#define LSID_AUTO001298							0x0000057E		// 해당 플레이어는 귓속말 거부 상태입니다.
#define LSID_AUTO001299							0x0000057F		// 적대적인 캐릭터를 치료할 수 없습니다. 우호적인 캐릭터를 선택해 주십시오.
#define LSID_AUTO001300							0x00000580		// 가방 장착 실패 : 장착하려는 가방 아이템이 인벤토리에 없습니다.
#define LSID_AUTO001301							0x00000581		// 가방 장착 실패 : 이미 모든 가방을 장착하여 더 이상 장착할 수 없습니다.
#define LSID_AUTO001302							0x00000582		// 가방 장착 실패 ( %d )
#define LSID_AUTO001303							0x00000583		// 투표
#define LSID_AUTO001304							0x00000584		// 길드전
#define LSID_AUTO001305							0x00000585		// 행성전
#define LSID_AUTO001306							0x00000586		// 길드원 강퇴
#define LSID_AUTO001307							0x00000587		// 아이템 구매
#define LSID_AUTO001308							0x00000588		// 엠블렘 구매
#define LSID_AUTO001309							0x00000589		// 유지금 인출
#define LSID_AUTO001310							0x0000058A		// 무인거래기 세율
#define LSID_AUTO001311							0x0000058B		// 길드설립을 위해서는 24,000,000 %s가 필요합니다.
#define LSID_AUTO001312							0x0000058C		// 현재는 투표가 진행중입니다. 투표중에는 다른 투표 제안을 할 수 없습니다.
#define LSID_AUTO001313							0x0000058D		// 투표 가능 플레이어를 지정하는 등급 표기가 잘못되었습니다.
#define LSID_AUTO001314							0x0000058E		// 투표 제안에 실패하였습니다. ( %d )
#define LSID_AUTO001315							0x0000058F		// 투표 실패 ( %d )
#define LSID_AUTO001316							0x00000590		// 다른 길드에 가입신청중인 파티원이 있습니다.
#define LSID_AUTO001317							0x00000591		// 설립가능한 최대 길드수를 초과하였습니다.
#define LSID_AUTO001318							0x00000592		// %s 길드에 가입하였습니다.
#define LSID_AUTO001319							0x00000593		// %s 님이 가입신청을 하였습니다.
#define LSID_AUTO001320							0x00000594		// 이미 다른 길드에 가입중입니다.
#define LSID_AUTO001321							0x00000595		// 이미 가입 신청중입니다. 기존의 가입신청을 취소하신후 다시 시도해주세요.
#define LSID_AUTO001322							0x00000596		// 해당 길드는 더 이상 새 구성원을 받을 수 없습니다.
#define LSID_AUTO001323							0x00000597		// 가입신청 제한인원이 초과되었습니다. 다음에 다시 신청해주세요.
#define LSID_AUTO001324							0x00000598		// [%d]해당 길드의 가입신청을 실패하였습니다.
#define LSID_AUTO001325							0x00000599		// 해당 길드의 가입신청을 실패하였습니다.
#define LSID_AUTO001326							0x0000059A		// [%d]%s 님에 대한 가입 승낙/거부 권한 행사에 실패하였습니다.
#define LSID_AUTO001327							0x0000059B		// %s 님에 대한 가입 승낙/거부 권한 행사에 실패하였습니다.
#define LSID_AUTO001328							0x0000059C		// %s 길드의 가입 신청이 거부되었습니다.
#define LSID_AUTO001329							0x0000059D		// %s 길드에 가입신청을 취소하였습니다.
#define LSID_AUTO001330							0x0000059E		// [%d]%s 길드의 가입신청 취소 요청이 실패하였습니다.
#define LSID_AUTO001331							0x0000059F		// %s 길드의 가입신청 취소 요청이 실패하였습니다.
#define LSID_AUTO001332							0x000005A0		// %s 길드에서 탈퇴하였습니다.
#define LSID_AUTO001333							0x000005A1		// [%d]%s 길드의 탈퇴 요청이 실패하였습니다.
#define LSID_AUTO001334							0x000005A2		// %s 길드의 탈퇴 요청이 실패하였습니다.
#define LSID_AUTO001335							0x000005A3		// [%d]길드유지금 입금에 실패하였습니다.
#define LSID_AUTO001336							0x000005A4		// 길드유지금 입금에 실패하였습니다.
#define LSID_AUTO001337							0x000005A5		// %s 님이 %d %s, %d %s 를 입금하였습니다.
#define LSID_AUTO001338							0x000005A6		// %s 님이 %d %s 를 입금하였습니다.
#define LSID_AUTO001339							0x000005A7		// %s 님이 %d %s, %d %s 를 출금하였습니다.
#define LSID_AUTO001340							0x000005A8		// %s 님이 %d %s 를 출금하였습니다.
#define LSID_AUTO001341							0x000005A9		// [%d]안건 제안에 실패하였습니다.
#define LSID_AUTO001342							0x000005AA		// 안건 제안에 실패하였습니다.
#define LSID_AUTO001343							0x000005AB		// %s 에 관해 새로운 안건이 제안되었습니다.
#define LSID_AUTO001344							0x000005AC		// %s 에 관해 진행중인 안건이 있습니다
#define LSID_AUTO001345							0x000005AD		// 안건을 철회하였습니다.
#define LSID_AUTO001346							0x000005AE		// [%d]안건 철회에 실패하였습니다.
#define LSID_AUTO001347							0x000005AF		// 안건 철회에 실패하였습니다.
#define LSID_AUTO001348							0x000005B0		// %s 님이 진행중인 안건을 철회하였습니다.
#define LSID_AUTO001349							0x000005B1		// 진행중인 안건이 무효화 되었습니다.
#define LSID_AUTO001350							0x000005B2		// [%d]투표권 행사에 실패하였습니다.
#define LSID_AUTO001351							0x000005B3		// 투표권 행사에 실패하였습니다.
#define LSID_AUTO001352							0x000005B4		// 투표에 의해 안건이 가결되었습니다.
#define LSID_AUTO001353							0x000005B5		// 투표에 의해 안건이 부결되었습니다.
#define LSID_AUTO001354							0x000005B6		// 안건 철회
#define LSID_AUTO001355							0x000005B7		// 출 금
#define LSID_AUTO001356							0x000005B8		// 잔 고
#define LSID_AUTO001357							0x000005B9		// %20s 골  드
#define LSID_AUTO001358							0x000005BA		// 투 표
#define LSID_AUTO001359							0x000005BB		// 기 권
#define LSID_AUTO001360							0x000005BC		// 찬성 %.2f%%
#define LSID_AUTO001361							0x000005BD		// 반대 %.2f%%
#define LSID_AUTO001362							0x000005BE		// 남은 시간 : %3d초
#define LSID_AUTO001363							0x000005BF		// 투표 종료
#define LSID_AUTO001364							0x000005C0		// 공격 데미지의 %.2f%%%%를 HP로 전환
#define LSID_AUTO001365							0x000005C1		// 공격 데미지의 %.2f%%%%를 FP로 전환
#define LSID_AUTO001366							0x000005C2		// 크리티컬 확률 %s
#define LSID_AUTO001367							0x000005C3		// 사정거리 %s
#define LSID_AUTO001368							0x000005C4		// 지속피해보조 시간 %s
#define LSID_AUTO001369							0x000005C5		// 회복량 %d%%%% 증가
#define LSID_AUTO001370							0x000005C6		// 회피율 %d 증가
#define LSID_AUTO001371							0x000005C7		// 현재 다수의 클라이언트가 실행중입니다. 처음 실행한 클라이언트에서만 채굴이 가능합니다.
#define LSID_AUTO001372							0x000005C8		// 길드원 추방
#define LSID_AUTO001373							0x000005C9		// 아이템 판매 실패 : 플레이어와 다른 맵에 존재하는 상인입니다.
#define LSID_AUTO001374							0x000005CA		// 아이템 판매 실패 : 플레이어와 다른 종족의 상인입니다.
#define LSID_AUTO001375							0x000005CB		// 아이템 판매 실패 : 플레이어와 너무 먼 거리에 있는 상인입니다.
#define LSID_AUTO001376							0x000005CC		// 아이템 판매 실패 : 인벤토리 공간이 부족합니다.
#define LSID_AUTO001377							0x000005CD		// 아이템 판매 실패 : 아이템을 넣을 수 없는 공간입니다.
#define LSID_AUTO001378							0x000005CE		// 아이템 판매 실패 : 플레이어가 아이템을 장착할 수 없는 종족입니다.
#define LSID_AUTO001379							0x000005CF		// 아이템 판매 실패 : 플레이어가 장착할 수 없는 아이템입니다.
#define LSID_AUTO001380							0x000005D0		// 아이템 판매 실패 : 플레이어가 소유하고 있는 아이템이 아닙니다.
#define LSID_AUTO001381							0x000005D1		// 아이템 판매 실패 : 기갑 장비 관련 아이템은 일반 상인과 거래할 수 없습니다.
#define LSID_AUTO001382							0x000005D2		// 아이템 판매 실패 : 현재 사용중인 아이템은 거래할 수 없습니다.
#define LSID_AUTO001383							0x000005D3		// 아이템 판매 실패 : 거래중인 아이템이 중복 되었습니다.
#define LSID_AUTO001384							0x000005D4		// 아이템 판매 실패 : 거래하려는 아이템의 수량이 실제 소유한 아이템의 수량보다 많습니다.
#define LSID_AUTO001385							0x000005D5		// 아이템 판매 실패 : 거래에 필요한 자금이 부족합니다.
#define LSID_AUTO001386							0x000005D6		// 아이템 판매 실패 : 현재 거래중인 상인과는 거래할 수 없는 아이템입니다.
#define LSID_AUTO001387							0x000005D7		// 아이템 판매 실패 : 알 수 없는 에러( %d )
#define LSID_AUTO001388							0x000005D8		// 투표 관련 : 종족장만이 투표를 제안할 수 있습니다.
#define LSID_AUTO001389							0x000005D9		// 투표 관련 : 현재 투표 진행중입니다.
#define LSID_AUTO001390							0x000005DA		// 투표 관련 : 현재 투표 진행중이 아닙니다.
#define LSID_AUTO001391							0x000005DB		// 투표 관련 : 투표 인덱스가 잘못 되었습니다.
#define LSID_AUTO001392							0x000005DC		// 투표 관련 : 이미 투표를 하였습니다.
#define LSID_AUTO001393							0x000005DD		// 투표 관련 : 투표 권한이 없습니다.
#define LSID_AUTO001394							0x000005DE		// 투표 관련 : 알 수 없는 에러 ( %d )
#define LSID_AUTO001395							0x000005DF		// 가입 대기중인 신청자가 있습니다.
#define LSID_AUTO001396							0x000005E0		// 존재하지 않는 길드이름입니다.
#define LSID_AUTO001397							0x000005E1		// 한번에 입금하기에는 너무 큰 금액입니다.
#define LSID_AUTO001398							0x000005E2		// %s에 관해 새로운 안건이 제안되었습니다.
#define LSID_AUTO001399							0x000005E3		// %s에 관해 진행중인 안건이 있습니다
#define LSID_AUTO001400							0x000005E4		// 투표 결과로 %s 님이 길드에서 추방되었습니다.
#define LSID_AUTO001401							0x000005E5		// 새로운 길드 엠블렘이 지정되었습니다.
#define LSID_AUTO001402							0x000005E6		// %s에 관한 안건이 가결되었습니다.
#define LSID_AUTO001403							0x000005E7		// %s 님에 대한 추방 투표가 부결되었습니다.
#define LSID_AUTO001404							0x000005E8		// %s에 관한 안건이 부결되었습니다.
#define LSID_AUTO001405							0x000005E9		// 길드 설립
#define LSID_AUTO001406							0x000005EA		// 등 록
#define LSID_AUTO001407							0x000005EB		// 초기화
#define LSID_AUTO001408							0x000005EC		// 등록
#define LSID_AUTO001409							0x000005ED		// 가격입력
#define LSID_AUTO001410							0x000005EE		// 삭제
#define LSID_AUTO001411							0x000005EF		// 총 등록비용 : %8s %s
#define LSID_AUTO001412							0x000005F0		// 인출 금액을 입력하십시오.
#define LSID_AUTO001413							0x000005F1		// %2d월 0%d일
#define LSID_AUTO001414							0x000005F2		// %2d월 %2d일
#define LSID_AUTO001415							0x000005F3		// 홍보중인 길드
#define LSID_AUTO001416							0x000005F4		// 굴림체[[이제안쓴다]]
#define LSID_AUTO001417							0x000005F5		// 시즈 모드는 런쳐류의 무기를 장착해야만 사용 가능합니다.
#define LSID_AUTO001418							0x000005F6		// 사정권이외의 지역은 공격할 수 없습니다.
#define LSID_AUTO001419							0x000005F7		// 시즈 모드에서는 시즈 스킬만 시전할 수 있습니다.
#define LSID_AUTO001420							0x000005F8		// 명중률 %d%%%% 증가
#define LSID_AUTO001421							0x000005F9		// 종족장만이 투표를 제안할 수 있습니다.
#define LSID_AUTO001422							0x000005FA		// 이미 다른 시즈킷을 사용하고 있습니다.
#define LSID_AUTO001423							0x000005FB		// %s 님이 친구 등록을 요청하였습니다. 승낙하시겠습니까?
#define LSID_AUTO001424							0x000005FC		// %s 님이 친구 등록을 거부하였습니다.
#define LSID_AUTO001425							0x000005FD		// %s 님이 친구 목록에 추가되었습니다.
#define LSID_AUTO001426							0x000005FE		// %s 님의 친구 목록에서 삭제되었습니다.
#define LSID_AUTO001427							0x000005FF		// 벨라%02d호
#define LSID_AUTO001428							0x00000600		// 이미 등록된 아이템입니다
#define LSID_AUTO001429							0x00000601		// 선택한 아이템을 삭제하겠습니까?
#define LSID_AUTO001430							0x00000602		// [ 아이템 구입 성공 ]<br>
#define LSID_AUTO001431							0x00000603		// <br>[ 아이템 구입 실패 ]<br>
#define LSID_AUTO001432							0x00000604		// 아이템 구입 실패
#define LSID_AUTO001433							0x00000605		// 벨라토 점령지구
#define LSID_AUTO001434							0x00000606		// 코라 점령지구
#define LSID_AUTO001435							0x00000607		// 크래그 광산
#define LSID_AUTO001436							0x00000608		// 아크레시아 점령지구
#define LSID_AUTO001437							0x00000609		// 솔루스 조계지
#define LSID_AUTO001438							0x0000060A		// 아나카데 조계지
#define LSID_AUTO001439							0x0000060B		// 하람 성채
#define LSID_AUTO001440							0x0000060C		// 누메러스 성채
#define LSID_AUTO001441							0x0000060D		// 배틀 던전
#define LSID_AUTO001442							0x0000060E		// 알수없음
#define LSID_AUTO001443							0x0000060F		// 로그오프
#define LSID_AUTO001444							0x00000610		// 벨라토마을%d
#define LSID_AUTO001445							0x00000611		// 친구로 추가할 상대방의 이름을 입력하세요.
#define LSID_AUTO001446							0x00000612		// 이미 등록되어 있는 이름입니다.
#define LSID_AUTO001447							0x00000613		// %s 님을 친구 관리 목록에서 삭제하겠습니까?
#define LSID_AUTO001448							0x00000614		// 새로 추가할 친구 이름을 입력하세요
#define LSID_AUTO001449							0x00000615		// 유료 계정이 아닙니다.
#define LSID_AUTO001450							0x00000616		// 과금시간이 만료되어 %d초 후 게임을 종료합니다.
#define LSID_AUTO001451							0x00000617		// 과금시간이 만료되어 게임을 종료합니다.
#define LSID_AUTO001452							0x00000618		// 시즈킷의 내구도를 모두 소모하였습니다.
#define LSID_AUTO001453							0x00000619		// 시즈 모드 : 시즈킷이 없습니다.
#define LSID_AUTO001454							0x0000061A		// 시즈 모드 : 현재 시즈 모드입니다.
#define LSID_AUTO001455							0x0000061B		// 시즈 모드 : 현재 시즈킷의 내구도가 0 입니다.
#define LSID_AUTO001456							0x0000061C		// 시즈 모드 : 시즈 모드에 필요한 무기를 장착하고 있지 않습니다.
#define LSID_AUTO001457							0x0000061D		// 시즈 모드 : 시즈킷을 사용할 수 없는 종족입니다.
#define LSID_AUTO001458							0x0000061E		// 시즈 모드 : 시즈킷을 사용하기 위한 마스터리가 부족합니다.
#define LSID_AUTO001459							0x0000061F		// 시즈 모드 : 기갑 장비에 탑승중입니다.
#define LSID_AUTO001460							0x00000620		// 시즈 모드 : 시즈킷을 사용할 수 없습니다.
#define LSID_AUTO001461							0x00000621		// 시즈 모드 : 현재 시즈 모드가 아닙니다.
#define LSID_AUTO001462							0x00000622		// 시즈 모드 : 알 수 없는 에러 ( %d )
#define LSID_AUTO001463							0x00000623		// 홀리스톤 키퍼가 우리 종족의 통제를 벗어났습니다. 카오스 상태에서는 모든 종족에게 적대적입니다.
#define LSID_AUTO001464							0x00000624		// 홀리스톤 키퍼가 %s 종족의 통제를 벗어났습니다. 카오스 상태에서는 모든 종족에게 적대적입니다.
#define LSID_AUTO001465							0x00000625		// %d분 후에 모든 통제 장치가 활성화됩니다.
#define LSID_AUTO001466							0x00000626		// %s 님이 %s 를 입금하였습니다.
#define LSID_AUTO001467							0x00000627		// 길드유지금 으로 %s 를 입금하였습니다.
#define LSID_AUTO001468							0x00000628		// %s 님이 %s 를 출금하였습니다.
#define LSID_AUTO001469							0x00000629		// 길드유지금 %s 출금이 승인되었습니다.
#define LSID_AUTO001470							0x0000062A		// 게시판 구매
#define LSID_AUTO001471							0x0000062B		// 창고 구매
#define LSID_AUTO001472							0x0000062C		// 길드 관련 : 파티 상태가 아닙니다.
#define LSID_AUTO001473							0x0000062D		// 길드 관련 : 파티의 리더가 아닙니다.
#define LSID_AUTO001474							0x0000062E		// 길드 관련 : 이미 다른 길드에 가입중입니다.
#define LSID_AUTO001475							0x0000062F		// 길드 관련 : 같은 이름을 가진 길드가 존재합니다.
#define LSID_AUTO001476							0x00000630		// 길드 관련 : 파티원 중 이미 길드에 가입한 사람이 있습니다.
#define LSID_AUTO001477							0x00000631		// 길드 관련 : 다른 길드에 가입신청중인 파티원이 있습니다.
#define LSID_AUTO001478							0x00000632		// 길드 관련 : 파티의 인원이 모자랍니다.
#define LSID_AUTO001479							0x00000633		// 길드 관련 : 설립가능한 최대 길드수를 초과하였습니다.
#define LSID_AUTO001480							0x00000634		// 길드 관련 : 승직을 하지 않은 파티원이 있습니다.
#define LSID_AUTO001481							0x00000635		// 길드 관련 : 설립 자금이 모자랍니다.
#define LSID_AUTO001482							0x00000636		// 길드 관련 : 일반계정으로만 설립이 가능합니다.
#define LSID_AUTO001483							0x00000637		// 길드 관련 : 이미 가입 신청중입니다. 기존의 가입신청을 취소하신후 다시 시도해주세요.
#define LSID_AUTO001484							0x00000638		// 길드 관련 : 해당 길드는 더 이상 새 구성원을 받을 수 없습니다.
#define LSID_AUTO001485							0x00000639		// 길드 관련 : 가입신청 제한인원이 초과되었습니다. 다음에 다시 신청해주세요.
#define LSID_AUTO001486							0x0000063A		// 길드 관련 : 신청대기자가 종료하였습니다.
#define LSID_AUTO001487							0x0000063B		// 길드 관련 : 안건이 이미 진행중입니다.
#define LSID_AUTO001488							0x0000063C		// 길드 관련 : 진행중인 안건이 없습니다.
#define LSID_AUTO001489							0x0000063D		// 길드 관련 : 대상 안건이 틀립니다.
#define LSID_AUTO001490							0x0000063E		// 길드 관련 : 의사결정권자가 없습니다.
#define LSID_AUTO001491							0x0000063F		// 길드 관련 : 이미 같은 엠블렘이 있습니다.
#define LSID_AUTO001492							0x00000640		// 길드 관련 : 이미 투표에 참가 하였습니다.
#define LSID_AUTO001493							0x00000641		// 길드 관련 : 타종족의 길드에는 가입할수 없습니다.
#define LSID_AUTO001494							0x00000642		// 길드 관련 : 현재 투방 투표 중입니다.
#define LSID_AUTO001495							0x00000643		// 길드 관련 : 한번에 가능한 금액을 초과하였습니다.
#define LSID_AUTO001496							0x00000644		// 길드 관련 : 길드의 보유 소지금이 부족합니다.
#define LSID_AUTO001497							0x00000645		// 길드 관련 : 길드의 입/출금이 제한 되어있습니다.
#define LSID_AUTO001498							0x00000646		// 길드 관련 : 존재하지 않는 길드이름입니다.
#define LSID_AUTO001499							0x00000647		// 길드 관련 : 신청 대기 상태입니다.
#define LSID_AUTO001500							0x00000648		// 길드 관련 : 길드원이 아닙니다
#define LSID_AUTO001501							0x00000649		// 길드 관련 : 해당 권한이 없습니다.
#define LSID_AUTO001502							0x0000064A		// 길드 관련 : 가입신청 대기 상태가 아닙니다.
#define LSID_AUTO001503							0x0000064B		// 길드 관련 : 대기 상태입니다.
#define LSID_AUTO001504							0x0000064C		// 길드 관련 : 길드의 구성원이 초과되었습니다.
#define LSID_AUTO001505							0x0000064D		// 길드 관련 : 대상자가 접속중이 아닙니다.
#define LSID_AUTO001506							0x0000064E		// 길드 관련 : 알 수 없는 에러 ( %d )
#define LSID_AUTO001507							0x0000064F		// 개인 정량
#define LSID_AUTO001508							0x00000650		// 쿨타임
#define LSID_AUTO001509							0x00000651		// 굿타임
#define LSID_AUTO001510							0x00000652		// 프리미엄 서비스 정액
#define LSID_AUTO001511							0x00000653		// 프리미엄 서비스 정량
#define LSID_AUTO001512							0x00000654		// 종료일은 %d년 %d월 %d일 %d시 %d분 입니다.
#define LSID_AUTO001513							0x00000655		// 사용 시간이 %d분 남았습니다.
#define LSID_AUTO001514							0x00000656		// 정액 IP사용한도가 초과되어 게임을 종료합니다.
#define LSID_AUTO001515							0x00000657		// %s : %d년 %d월 %d일 %d시 %d분까지 사용가능 합니다.
#define LSID_AUTO001516							0x00000658		// %s : %d년 %d월 %d일까지 매일 %d분 사용 가능하며, 오늘은 %d분 남았습니다.
#define LSID_AUTO001517							0x00000659		// %s : %d분 사용가능 합니다.
#define LSID_AUTO001518							0x0000065A		// 현재 사용하시는 요금제가 %s요금제에서 %s요금제로 변경 되었습니다.
#define LSID_AUTO001519							0x0000065B		// %s 님을 친구 관리 목록에서 삭제했습니다.
#define LSID_AUTO001520							0x0000065C		// 버디 관련 : 더이상 친구를 추가할수 없습니다.
#define LSID_AUTO001521							0x0000065D		// 버디 관련 : 이미 등록된 플레이어 입니다.
#define LSID_AUTO001522							0x0000065E		// 버디 관련 : 해당 플레이어가 없거나 접속중이 아닙니다.
#define LSID_AUTO001523							0x0000065F		// 버디 관련 : 해당 플레이어는 더이상 친구를 추가 할수 없습니다.
#define LSID_AUTO001524							0x00000660		// 버디 관련 : 등록 요청을 하지 않은 플레이어입니다.
#define LSID_AUTO001525							0x00000661		// 버디 관련 : 친구 목록에 없는 플레이어입니다.
#define LSID_AUTO001526							0x00000662		// 버디 관련 : 알 수 없는 에러 ( %d )
#define LSID_AUTO001527							0x00000663		// RF온라인
#define LSID_AUTO001528							0x00000664		// 온
#define LSID_AUTO001529							0x00000665		// %s 제작, 채취, 가공
#define LSID_AUTO001530							0x00000666		// %s에게 아이템 전달
#define LSID_AUTO001531							0x00000667		// 아이템 전달
#define LSID_AUTO001532							0x00000668		// 경험치
#define LSID_AUTO001533							0x00000669		// 구 입
#define LSID_AUTO001534							0x0000066A		// 판매 아이템
#define LSID_AUTO001535							0x0000066B		// 가격
#define LSID_AUTO001536							0x0000066C		// 상세 정보
#define LSID_AUTO001537							0x0000066D		// 새로고침
#define LSID_AUTO001538							0x0000066E		// 모두선택
#define LSID_AUTO001539							0x0000066F		// 선택해제
#define LSID_AUTO001540							0x00000670		// 찾 기
#define LSID_AUTO001541							0x00000671		// 무기
#define LSID_AUTO001542							0x00000672		// 장신구
#define LSID_AUTO001543							0x00000673		// 업그레이드 재료
#define LSID_AUTO001544							0x00000674		// 제작 재료
#define LSID_AUTO001545							0x00000675		// 포스리버
#define LSID_AUTO001546							0x00000676		// 포션
#define LSID_AUTO001547							0x00000677		// 가격 오름차순
#define LSID_AUTO001548							0x00000678		// 가격 내림차순
#define LSID_AUTO001549							0x00000679		// 레벨 오름차순
#define LSID_AUTO001550							0x0000067A		// 레벨 내림차순
#define LSID_AUTO001551							0x0000067B		// 이름 오름차순
#define LSID_AUTO001552							0x0000067C		// 이름 내림차순
#define LSID_AUTO001553							0x0000067D		// 포스레벨
#define LSID_AUTO001554							0x0000067E		// 버 디
#define LSID_AUTO001555							0x0000067F		// 친 구
#define LSID_AUTO001556							0x00000680		// 친구 이름
#define LSID_AUTO001557							0x00000681		// 현재 위치
#define LSID_AUTO001558							0x00000682		// 귓 속 말
#define LSID_AUTO001559							0x00000683		// 친구삭제
#define LSID_AUTO001560							0x00000684		// 일반멤버
#define LSID_AUTO001561							0x00000685		// 위원회
#define LSID_AUTO001562							0x00000686		// 원년멤버
#define LSID_AUTO001563							0x00000687		// 정말로 탈퇴하시겠습니까?
#define LSID_AUTO001564							0x00000688		// 시즈킷이 지원하는 무기를 장착해야만 사용 가능합니다.
#define LSID_AUTO001565							0x00000689		// 남은 시간 : %d분
#define LSID_AUTO001566							0x0000068A		// 부활 하시겠습니까? %d분이내 부활하지 않을 경우, 자동으로 부활됩니다.
#define LSID_AUTO001567							0x0000068B		// 등록할 아이템의 수량과 가격을 입력하세요.
#define LSID_AUTO001568							0x0000068C		// 수량 :
#define LSID_AUTO001569							0x0000068D		// 등록할 아이템의 가격을 입력하세요.
#define LSID_AUTO001570							0x0000068E		// 가격 :
#define LSID_AUTO001571							0x0000068F		// 아이템 가격이 %d -> %d으로 수정되었습니다.
#define LSID_AUTO001572							0x00000690		// 모든 종족이 통제장치의 칩 확보에 실패했습니다. 따라서 이후에 출몰하는 홀리스톤 키퍼는 모든 종족에 대해서 적대적입니다.
#define LSID_AUTO001573							0x00000691		// 통제장치의 칩 확보에 성공했습니다. 앞으로 10분 후 통제 가능한 홀리스톤 키퍼가 출몰합니다.
#define LSID_AUTO001574							0x00000692		// 통제장치의 칩 확보에 실패했습니다. 따라서 이후에 출몰하는 홀리스톤 키퍼는 우리 종족에 대해서 적대적입니다.
#define LSID_AUTO001575							0x00000693		// 퀘스트 아이템 %s 1개를 제작하였습니다.
#define LSID_AUTO001576							0x00000694		// 투표 결과로 %s 길드에서 추방되었습니다.
#define LSID_AUTO001577							0x00000695		// 버디 관련 : 타 종족과는 친구 등록을 할 수 없습니다.
#define LSID_AUTO001578							0x00000696		// 아이템 등록비는 1,000 %s입니다.
#define LSID_AUTO001579							0x00000697		// 아이템 수량을 입력하세요.
#define LSID_AUTO001580							0x00000698		// 아이템 가격을 입력하세요.
#define LSID_AUTO001581							0x00000699		// 접속종료
#define LSID_AUTO001582							0x0000069A		// 거부 대상자
#define LSID_AUTO001583							0x0000069B		// 기타옵션
#define LSID_AUTO001584							0x0000069C		// 로그아웃
#define LSID_AUTO001585							0x0000069D		// 게임종료
#define LSID_AUTO001586							0x0000069E		// 시야거리
#define LSID_AUTO001587							0x0000069F		// 자동 부활(단위:분)
#define LSID_AUTO001588							0x000006A0		// 카메라 설정
#define LSID_AUTO001589							0x000006A1		// 시점 전환
#define LSID_AUTO001590							0x000006A2		// 윈도우
#define LSID_AUTO001591							0x000006A3		// 액션
#define LSID_AUTO001592							0x000006A4		// 채팅
#define LSID_AUTO001593							0x000006A5		// 미니맵
#define LSID_AUTO001594							0x000006A6		// 버디
#define LSID_AUTO001595							0x000006A7		// 인터페이스 숨기기
#define LSID_AUTO001596							0x000006A8		// 설정
#define LSID_AUTO001597							0x000006A9		// 공격모드
#define LSID_AUTO001598							0x000006AA		// 자동공격
#define LSID_AUTO001599							0x000006AB		// 아이템 루팅
#define LSID_AUTO001600							0x000006AC		// 앞으로 이동
#define LSID_AUTO001601							0x000006AD		// 뒤로 이동
#define LSID_AUTO001602							0x000006AE		// 왼쪽으로 이동
#define LSID_AUTO001603							0x000006AF		// 오른쪽으로 이동
#define LSID_AUTO001604							0x000006B0		// 소환수 타켓명령
#define LSID_AUTO001605							0x000006B1		// 소환수 공격명령
#define LSID_AUTO001606							0x000006B2		// 소환수 이동명령
#define LSID_AUTO001607							0x000006B3		// 위성모드 전환
#define LSID_AUTO001608							0x000006B4		// 대화목록 호출
#define LSID_AUTO001609							0x000006B5		// 귓속말 대상 호출
#define LSID_AUTO001610							0x000006B6		// 사용할수 없는 키입니다
#define LSID_AUTO001611							0x000006B7		// 이미 [%s] 단축키로 사용하고 있습니다.<br>변경하겠습니까?
#define LSID_AUTO001612							0x000006B8		// 게임
#define LSID_AUTO001613							0x000006B9		// 그래픽/사운드
#define LSID_AUTO001614							0x000006BA		// 단축키
#define LSID_AUTO001615							0x000006BB		// 저 장
#define LSID_AUTO001616							0x000006BC		// 초기설정
#define LSID_AUTO001617							0x000006BD		// 맵 데이타가 손상되었습니다. 프로그램을 종료합니다.
#define LSID_AUTO001618							0x000006BE		//  월드 서버 접속에 실패하였습니다. ( %d )
#define LSID_AUTO001619							0x000006BF		// 아바타가 비정상적인 지역에 위치하고 있습니다.
#define LSID_AUTO001620							0x000006C0		// 이동속도 %s
#define LSID_AUTO001621							0x000006C1		// 현재 길드 순위 및 길드 내 구성원 순위에 대한 재정산 시간이므로, 길드 활동을 할수 없습니다. 0:00시 이후 다시 시도해주십시오.
#define LSID_AUTO001622							0x000006C2		// IP개수가 초과되어 %s요금제로 변경 되었습니다.
#define LSID_AUTO001623							0x000006C3		// 현재 생성 불가능한 종족입니다.
#define LSID_AUTO001624							0x000006C4		// 시즈킷(런쳐)
#define LSID_AUTO001625							0x000006C5		// 시즈킷(화염)
#define LSID_AUTO001626							0x000006C6		// 시즈킷(파우)
#define LSID_AUTO001627							0x000006C7		// 투척기
#define LSID_AUTO001628							0x000006C8		// 해독력
#define LSID_AUTO001629							0x000006C9		// 이벤트 아이템
#define LSID_AUTO001630							0x000006CA		// 무료 체험 계정은 자원맵으로 이동할 수 없습니다.
#define LSID_AUTO001631							0x000006CB		// 보상 - 골드 : %d
#define LSID_AUTO001632							0x000006CC		// 보상 - 경험치 : %d
#define LSID_AUTO001633							0x000006CD		// [ 아이템 등록 실패 ]
#define LSID_AUTO001634							0x000006CE		// 아이템의 조정 가격을 입력하세요.
#define LSID_AUTO001635							0x000006CF		// 이미 등록된 가격과 같습니다.
#define LSID_AUTO001636							0x000006D0		// [ 아이템 가격 조정 ]<br>
#define LSID_AUTO001637							0x000006D1		// %s<br>%s ( %d개 )<br><br>%s %s => %s %s<br><br>
#define LSID_AUTO001638							0x000006D2		// 자신이 올린 아이템이므로 거래할 수 없습니다.
#define LSID_AUTO001639							0x000006D3		// 가격조정
#define LSID_AUTO001640							0x000006D4		// 이미 팔림
#define LSID_AUTO001641							0x000006D5		// 인벤토리 공간부족
#define LSID_AUTO001642							0x000006D6		// 돈 부족
#define LSID_AUTO001643							0x000006D7		// 상대방이 거래할수 없는 상태
#define LSID_AUTO001644							0x000006D8		// 기타문제
#define LSID_AUTO001645							0x000006D9		// %s<br>[ 아이템 구입 실패 ]<br>
#define LSID_AUTO001646							0x000006DA		// %s%d . %s ( %d개 ) - %s<br>
#define LSID_AUTO001647							0x000006DB		// 무료 체험 계정으로는 길드를 창설할수 없습니다.
#define LSID_AUTO001648							0x000006DC		// 무료 체험 계정으로는 길드에 가입할수 없습니다.
#define LSID_AUTO001649							0x000006DD		// 수송선 출발 10분전 입니다. 탑승하실 분들은 서둘러 주시기 바랍니다.
#define LSID_AUTO001650							0x000006DE		// 해당 페이지에 아이템이 없습니다.
#define LSID_AUTO001651							0x000006DF		// 무료체험
#define LSID_AUTO001652							0x000006E0		// 경제지표 변동
#define LSID_AUTO001653							0x000006E1		// 세율 및 환율
#define LSID_AUTO001654							0x000006E2		// 가격수정
#define LSID_AUTO001655							0x000006E3		// 가격을 조정하려면 여기를 클릭해주세요.
#define LSID_AUTO001656							0x000006E4		// 업그레이드 정보
#define LSID_AUTO001657							0x000006E5		// 운항 정보
#define LSID_AUTO001658							0x000006E6		// 회피 %s
#define LSID_AUTO001659							0x000006E7		// FP 회복량 %s
#define LSID_AUTO001660							0x000006E8		// HP 회복량 %s
#define LSID_AUTO001661							0x000006E9		// 여객선이 아직 도착하지 않았습니다.
#define LSID_AUTO001662							0x000006EA		// 이륙 준비 중에는 탑승할 수 없습니다.
#define LSID_AUTO001663							0x000006EB		// 목적지의 여객선 티켓을 가지고 있지 않습니다.
#define LSID_AUTO001664							0x000006EC		// 여객선 운행 중에는 승/하선을 할 수 없습니다.
#define LSID_AUTO001665							0x000006ED		// 여객선이 목적지에 도착하지 않았습니다.
#define LSID_AUTO001666							0x000006EE		// 컨세션 발동 : Attacker - %s
#define LSID_AUTO001667							0x000006EF		// 디지 발동 : Victim - %s
#define LSID_AUTO001668							0x000006F0		// 여객선 내부에서는 기갑장비를 입/출고할 수 없습니다.
#define LSID_AUTO001669							0x000006F1		// 여객선 내부에서는 귀환 아이템을 사용할 수 없습니다.
#define LSID_AUTO001670							0x000006F2		// 이더에서는 전용 귀환아이템만을 사용하실 수 있습니다.
#define LSID_AUTO001671							0x000006F3		// 여객선 내부에서는 배틀던젼 아이템을 사용할 수 없습니다.
#define LSID_AUTO001672							0x000006F4		// 창고 관련: 창고 개설시 %s %s가 필요합니다.
#define LSID_AUTO001673							0x000006F5		// 창고 확장시 %s %s가 필요합니다.<br>창고를 확장하시겠습니까?
#define LSID_AUTO001674							0x000006F6		// 단축 아이템은 보관할수 없습니다.
#define LSID_AUTO001675							0x000006F7		// 무료 체험 계정은 채굴을 하실 수 없습니다.
#define LSID_AUTO001676							0x000006F8		// %s 아이템은 %d레벨 이상의 플레이어만이 구입할 수 있습니다.
#define LSID_AUTO001677							0x000006F9		// %s 아이템이 매진되어 다음 재발매 시간 이후 구매 가능합니다.
#define LSID_AUTO001678							0x000006FA		// %s 아이템은 한번에 한개씩만 구입할 수 있습니다.
#define LSID_AUTO001679							0x000006FB		// 여객선 내부에서는 기갑장비를 출고할 수 없습니다.
#define LSID_AUTO001680							0x000006FC		// 여객선 내부에서는 기갑장비를 입고할 수 없습니다.
#define LSID_AUTO001681							0x000006FD		// 이더
#define LSID_AUTO001682							0x000006FE		// 여객선
#define LSID_AUTO001683							0x000006FF		// 노멀
#define LSID_AUTO001684							0x00000700		// 에이스
#define LSID_AUTO001685							0x00000701		// 핏보스
#define LSID_AUTO001686							0x00000702		// 포탈 이동 실패 : 현재 맵이동 중 입니다.
#define LSID_AUTO001687							0x00000703		// 포탈 이동 실패 : 거래중에는 맵이동을 할 수 없습니다.
#define LSID_AUTO001688							0x00000704		// 포탈 이동 실패 : 앉아있는 중에는 맵이동을 할 수 없습니다.
#define LSID_AUTO001689							0x00000705		// 포탈 이동 실패 : 시즈모드 상태에서는 맵이동을 할 수 없습니다.
#define LSID_AUTO001690							0x00000706		// 포탈 이동 실패 : 포탈 인덱스가 잘못 되었습니다.
#define LSID_AUTO001691							0x00000707		// 포탈 이동 실패 : 포탈을 사용할 수 없는 종족입니다.
#define LSID_AUTO001692							0x00000708		// 포탈 이동 실패 : 포탈 범위를 벗어났습니다.
#define LSID_AUTO001693							0x00000709		// 포탈 이동 실패 : 포탈 데이타 오류
#define LSID_AUTO001694							0x0000070A		// 여객선 관련 : 여객선 운행 중에는 승/하선을 할 수 없습니다.
#define LSID_AUTO001695							0x0000070B		// 여객선 관련 : 이륙 준비 상태에는 승선 할 수 없습니다.
#define LSID_AUTO001696							0x0000070C		// 여객선 관련 : 여객선이 목적지에 도착하지 않았습니다.
#define LSID_AUTO001697							0x0000070D		// 여객선 관련 : 목적지의 여객선 티켓을 가지고 있지 않습니다.
#define LSID_AUTO001698							0x0000070E		// 여객선 관련 : 여객선 이용은 35레벨 이상의 플레이어만이 가능합니다.
#define LSID_AUTO001699							0x0000070F		// 포탈 이동 실패 : 포탈 이동이 불가능한 계정입니다.
#define LSID_AUTO001700							0x00000710		// 포탈 이동 실패 : 알 수 없는 에러 ( %d )
#define LSID_AUTO001701							0x00000711		// 점령지구
#define LSID_AUTO001702							0x00000712		// 잠시 후 %s행 여객선이 이륙할 예정입니다.
#define LSID_AUTO001703							0x00000713		// 여객선이 %s 선착장에 도착하였습니다. 여객선의 정비가 필요하므로 %s 선착장으로 돌아가실 분들은 잠시 후 다시 탑승해 주시기 바랍니다.
#define LSID_AUTO001704							0x00000714		// %s 선착장에 %s행 여객선이 도착하여, 현재 이륙 준비 중입니다.
#define LSID_AUTO001705							0x00000715		// 여객선이 %s 선착장을 출발하여 %s 방향으로 운행을 시작하였습니다.
#define LSID_AUTO001706							0x00000716		// 여객선이 %s 선착장을 출발하여 %s 방향으로 운행 중입니다.
#define LSID_AUTO001707							0x00000717		// 여객선 이륙 준비를 위해 잠시 선착장으로 이동하였습니다. %s행 여객선을 이용하실 분들은 다시 탑승하시기 바랍니다.
#define LSID_AUTO001708							0x00000718		// %s행 여객선 티켓을 사용하였습니다.
#define LSID_AUTO001709							0x00000719		// %s행 여객선 티켓이 없어 선착장으로 이동하였습니다.
#define LSID_AUTO001710							0x0000071A		// 창고 관련: 암호 변경이 승인되었습니다.
#define LSID_AUTO001711							0x0000071B		// 창고 관련: 암호가 틀립니다.
#define LSID_AUTO001712							0x0000071C		// 창고 관련: 창고가 없습니다.
#define LSID_AUTO001713							0x0000071D		// 창고 관련: 암호의 길이가 적절하지 않습니다.
#define LSID_AUTO001714							0x0000071E		// 창고 관련: 공간이 너무 큽니다.
#define LSID_AUTO001715							0x0000071F		// 창고 관련: 창고가 이미 개설되어 있습니다.
#define LSID_AUTO001716							0x00000720		// 창고 관련: 금액이 부족합니다.
#define LSID_AUTO001717							0x00000721		// 창고 관련: 개수가 틀립니다.
#define LSID_AUTO001718							0x00000722		// 창고 관련: 잘못된 위치입니다.
#define LSID_AUTO001719							0x00000723		// 창고 관련: 잘못된 아이템입니다.
#define LSID_AUTO001720							0x00000724		// 창고 관련: 거래중인 아이템입니다.
#define LSID_AUTO001721							0x00000725		// 창고 관련: 합칠수 없는 아이템입니다.
#define LSID_AUTO001722							0x00000726		// 창고 관련: 서로 다른 아이템입니다.
#define LSID_AUTO001723							0x00000727		// 창고 관련: 창고가 열려있지 않습니다.
#define LSID_AUTO001724							0x00000728		// 창고 관련 : 알 수 없는 에러 ( %d )
#define LSID_AUTO001725							0x00000729		// 티켓
#define LSID_AUTO001726							0x0000072A		// 남은 수량
#define LSID_AUTO001727							0x0000072B		// %s장
#define LSID_AUTO001728							0x0000072C		// 목적지
#define LSID_AUTO001729							0x0000072D		// 창고 개설
#define LSID_AUTO001730							0x0000072E		// 탑승
#define LSID_AUTO001731							0x0000072F		// 창고 사용
#define LSID_AUTO001732							0x00000730		// 비밀번호 입력
#define LSID_AUTO001733							0x00000731		// 비밀번호 확인
#define LSID_AUTO001734							0x00000732		// 영어,숫자,영어+숫자 조합 12자 이내
#define LSID_AUTO001735							0x00000733		// 창고명 및 비밀번호 설정
#define LSID_AUTO001736							0x00000734		// 창고이름 입력
#define LSID_AUTO001737							0x00000735		// 한글 6자 또는 영어,숫자 12자 이내
#define LSID_AUTO001738							0x00000736		// 키 카드 및 비밀번호 설정
#define LSID_AUTO001739							0x00000737		// 키 카드 수
#define LSID_AUTO001740							0x00000738		// 키 카드 수만큼 공유 가능
#define LSID_AUTO001741							0x00000739		// 비밀번호 설정
#define LSID_AUTO001742							0x0000073A		// 비밀번호 힌트 설정
#define LSID_AUTO001743							0x0000073B		// 힌트설정
#define LSID_AUTO001744							0x0000073C		// 정답입력
#define LSID_AUTO001745							0x0000073D		// 비밀번호 분실시 필요합니다.
#define LSID_AUTO001746							0x0000073E		// 창고개설비용
#define LSID_AUTO001747							0x0000073F		// 입력하신 두개의 비밀번호가 일치하지 않습니다.
#define LSID_AUTO001748							0x00000740		// 로그인
#define LSID_AUTO001749							0x00000741		// 일반 공유 창고는 창고 이름과 비밀번호만으로 유저들과 물품을 공유할 수 있는 창고입니다.<br><br>창고에 로그인을 하는 개념이라 이해하시면 되며 로그인을 하는 모든 유저들이 창고물품을 이용할 수 있으므로 저장할 물품 및 공유할 유저에 각별히 주의하시기 바랍니다.
#define LSID_AUTO001750							0x00000742		// 제한 공유 창고는 창고개설자가 제공한 키 카드를 소유한 유저만이 공유할 수 있는 창고입니다.<br><br>일반 공유 창고보다는 이용에 제한적이며 키 카드를 아래 로그인란에 드래그해서 올려놓고 비밀 번호를 입력하면 이용할 수 있습니다.
#define LSID_AUTO001751							0x00000743		// 개인 창고는 다른 유저들과 공유하는 공유창고와는 달리 창고 개설자 본인만이 이용하는 창고입니다.<br><br>창고 개설 시 설정한 비밀번호만으로 로그인하실 수 있습니다.
#define LSID_AUTO001752							0x00000744		// 비밀번호분실
#define LSID_AUTO001753							0x00000745		// 비밀번호 분실 확인
#define LSID_AUTO001754							0x00000746		// 힌트
#define LSID_AUTO001755							0x00000747		// 창고 비밀번호
#define LSID_AUTO001756							0x00000748		// 돌아가기
#define LSID_AUTO001757							0x00000749		// 입력하셨던 힌트의 정답과 일치하지 않습니다.<br>다시 입력해주세요.
#define LSID_AUTO001758							0x0000074A		// 사용내역 조회
#define LSID_AUTO001759							0x0000074B		// 비밀번호 변경
#define LSID_AUTO001760							0x0000074C		// 창고 확장
#define LSID_AUTO001761							0x0000074D		// 창고 폐쇄
#define LSID_AUTO001762							0x0000074E		// 입금할 금액을 입력하세요.
#define LSID_AUTO001763							0x0000074F		// 입금할 골드를 입력하세요.
#define LSID_AUTO001764							0x00000750		// 출금할 금액을 입력하세요.
#define LSID_AUTO001765							0x00000751		// 출금할 골드를 입력하세요.
#define LSID_AUTO001766							0x00000752		// 일시
#define LSID_AUTO001767							0x00000753		// 사용자
#define LSID_AUTO001768							0x00000754		// 이전 비밀번호 입력
#define LSID_AUTO001769							0x00000755		// 비밀번호 재설정
#define LSID_AUTO001770							0x00000756		// 일반공유
#define LSID_AUTO001771							0x00000757		// 제한공유
#define LSID_AUTO001772							0x00000758		// 개 인
#define LSID_AUTO001773							0x00000759		// 클라이언트 시간 %2d /%2d /%2d <br>
#define LSID_AUTO001774							0x0000075A		//        서버시간 %2d /%2d /%2d <br>
#define LSID_AUTO001775							0x0000075B		// 스턴 중에는 포션을 사용하실 수 없습니다.
#define LSID_AUTO001776							0x0000075C		// 무인상점에 등록된 아이템은 장착할 수 없습니다.
#define LSID_AUTO001777							0x0000075D		// 무인상점에 등록된 아이템은 사용할 수 없습니다.
#define LSID_AUTO001778							0x0000075E		// 나의 보물 1호
#define LSID_AUTO001779							0x0000075F		// 좋아하는 장소
#define LSID_AUTO001780							0x00000760		// 좋아하는 꽃
#define LSID_AUTO001781							0x00000761		// 좋아하는 행성
#define LSID_AUTO001782							0x00000762		// 창고 확장시 %s %s가 필요합니다.
#define LSID_AUTO001783							0x00000763		// 무인판매기에 등록한 아이템이 판매되었습니다. 확인하시겠습니까?
#define LSID_AUTO001784							0x00000764		// [%s]의 판매가 완료되어<br> 수수료 %s %s를 제외한<br> %s %s가<br>인벤토리에 들어왔습니다.
#define LSID_AUTO001785							0x00000765		// 무인상점에 등록된 아이템은 판매할 수 없습니다.
#define LSID_AUTO001786							0x00000766		// 배낭에 있는 아이템만 등록할 수 있습니다.
#define LSID_AUTO001787							0x00000767		// 더 이상 등록할 수 없습니다.
#define LSID_AUTO001788							0x00000768		// 아이템 등록비가 부족합니다.
#define LSID_AUTO001789							0x00000769		// 등록할 수 없는 아이템입니다.
#define LSID_AUTO001790							0x0000076A		// 잔량이 %d개인 것만 등록할 수 있습니다.
#define LSID_AUTO001791							0x0000076B		// 빈공간이 없으므로 나누어서 등록할 수 없습니다.
#define LSID_AUTO001792							0x0000076C		// 거래비용이 모자랍니다.
#define LSID_AUTO001793							0x0000076D		// [ 아이템 구입 성공 ]<br><br>
#define LSID_AUTO001794							0x0000076E		// %s[ 아이템 구입 실패 ]<br><br>
#define LSID_AUTO001795							0x0000076F		// 창고 관련: 힌트에 대한 답이 틀렸습니다.
#define LSID_AUTO001796							0x00000770		// 창고 관련: 수수료가 부족합니다.
#define LSID_AUTO001797							0x00000771		// 아이템 등록 실패 : %d
#define LSID_AUTO001798							0x00000772		// 아이템 삭제 실패 : %d
#define LSID_AUTO001799							0x00000773		// 아이템 가격 수정 실패 : %d
#define LSID_AUTO001800							0x00000774		// 페이지 요청 실패 : %d
#define LSID_AUTO001801							0x00000775		// 아이템 구입 실패 : %d
#define LSID_AUTO001802							0x00000776		// [아이템 재등록 결과]<br><br>
#define LSID_AUTO001803							0x00000777		// %s%d. %s %d개
#define LSID_AUTO001804							0x00000778		// %s ( 등록 )<br>
#define LSID_AUTO001805							0x00000779		// %s ( 등록 취소 )<br>
#define LSID_AUTO001806							0x0000077A		// %s ( 등록 실패 : 리스트 꽉참 )<br>
#define LSID_AUTO001807							0x0000077B		// %s ( 등록 실패 : 아이템에 변동이 생김 )<br>
#define LSID_AUTO001808							0x0000077C		// %s<br>등록 실패로 %s %s를 돌려드립니다.
#define LSID_AUTO001809							0x0000077D		// 보관
#define LSID_AUTO001810							0x0000077E		// 아이템 등록
#define LSID_AUTO001811							0x0000077F		// 아이템 구입
#define LSID_AUTO001812							0x00000780		// 영어+숫자 조합 4자 이상 12자 이내
#define LSID_AUTO001813							0x00000781		// 최소 수수료 %s %s가 필요합니다.
#define LSID_AUTO001814							0x00000782		// 무인판매 재등록
#define LSID_AUTO001815							0x00000783		// 재등록할 아이템을 선택한 후 확인버튼을 눌러주세요. 재등록비는 없습니다.
#define LSID_AUTO001816							0x00000784		// 전체선택
#define LSID_AUTO001817							0x00000785		// 황금
#define LSID_AUTO001818							0x00000786		// 제이드
#define LSID_AUTO001819							0x00000787		// 보석류
#define LSID_AUTO001820							0x00000788		// 가공자원
#define LSID_AUTO001821							0x00000789		// 파이어암
#define LSID_AUTO001822							0x0000078A		// 로켓
#define LSID_AUTO001823							0x0000078B		// 애니머스
#define LSID_AUTO001824							0x0000078C		// 저급
#define LSID_AUTO001825							0x0000078D		// 중급
#define LSID_AUTO001826							0x0000078E		// 고급
#define LSID_AUTO001827							0x0000078F		// [총 구입비용 : %s]
#define LSID_AUTO001828							0x00000790		// %s 숙련도 %2d/%2d Pt
#define LSID_AUTO001829							0x00000791		// 올바른 대상이 아닙니다.
#define LSID_AUTO001830							0x00000792		// 현재는 각 종족 베이스와 자원맵만을 이동하실 수 있습니다.
#define LSID_AUTO001831							0x00000793		// 족장령
#define LSID_AUTO001832							0x00000794		// 족장령 관련 : 최대 사용 글자수를 초과하였습니다. 한글 기준으로 띄어쓰기 포함 최대 24자 이내로 작성해주세요.
#define LSID_AUTO001833							0x00000795		// 족장령 관련 : 족장 이외에는 사용할 수 없습니다.
#define LSID_AUTO001834							0x00000796		// 존경하는 인물
#define LSID_AUTO001835							0x00000797		// 좋아하는 색
#define LSID_AUTO001836							0x00000798		// 나의 좌우명
#define LSID_AUTO001837							0x00000799		// 나의 출생지
#define LSID_AUTO001838							0x0000079A		// 무인상점에 등록된 아이템은 보관할 수 없습니다.
#define LSID_AUTO001839							0x0000079B		// 창고에 보관할수 없는 아이템입니다.
#define LSID_AUTO001840							0x0000079C		// 무인상점에 등록된 아이템은 버릴 수 없습니다.
#define LSID_AUTO001841							0x0000079D		// 무인상점에 등록된 아이템은 거래할 수 없습니다.
#define LSID_AUTO001842							0x0000079E		// 현재 %s 아이템은 구입할 수 없습니다.
#define LSID_AUTO001843							0x0000079F		// 재등록 확인 후 사용할 수 있습니다.
#define LSID_AUTO001844							0x000007A0		// 사용할 수 없는 캐릭터 이름입니다. 새로운 캐릭터 이름을 입력해 주세요.
#define LSID_AUTO001845							0x000007A1		// 워리어
#define LSID_AUTO001846							0x000007A2		// 레인저
#define LSID_AUTO001847							0x000007A3		// 스피리츄어리스트
#define LSID_AUTO001848							0x000007A4		// 스페셜리스트
#define LSID_AUTO001849							0x000007A5		// 빈 슬롯이 없습니다.
#define LSID_AUTO001850							0x000007A6		// 빈 슬롯으로 이동 후 복구를 시도해 주십시오.
#define LSID_AUTO001851							0x000007A7		// 캐릭터 복구 성공.
#define LSID_AUTO001852							0x000007A8		// 이미 복구된 캐릭터입니다.
#define LSID_AUTO001853							0x000007A9		// 이름에 특수문자가 있습니다.
#define LSID_AUTO001854							0x000007AA		// 합류하려는 파티와 레벨대가 맞지 않아 파티 가입 요청이 실패하였습니다.
#define LSID_AUTO001855							0x000007AB		// [ 수수료 내역 ]<br><br>%9s %s
#define LSID_AUTO001856							0x000007AC		// 창고 관련: 다른 종족의 아이템 입니다.
#define LSID_AUTO001857							0x000007AD		// 창고 관련: 보관할수 없는 아이템입니다.
#define LSID_AUTO001858							0x000007AE		// %s %s %d개
#define LSID_AUTO001859							0x000007AF		// %s ( 등록 성공 )<br>
#define LSID_AUTO001860							0x000007B0		// %s ( 등록 취소 성공 )<br>
#define LSID_AUTO001861							0x000007B1		// 기갑 장비 관련 : 사용 가능한 발사물이 없습니다.
#define LSID_AUTO001862							0x000007B2		// 기갑 장비 관련 : 사용할 수 없는 발사물입니다.
#define LSID_AUTO001863							0x000007B3		// 족장령 관련 : 요청하신 족장령이 승인되었습니다. 5분 후 발송됩니다.
#define LSID_AUTO001864							0x000007B4		// 족장령 관련 : 요청하신 족장령이 비승인되었습니다. 유해한 내용이 포함된 것은 아닌지 확인하신후 다시 시도해주십시오.
#define LSID_AUTO001865							0x000007B5		// 족장령 관련 : 요청하신 족장령이 발송되었습니다. 오늘 남은 횟수는 %d 번 입니다.
#define LSID_AUTO001866							0x000007B6		// 족장령 관련 : 요청하신 족장령이 발송되었습니다. 오늘 남은 횟수가 없습니다.
#define LSID_AUTO001867							0x000007B7		// 족장령 관련 : %s(ID:%d) 족장전령 취소 성공.
#define LSID_AUTO001868							0x000007B8		// 족장령 관련 : 잘못된 요청입니다.
#define LSID_AUTO001869							0x000007B9		// 족장령 관련 : 하루 중 이용 가능한 족장령 횟수를 모두 사용하셨습니다.
#define LSID_AUTO001870							0x000007BA		// SMS 관련 : 알 수 없는 에러( %d )
#define LSID_AUTO001871							0x000007BB		// 서버
#define LSID_AUTO001872							0x000007BC		// 이름
#define LSID_AUTO001873							0x000007BD		// 클래스
#define LSID_AUTO001874							0x000007BE		// 서버 통합
#define LSID_AUTO001875							0x000007BF		// 캐릭터 세부정보
#define LSID_AUTO001876							0x000007C0		// 원하는 캐릭터를 복원하기 위해서는 확인버튼을 클릭하면 됩니다.<br><br>
#define LSID_AUTO001877							0x000007C1		// 복원한 후에는 다시 되돌릴 수 없으니 
#define LSID_AUTO001878							0x000007C2		// 신중하게 선택해주시길 바랍니다.<br><br>
#define LSID_AUTO001879							0x000007C3		// 빈 슬롯이 있을 경우에는 선택하지 않은 다른 캐릭터를 복원할 수 있습니다.
#define LSID_AUTO001880							0x000007C4		// %s가 %d 상승하였습니다.
#define LSID_AUTO001881							0x000007C5		// 수송선이 출발하기 전에 목적지 티켓은 거래할 수 없습니다.
#define LSID_AUTO001882							0x000007C6		// 공격
#define LSID_AUTO001883							0x000007C7		// %s 관련 : %s
#define LSID_AUTO001884							0x000007C8		// 포스리버 아이템을 가지고 있지 않습니다.
#define LSID_AUTO001885							0x000007C9		// 대상이 존재하지 않습니다.
#define LSID_AUTO001886							0x000007CA		// 시전을 위한 숙련도가 부족합니다.
#define LSID_AUTO001887							0x000007CB		// 사용 가능 종족이 아닙니다.
#define LSID_AUTO001888							0x000007CC		// 대상이 올바르지 않습니다.
#define LSID_AUTO001889							0x000007CD		// 시전을 위한 FP가 부족합니다.
#define LSID_AUTO001890							0x000007CE		// 효과 제한으로 인해 시전 불가능한 상태입니다.
#define LSID_AUTO001891							0x000007CF		// 데이타가 일치하지 않습니다.
#define LSID_AUTO001892							0x000007D0		// 현재 사용 준비상태 입니다. 잠시 후 다시 시도해 주십시오.
#define LSID_AUTO001893							0x000007D1		// 대상이 지속형 피해 보조 효과가 적용될 수 없는 상태입니다.
#define LSID_AUTO001894							0x000007D2		// 이미 보다 강한 효과가 적용되어 있습니다.
#define LSID_AUTO001895							0x000007D3		// 이전 효과의 남은 시간이 10% 이하일 경우에만 재사용이 가능합니다.
#define LSID_AUTO001896							0x000007D4		// 현재 대상에 시전이 불가능합니다.
#define LSID_AUTO001897							0x000007D5		// 기갑 장비 탑승상태에서는 시전이 불가능합니다.
#define LSID_AUTO001898							0x000007D6		// 시전이 불가능한 클래스 입니다.
#define LSID_AUTO001899							0x000007D7		// 포스리버가 현재 사용할 수 없는 상태입니다.
#define LSID_AUTO001900							0x000007D8		// 마을내에서는 피해형 효과를 사용할 수 없습니다.
#define LSID_AUTO001901							0x000007D9		// 사용 가능한 발사물이 없습니다.
#define LSID_AUTO001902							0x000007DA		// 발사물이 현재 사용할 수 없는 상태입니다.
#define LSID_AUTO001903							0x000007DB		// %s 관련 : %s (%d)
#define LSID_AUTO001904							0x000007DC		// 실패하였습니다.
#define LSID_AUTO001905							0x000007DD		// 자원확보전쟁 결과로 %d PvP 캐쉬포인트를 지급받았습니다.
#define LSID_AUTO001906							0x000007DE		// 족장령 관련 : 요청하신 족장령이 거부되었습니다. 유해한 내용이 포함된 것은 아닌지 확인해 보십시오.
#define LSID_AUTO001907							0x000007DF		// 근거리
#define LSID_AUTO001908							0x000007E0		// 다크/홀리
#define LSID_AUTO001909							0x000007E1		// 어스
#define LSID_AUTO001910							0x000007E2		// 에어
#define LSID_AUTO001911							0x000007E3		// %s %s 숙련도
#define LSID_AUTO001912							0x000007E4		// 아이템 등록비는 %s %s입니다.
#define LSID_AUTO001913							0x000007E5		// 키보드 모드로 전환합니다.
#define LSID_AUTO001914							0x000007E6		// 마우스 모드로 전환합니다.
#define LSID_AUTO001915							0x000007E7		// 확대 : 마우스 왼쪽 버튼
#define LSID_AUTO001916							0x000007E8		// 축소 : 마우스 오른쪽 버튼
#define LSID_AUTO001917							0x000007E9		// 방어 게이지:
#define LSID_AUTO001918							0x000007EA		// 알림
#define LSID_AUTO001919							0x000007EB		// 현재 선택한 시즈 스킬은 현재 장착중인 시즈킷과 함께 사용할 수 없습니다.
#define LSID_AUTO001920							0x000007EC		// 대상이 시야에서 벗어나 시전할 수 없습니다.
#define LSID_AUTO001921							0x000007ED		// 명중률 %s
#define LSID_AUTO001922							0x000007EE		// 런쳐 공격 딜레이 %s(초)
#define LSID_AUTO001923							0x000007EF		// 포스 시전 거리 %s
#define LSID_AUTO001924							0x000007F0		// 크리티컬 공격 받을 확률 %s
#define LSID_AUTO001925							0x000007F1		// %s님이 소환을 요청하였습니다. 허락하시겠습니까?
#define LSID_AUTO001926							0x000007F2		// %s : 다음 레벨이 되기 위한 경험치의 
#define LSID_AUTO001927							0x000007F3		// 소환할 대상이 잘못 되었습니다.
#define LSID_AUTO001928							0x000007F4		// 대상이 소환을 거부 하였습니다.
#define LSID_AUTO001929							0x000007F5		// 소환 제한 시간을 초과하였습니다.
#define LSID_AUTO001930							0x000007F6		// 소환 관련 에러 (%d)
#define LSID_AUTO001931							0x000007F7		// 소환할 장소가 올바르지 않습니다.
#define LSID_AUTO001932							0x000007F8		// 소환을 할 수 업는 상태입니다.
#define LSID_AUTO001933							0x000007F9		// 필요 HP
#define LSID_AUTO001934							0x000007FA		// 필요 FP
#define LSID_AUTO001935							0x000007FB		// 필요 SP
#define LSID_AUTO001936							0x000007FC		// 대상이 회피하였습니다.
#define LSID_AUTO001937							0x000007FD		// %d분
#define LSID_AUTO001938							0x000007FE		// %s%d초
#define LSID_AUTO001939							0x000007FF		// 인스턴스 오더
#define LSID_AUTO001940							0x00000800		// 스페셜 오더
#define LSID_AUTO001941							0x00000801		// 퀘스트북
#define LSID_AUTO001942							0x00000802		// 진행 정보
#define LSID_AUTO001943							0x00000803		// 은신 상태에서는 해당 스킬/포스를 시전할 수 없습니다.
#define LSID_AUTO001944							0x00000804		// 방패 방어 성공 확률 %s
#define LSID_AUTO001945							0x00000805		// 맵채팅
#define LSID_AUTO001946							0x00000806		// 현재 맵채팅에 참여하고 있습니다.
#define LSID_AUTO001947							0x00000807		// 현재 맵채팅에 참여하고 있지 않습니다.
#define LSID_AUTO001948							0x00000808		// 지금부터 맵채팅에 참여합니다.
#define LSID_AUTO001949							0x00000809		// 지금부터 맵채팅에 참여하지 않습니다.
#define LSID_AUTO001950							0x0000080A		// 잘못된 명령입니다.
#define LSID_AUTO001951							0x0000080B		// 족장
#define LSID_AUTO001952							0x0000080C		// 종족장이나 부종족장이 아닙니다.
#define LSID_AUTO001953							0x0000080D		// 위원
#define LSID_AUTO001954							0x0000080E		// 길드에 가입하고 있지 않습니다.
#define LSID_AUTO001955							0x0000080F		// 창설자나 위원이 아닙니다.
#define LSID_AUTO001956							0x00000810		// ABCD 가나다라 0123 @#$&
#define LSID_AUTO001957							0x00000811		// 클래스 리파인을 하였습니다.
#define LSID_AUTO001958							0x00000812		// 서버가 혼잡한 상태입니다.
#define LSID_AUTO001959							0x00000813		// 클래스 리파인을 할 수 있는 계급이 아닙니다.
#define LSID_AUTO001960							0x00000814		// 돈이 부족합니다.
#define LSID_AUTO001961							0x00000815		// 정의되지 않은 에러입니다.
#define LSID_AUTO001962							0x00000816		// 정말 클래스 리파인을 하시겠습니까?
#define LSID_AUTO001963							0x00000817		// 자폭 대기 상태입니다.
#define LSID_AUTO001964							0x00000818		// %s : 무료 체험 시간이 %d분 남았으며 %d년 %d월 %d일(사용가능 기간) 까지 사용 가능합니다.
#define LSID_AUTO001965							0x00000819		// [%d]출발시간[%d 시] 출발시간[%d 분] Sub1[%d] Sub2[%d]<br>
#define LSID_AUTO001966							0x0000081A		// 방어 간격
#define LSID_AUTO001967							0x0000081B		// 상대 방어
#define LSID_AUTO001968							0x0000081C		// 평균 방어 간격:
#define LSID_AUTO001969							0x0000081D		// 평균 상대 방어:
#define LSID_AUTO001970							0x0000081E		// 방어 성공 확률:
#define LSID_AUTO001971							0x0000081F		// 英文
#define LSID_AUTO001972							0x00000820		// %s [완료]
#define LSID_AUTO001973							0x00000821		// 아이템을 모아라.[%d]
#define LSID_AUTO001974							0x00000822		// 모든 몬스터를 제거하라. [%d]
#define LSID_AUTO001975							0x00000823		// 아이템을 모아라.
#define LSID_AUTO001976							0x00000824		// 아이템을 %d개 모아라.
#define LSID_AUTO001977							0x00000825		// %s를 %d개 모아라.
#define LSID_AUTO001978							0x00000826		// 몬스터를 제거하라.
#define LSID_AUTO001979							0x00000827		// 몬스터를 %d마리 제거하라.
#define LSID_AUTO001980							0x00000828		// %s(을/를) 제거하라.
#define LSID_AUTO001981							0x00000829		// 미션 설명 없음.
#define LSID_AUTO001982							0x0000082A		// 명중 %d 증가
#define LSID_AUTO001983							0x0000082B		// 포탈이 아직 열리지 않았습니다.
#define LSID_AUTO001984							0x0000082C		// [ 아이템 구입 최종 확인 ]<br><br>
#define LSID_AUTO001985							0x0000082D		// %s%d. %s ( %d개 ) : %s %s<br>
#define LSID_AUTO001986							0x0000082E		// %s<br>%s : %s %s<br><br>위 아이템을 구입하시겠습니까?
#define LSID_AUTO001987							0x0000082F		// %s<br>총 금액 : 
#define LSID_AUTO001988							0x00000830		// 스킬/포스 남은 준비 시간을 무시 시작
#define LSID_AUTO001989							0x00000831		// 스킬/포스 남은 준비 시간을 무시 종료.
#define LSID_AUTO001990							0x00000832		// 던전의 외부에 있습니다.
#define LSID_AUTO001991							0x00000833		// 퀘스트의 리더가 아닙니다.
#define LSID_AUTO001992							0x00000834		// 아직 미션을 완수하지 못했습니다.
#define LSID_AUTO001993							0x00000835		// 모든 멤버들이 포탈 주위에 있지 않습니다.
#define LSID_AUTO001994							0x00000836		// %s 님이 입장 하셨습니다.
#define LSID_AUTO001995							0x00000837		// %s님이 퇴장 하셨습니다.
#define LSID_AUTO001996							0x00000838		// 리더가 %s 님으로 변경 되었습니다.
#define LSID_AUTO001997							0x00000839		// %s 님이 리더 입니다.
#define LSID_AUTO001998							0x0000083A		// 포탈이 열렸습니다.
#define LSID_AUTO001999							0x0000083B		// 모든 포탈이 열렸습니다.
#define LSID_AUTO002000							0x0000083C		// 시간이 초과 되었습니다. 던전이 닫힙니다.
#define LSID_AUTO002001							0x0000083D		// 던젼을 만들수없는 위치 입니다.
#define LSID_AUTO002002							0x0000083E		// 유닛 탑승 상태에서는 던전을 만들수 없습니다.
#define LSID_AUTO002003							0x0000083F		// 던젼을 연사람이 아직 들어가지 않았습니다.
#define LSID_AUTO002004							0x00000840		// 던전 안에서는 던전을 생성할 수 없습니다..
#define LSID_AUTO002005							0x00000841		// 던전을 열 수 없는 상태입니다.
#define LSID_AUTO002006							0x00000842		// 파티 상태에서만 만들 수 있는 던전입니다.
#define LSID_AUTO002007							0x00000843		// 던전의 정원이 꽉 찼습니다.
#define LSID_AUTO002008							0x00000844		// %s "%s"님에 의해 통제 칩이 무사히 전달되어 %s의 통제장치 가동 시간이 연장되었습니다.
#define LSID_AUTO002009							0x00000845		// %s "%s"님에 의해 통제 칩이 전달되지 못하여 %s의 통제장치 가동 시간이 연장되지 않습니다.
#define LSID_AUTO002010							0x00000846		// 다음과 같은 오류가 발생하였습니다.<br>%s<br>파일 : "%s"<br>라인 : %d<br>구문 : %s
#define LSID_AUTO002011							0x00000847		// %s<br>결과 : Break
#define LSID_AUTO002012							0x00000848		// %s<br>결과 : Retry
#define LSID_AUTO002013							0x00000849		// %s<br>결과 : Ignore
#define LSID_AUTO002014							0x0000084A		// 클래스 리파인
#define LSID_AUTO002015							0x0000084B		//  클래스 리파인을 신청합니다.
#define LSID_AUTO002016							0x0000084C		//  클래스가 초기 클래스 성향만 남고 초기화됩니다. 이와 함께 현재 캐릭터의 HP, FP, SP와 사용 가능 스킬 등이 변경될 수 있습니다. 또한 재승직 시에는 숙련도 보너스와 아이템 보너스는 받지 못합니다.
#define LSID_AUTO002017							0x0000084D		// 클래스 리파인을 신청하시겠습니까?
#define LSID_AUTO002018							0x0000084E		// 소모비용 : %s 골 드
#define LSID_AUTO002019							0x0000084F		// [파티]
#define LSID_AUTO002020							0x00000850		// [길드]
#define LSID_AUTO002021							0x00000851		// [귓]
#define LSID_AUTO002022							0x00000852		// [맵]
#define LSID_AUTO002023							0x00000853		// [종]
#define LSID_AUTO002024							0x00000854		// [아크]
#define LSID_AUTO002025							0x00000855		// [벨라]
#define LSID_AUTO002026							0x00000856		// [코라]
#define LSID_AUTO002027							0x00000857		// [위]
#define LSID_AUTO002028							0x00000858		// 수송선메시지
#define LSID_AUTO002029							0x00000859		// 맵 정보가 잘못 되었습니다.
#define LSID_AUTO002030							0x0000085A		// 그룹 채팅은 최대 4명에까지 보낼 수 있습니다.
#define LSID_AUTO002031							0x0000085B		// 엘란고원에서는 귀환아이템을 사용하실 수 없습니다.
#define LSID_AUTO002032							0x0000085C		// %d번째 가방 %d번째 칸에 %s 삽입 되었습니다.
#define LSID_AUTO002033							0x0000085D		// 약속 대나무를 교환하려면 최소 7개의 견우의 부름 및 직녀의 그리움 이 필요합니다！
#define LSID_AUTO002034							0x0000085E		// %d번째 가방 %d번째 칸에 %s 합쳐졌습니다.
#define LSID_AUTO002035							0x0000085F		// 손실된 경험치가 없습니다.
#define LSID_AUTO002036							0x00000860		// 맵 이동중에는 경험치를 복구할 수 없습니다.
#define LSID_AUTO002037							0x00000861		// 아바타가 죽은 상태에서는 경험치를 복구할 수 없습니다.
#define LSID_AUTO002038							0x00000862		// 아바타가 앉은 상태에서는 경험치를 복구할 수 없습니다.
#define LSID_AUTO002039							0x00000863		// 공성유닛 사용중에는 경험치를 복구할 수 없습니다.
#define LSID_AUTO002040							0x00000864		// 기갑 장비 탑승중에는 경험치를 복구할 수 없습니다.
#define LSID_AUTO002041							0x00000865		// 석화상태에서는 경험치를 복구할 수 없습니다.
#define LSID_AUTO002042							0x00000866		// 잘못된 아이템입니다.
#define LSID_AUTO002043							0x00000867		// 거래중인 아이템은 사용할 수 없습니다.
#define LSID_AUTO002044							0x00000868		// 복구된 경험치가 없습니다.
#define LSID_AUTO002045							0x00000869		// 가장 최근에 잃은 경험치를 ( %d ~ %d )%% 값 중에서 랜덤하게 복구합니다.
#define LSID_AUTO002046							0x0000086A		// 가장 최근에 잃은 경험치를 %d%%만큼 복구하였습니다.
#define LSID_AUTO002047							0x0000086B		// 기갑장비가 출고 중이거나 기갑장비에 탑승한 상태에서는 클래스 초기화를 진행하실 수 없습니다.
#define LSID_AUTO002048							0x0000086C		// 등록된 애니머스가 있거나 소환중인 애니머스가 있을 경우 클래스 초기화를 진행하실 수 없습니다.
#define LSID_AUTO002049							0x0000086D		// %s님을 찾을 수 없습니다.
#define LSID_AUTO002050							0x0000086E		// %s님은 귓말 거부 상태입니다
#define LSID_AUTO002051							0x0000086F		// %s는 다른 종족 입니다
#define LSID_AUTO002052							0x00000870		// 자기자신의 이름이 있습니다
#define LSID_AUTO002053							0x00000871		// 중복된 이름이 있습니다.
#define LSID_AUTO002054							0x00000872		// 박스 아이템
#define LSID_AUTO002055							0x00000873		// 경험치 복구 아이템
#define LSID_AUTO002056							0x00000874		// 아이템 조합
#define LSID_AUTO002057							0x00000875		// 남은 시간
#define LSID_AUTO002058							0x00000876		// 타종족 킬수:
#define LSID_AUTO002059							0x00000877		// 배틀
#define LSID_AUTO002060							0x00000878		// [그룹]
#define LSID_AUTO002061							0x00000879		// Windows 95 는 지원하지 않습니다.
#define LSID_AUTO002062							0x0000087A		// 안전 모드에서는 게임을 실행할 수 없습니다. 정상적으로 재부팅 후 시도 해주시기 바랍니다.
#define LSID_AUTO002063							0x0000087B		// 실행에 필요한 자원이 제대로 반환되지 못했습니다. 잠시후 다시 실행시켜 주시기 바랍니다.
#define LSID_AUTO002064							0x0000087C		// 윈도우 업데이트 때문에 재부팅이 필요합니다. 재부팅 후 다시 실행 시켜주시기 바랍니다.
#define LSID_AUTO002065							0x0000087D		// 잠시 후 재실행 해주시고 같은 현상이 발생시 재부팅 후 게임을 실행시켜 주시기 바랍니다.
#define LSID_AUTO002066							0x0000087E		// 스피드핵 프로그램이 탐지되었습니다. 해당 프로그램을 종료 후 재시도 해 주시기 바랍니다.
#define LSID_AUTO002067							0x0000087F		// 게임 메모리 해킹이 탐지되었습니다. 해당 프로그램을 종료 후 재시도해 주시기 바랍니다.
#define LSID_AUTO002068							0x00000880		// 다른 해킹 방지툴 또는 디버거 프로그램의 존재 여부를 확인하시고, 종료후 재시도해 주시기 바랍니다.
#define LSID_AUTO002069							0x00000881		// 매크로 시도가 탐지되었습니다.
#define LSID_AUTO002070							0x00000882		// 네트워크 해킹 시도가 탐지되었습니다.
#define LSID_AUTO002071							0x00000883		// FireGuard 자체 해킹 시도가 탐지되었습니다. 컴퓨터내의 바이러스나 악성코드를 검사해 주시고 이상이 없을 경우 해킹 프로그램이나 기타 불법 프로그램을 종료후 게임을 실행해 주시기 바랍니다.
#define LSID_AUTO002072							0x00000884		// FireGuard를 탑재한 게임이 이미 실행중입니다.
#define LSID_AUTO002073							0x00000885		// FireGuard 실행에 필요한 모듈 초기화에 실패하였습니다.
#define LSID_AUTO002074							0x00000886		// FireGuard 모듈 초기화에 실패하였습니다.
#define LSID_AUTO002075							0x00000887		// 업데이트 서버 점검 또는 네트워크가 작동되지 않습니다.
#define LSID_AUTO002076							0x00000888		// 인터넷 연결에 문제가 있는 듯 합니다.
#define LSID_AUTO002077							0x00000889		// 디스크 용량이 부족합니다.
#define LSID_AUTO002078							0x0000088A		// 다른 프로그램이 필요한 파일을 사용중인듯 합니다.
#define LSID_AUTO002079							0x0000088B		// 게임 파일 접근 권한이 없습니다.
#define LSID_AUTO002080							0x0000088C		// 업데이트 실패입니다.
#define LSID_AUTO002081							0x0000088D		// FireGuard 시작 실패
#define LSID_AUTO002082							0x0000088E		// FireGuard 실행이 중단되었습니다.
#define LSID_AUTO002083							0x0000088F		// 서버통합 전 개설한 창고가 있을 경우 개설비용이 무료이며 내용과 확장칸 수는 재접속시 적용됩니다.
#define LSID_AUTO002084							0x00000890		// 크로스보우
#define LSID_AUTO002085							0x00000891		// 빔 보우
#define LSID_AUTO002086							0x00000892		// 빔 크로스보우
#define LSID_AUTO002087							0x00000893		// 파이어암
#define LSID_AUTO002088							0x00000894		// 라이플
#define LSID_AUTO002089							0x00000895		// 머신건
#define LSID_AUTO002090							0x00000896		// 빔 건
#define LSID_AUTO002091							0x00000897		// 화염방사기
#define LSID_AUTO002092							0x00000898		// 파우스트 런처
#define LSID_AUTO002093							0x00000899		// 그레네이드 런처
#define LSID_AUTO002094							0x0000089A		// HP 회복량
#define LSID_AUTO002095							0x0000089B		// FP 회복량
#define LSID_AUTO002096							0x0000089C		// SP 회복량
#define LSID_AUTO002097							0x0000089D		// %d%% / %d초
#define LSID_AUTO002098							0x0000089E		// 명중률
#define LSID_AUTO002099							0x0000089F		// 다음 위치에서 해킹툴이 발견되어 프로그램을 종료시켰습니다.<br>%s
#define LSID_AUTO002100							0x000008A0		// 해킹툴이 발견되어 프로그램을 종료합니다.
#define LSID_AUTO002101							0x000008A1		// 현재 SpeedHack으로 의심되는 동작이 감지되어 프로그램을 종료합니다.
#define LSID_AUTO002102							0x000008A2		// 프로그램에 대하여 디버깅 시도가 발생하였습니다. (Code = %x) 프로그램을 종료합니다.
#define LSID_AUTO002103							0x000008A3		// 디버깅 시도가 발생하여 프로그램을 종료합니다.
#define LSID_AUTO002104							0x000008A4		// 해킹 방어 기능에 이상이 발생하였습니다. (Code = %x)<br>프로그램을 종료합니다.
#define LSID_AUTO002105							0x000008A5		// 해킹 방어 기능에 이상이 발생하였습니다.
#define LSID_AUTO002106							0x000008A6		// HackShield 알 수 없는 오류가 발생했습니다.
#define LSID_AUTO002107							0x000008A7		// HackShield 올바르지 않은 인자입니다.
#define LSID_AUTO002108							0x000008A8		// HackShield 핵쉴드 모듈이 초기화되지 않은 상태입니다.
#define LSID_AUTO002109							0x000008A9		// 호환성 모드로 프로그램이 실행중입니다.<br>프로그램을 종료합니다.
#define LSID_AUTO002110							0x000008AA		// HackShield 올바르지 않은 라이센스 키입니다.
#define LSID_AUTO002111							0x000008AB		// 잘못된 파일 설치되었습니다.<br> HackShield프로그램을 재설치하시기 바랍니다.
#define LSID_AUTO002112							0x000008AC		// HackShield 해킹 차단 드라이버 초기화 실패.
#define LSID_AUTO002113							0x000008AD		// 다른 게임이 실행중입니다.<br>프로그램을 종료합니다.
#define LSID_AUTO002114							0x000008AE		// HackShield 이미 핵쉴드 모듈이 초기화되어 있습니다.
#define LSID_AUTO002115							0x000008AF		// 컴퓨터에서 디버거 실행이 감지되었습니다.<br>디버거의 실행을 중지시킨 뒤에 다시 실행시켜주시기바랍니다.
#define LSID_AUTO002116							0x000008B0		// HackShield 실행 파일의 코드가 크랙 되었습니다.
#define LSID_AUTO002117							0x000008B1		// Admin 권한으로 실행되어야 합니다.<br>프로그램을 종료합니다.
#define LSID_AUTO002118							0x000008B2		// HackShield 해킹 프로그램 감지 엔진을 시작할 수 없습니다.
#define LSID_AUTO002119							0x000008B3		// HackShield 이미 핵쉴드 서비스가 실행 중입니다.
#define LSID_AUTO002120							0x000008B4		// HackShield 핵쉴드 드라이버 파일을 생성할 수 없습니다.
#define LSID_AUTO002121							0x000008B5		// HackShield 핵쉴드 드라이버를 등록할 수 없습니다.
#define LSID_AUTO002122							0x000008B6		// HackShield 핵쉴드 드라이버를 시작할 수 없습니다.
#define LSID_AUTO002123							0x000008B7		// HackShield 핵쉴드 서비스가 실행되고 있지 않은 상태입니다.
#define LSID_AUTO002124							0x000008B8		// HackShield 핵쉴드 서비스가 아직 실행중인 상태입니다.
#define LSID_AUTO002125							0x000008B9		// HackShield 핵쉴드 모듈의 업데이트가 필요합니다.
#define LSID_AUTO002126							0x000008BA		// 해킹방지 기능에 문제가 발생하였습니다.(Error Code = %x)<br>프로그램을 종료합니다.
#define LSID_AUTO002127							0x000008BB		// 보다 넓은 지역에서 게이트웨이를 생성하십시요.
#define LSID_AUTO002128							0x000008BC		// 무료 체험 계정으로는 창고를 사용할수 없습니다.
#define LSID_AUTO002129							0x000008BD		// 등록제한시간초과로 %s 아이템의 등록을 자동 취소합니다.
#define LSID_AUTO002130							0x000008BE		// 등록 아이템 자동 취소 실패 : %d
#define LSID_AUTO002131							0x000008BF		// 창고 관련 : 보유금 한계가 초과하였습니다.
#define LSID_AUTO002132							0x000008C0		// 창고 관련 : 입금 가능 최대 금액을 초과하였습니다.
#define LSID_AUTO002133							0x000008C1		// 아이템 등록 가격 최대치 초과
#define LSID_AUTO002134							0x000008C2		// 길드 관련 : 유지금 보유 한계를 초과하였습니다.
#define LSID_AUTO002135							0x000008C3		// 예약 스킬 발동
#define LSID_AUTO002136							0x000008C4		// 예약 스킬 해제
#define LSID_AUTO002137							0x000008C5		// 현재는 전투중입니다. 평화모드로 전환할 수 없습니다.
#define LSID_AUTO002138							0x000008C6		// 스킬 예약
#define LSID_AUTO002139							0x000008C7		// 전투중에는 해당 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002140							0x000008C8		// 장착 중인 아이템은 조합 재료로 사용하실 수 없습니다.
#define LSID_AUTO002141							0x000008C9		// 단축 아이템은 조합 재료로 사용하실 수 없습니다.
#define LSID_AUTO002142							0x000008CA		// 알수 없는 위치에 있는 아이템을 이용해 조합 재료로 사용하실 수 없습니다. (%d)
#define LSID_AUTO002143							0x000008CB		// 전투중일때는 게임을 종료 하실 수 없습니다.
#define LSID_AUTO002144							0x000008CC		// 전투중일때는 로그아웃 하실 수 없습니다.
#define LSID_AUTO002145							0x000008CD		// GM을 요청하였습니다.
#define LSID_AUTO002146							0x000008CE		// GM을 요청을 취소하였습니다.
#define LSID_AUTO002147							0x000008CF		// 해당 유저가 서버에 접속하지 않았거나<br><br>이미 처리되었습니다.
#define LSID_AUTO002148							0x000008D0		// 유저가 있는 곳으로 GM이 이동할 수 없습니다.<br><br>잠시후에 다시 시도해주세요.
#define LSID_AUTO002149							0x000008D1		// 그레네이드 런쳐
#define LSID_AUTO002150							0x000008D2		// 그레네이드 런쳐
#define LSID_AUTO002151							0x000008D3		// 그레네이드 런쳐
#define LSID_AUTO002152							0x000008D4		// 그레네이드 런쳐
#define LSID_AUTO002153							0x000008D5		// 그레네이드 런쳐
#define LSID_AUTO002154							0x000008D6		// 족장 후보 등록
#define LSID_AUTO002155							0x000008D7		// 프로필
#define LSID_AUTO002156							0x000008D8		// 모든 파티 구성원이 랜덤하게 루팅 권한을 갖는다.
#define LSID_AUTO002157							0x000008D9		// 배틀 던젼
#define LSID_AUTO002158							0x000008DA		// 진행 시간
#define LSID_AUTO002159							0x000008DB		// GM을 요청하시겠습니까?
#define LSID_AUTO002160							0x000008DC		// GM 요청을 취소하시겠습니까?
#define LSID_AUTO002161							0x000008DD		// 갱신
#define LSID_AUTO002162							0x000008DE		// 접수
#define LSID_AUTO002163							0x000008DF		// GM 요청
#define LSID_AUTO002164							0x000008E0		// 등록 순번
#define LSID_AUTO002165							0x000008E1		// 유저 ID
#define LSID_AUTO002166							0x000008E2		// 유저를 선택해 주십시오.
#define LSID_AUTO002167							0x000008E3		// 정말로 게임을 종료하시겠습니까?
#define LSID_AUTO002168							0x000008E4		// 현재 플레이어는 길드전 중이여서 몬스터를 공격할 수 없습니다.
#define LSID_AUTO002169							0x000008E5		// 현재 선택한 스킬/포스는 길드전에 참여해야만 사용 가능합니다.
#define LSID_AUTO002170							0x000008E6		// 현재 선택한 스킬/포스는 아바타나 같은 길드원일 경우에만 사용 가능합니다.
#define LSID_AUTO002171							0x000008E7		// 현재 선택한 스킬/포스는 다른 길드원일 경우에만 사용 가능합니다.
#define LSID_AUTO002172							0x000008E8		// 총 소요시간 : %d
#define LSID_AUTO002173							0x000008E9		// 죽인 몬스터 : %d
#define LSID_AUTO002174							0x000008EA		// 최고 플레이어(데미지) : %s
#define LSID_AUTO002175							0x000008EB		// 길드전 중에는 해당 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002176							0x000008EC		// 자동 행위1
#define LSID_AUTO002177							0x000008ED		// 자동 행위2
#define LSID_AUTO002178							0x000008EE		// 자동 행위3
#define LSID_AUTO002179							0x000008EF		// 자동 채팅1
#define LSID_AUTO002180							0x000008F0		// 자동 채팅2
#define LSID_AUTO002181							0x000008F1		// 선물상자 교환에 필요한 재료가 부족합니다.
#define LSID_AUTO002182							0x000008F2		// 조합 재료의 조건은 맞으나 수수료가 부족합니다.
#define LSID_AUTO002183							0x000008F3		// 조합 재료의 조건이 맞지 않습니다.
#define LSID_AUTO002184							0x000008F4		// 조합 재료의 조건은 맞으나 아이템 정보가 없습니다.
#define LSID_AUTO002185							0x000008F5		// 족장 투표가 시작 되었습니다. 투표 하세요!
#define LSID_AUTO002186							0x000008F6		// 족장 투표가 종료 되었습니다. 투표 결과를 확인 하세요!
#define LSID_AUTO002187							0x000008F7		// 길드 마스터
#define LSID_AUTO002188							0x000008F8		// 필드내에 랜덤하게 나오는 그라비티 스톤을 습득하여 전진기지 근처에 있는 블루 서클 존으로 전송시켜라!
#define LSID_AUTO002189							0x000008F9		// 필드내에 랜덤하게 나오는 그라비티 스톤을 습득하여 점령지구 HQ 근처에 있는 레드 서클 존으로 전송시켜라!
#define LSID_AUTO002190							0x000008FA		// 서클 존 스크럼블에서 패배 하였습니다. 기여도 %d 잃었습니다.
#define LSID_AUTO002191							0x000008FB		// 서클 존 스크럼블에서 승리를 쟁취하였습니다. 기여도 %d 얻었습니다.
#define LSID_AUTO002192							0x000008FC		// 서클 존 스크럼블에서 무승부를 하였습니다.
#define LSID_AUTO002193							0x000008FD		// 현재 
#define LSID_AUTO002194							0x000008FE		// 위에 랭크 되어 있습니다. 자격 미달 입니다.
#define LSID_AUTO002195							0x000008FF		// HP 회복을 해주는 아이템이 아닙니다.
#define LSID_AUTO002196							0x00000900		// FP 회복을 해주는 아이템이 아닙니다.
#define LSID_AUTO002197							0x00000901		// SP 회복을 해주는 아이템이 아닙니다.
#define LSID_AUTO002198							0x00000902		// HP 회복을 도와주는 포스가 아닙니다.
#define LSID_AUTO002199							0x00000903		// FP 회복을 도와주는 포스가 아닙니다.
#define LSID_AUTO002200							0x00000904		// SP 회복을 도와주는 포스가 아닙니다.
#define LSID_AUTO002201							0x00000905		// 매크로 아이템은 장착하실 수 없습니다.
#define LSID_AUTO002202							0x00000906		// 길드 스크럼블 중에는 포탈을 이용할 수 없습니다.
#define LSID_AUTO002203							0x00000907		// 던전에 들어 갈 수 있는 레벨이 아닙니다.
#define LSID_AUTO002204							0x00000908		// 그라비티 스톤을 소지하고 있는 경우에는 소환할 수 없습니다.
#define LSID_AUTO002205							0x00000909		// 시전자나 대상이 길드 스크럼블 중입니다.
#define LSID_AUTO002206							0x0000090A		// %s 길드와의 스크럼블에 참여하시겠습니까?
#define LSID_AUTO002207							0x0000090B		// 길드전 신청이 완료 되었습니다.
#define LSID_AUTO002208							0x0000090C		// 길드전이 결정 되었습니다.
#define LSID_AUTO002209							0x0000090D		// 그라비티 스톤이 소환 되었습니다.
#define LSID_AUTO002210							0x0000090E		// %s 길드의 %s 그라비티 스톤을 획득 했습니다.
#define LSID_AUTO002211							0x0000090F		// %s 길드의 %s 서클 존에 그라비티 스톤을 성공적으로 전송 했습니다.
#define LSID_AUTO002212							0x00000910		// %s 길드와 %s 길드의 서클 존 스크럼블은 양쪽 다 동점으로 무승부가 되었습니다.
#define LSID_AUTO002213							0x00000911		// %s 길드가 %s 길드와의 서클 존 스크럼블에서 승리를 쟁취하였습니다.
#define LSID_AUTO002214							0x00000912		// 서버 길드 서클 존 스크럼블 시스템 내부에러
#define LSID_AUTO002215							0x00000913		// 대상 길드가 존재 하지 않습니다.
#define LSID_AUTO002216							0x00000914		// 이미 예약된 시간입니다.
#define LSID_AUTO002217							0x00000915		// 신청하는 자신의 길드 등급이 부족합니다.
#define LSID_AUTO002218							0x00000916		// 대상의 길드 등급이 부족합니다.
#define LSID_AUTO002219							0x00000917		// 대상과의 등급차이가 제한을 넘었습니다.
#define LSID_AUTO002220							0x00000918		// 스크럼블 비용이 부족합니다.
#define LSID_AUTO002221							0x00000919		// 종족 제한(같은 종족만 가능)
#define LSID_AUTO002222							0x0000091A		// 요청한 지역 인덱스가 잘못되었습니다.
#define LSID_AUTO002223							0x0000091B		// 예약 시간이 전부 다 찼습니다.
#define LSID_AUTO002224							0x0000091C		// 시작시간 인덱스가 범위를 벗어 났습니다.
#define LSID_AUTO002225							0x0000091D		// 종료 시간이 다음 날 끝나는 미지막 시간을 벗어 났습니다.
#define LSID_AUTO002226							0x0000091E		// 예약된 시간 30분전은 예약 할수 없습니다.
#define LSID_AUTO002227							0x0000091F		// 0시 30분 부터 시간을 선택할 수 있습니다.
#define LSID_AUTO002228							0x00000920		// 그라비티 스톤을 가질수 있는 범위를 벗어 났습니다.
#define LSID_AUTO002229							0x00000921		// 그라비티 스톤의 소유주가 없거나 적절하지 않습니다.
#define LSID_AUTO002230							0x00000922		// 그라비티 스톤 생성에 실패 했습니다.
#define LSID_AUTO002231							0x00000923		// 골 지역을 벗어 났습니다.
#define LSID_AUTO002232							0x00000924		// 요청한 그라비티 스톤 리젠너가 리젠상태가 아닙니다.
#define LSID_AUTO002233							0x00000925		// 요청한 그라비티 스톤 리제너가 가질 수 있는 범위를 벗어 났습니다.
#define LSID_AUTO002234							0x00000926		// 요청한 포탈 인덱스에 해당하는 그라비티 스톤 리제너가 존재하지 않습니다.
#define LSID_AUTO002235							0x00000927		// 요청한 포탈 인덱스에 해당하는 상대편 서클존이 존재하지 않습니다.
#define LSID_AUTO002236							0x00000928		// 길드전 중입니다.
#define LSID_AUTO002237							0x00000929		// 해당 길드는 현재 다른길드에게 길드전 신청을 하고 있습니다.
#define LSID_AUTO002238							0x0000092A		// 해당 길드는 현재 다른길드에게 길드전 신청을 받고 있습니다.
#define LSID_AUTO002239							0x0000092B		// 이미 길드전이 진행 중 입니다.
#define LSID_AUTO002240							0x0000092C		// 대상 길드는 이미 길드전이 진행 중 입니다.
#define LSID_AUTO002241							0x0000092D		// 해당 길드는 이미 타 길드와의 길드전이 결정 되었습니다.
#define LSID_AUTO002242							0x0000092E		// 신청한 대상 길드가 길드전 수락을 거부 했습니다.
#define LSID_AUTO002243							0x0000092F		// 길드 멤버가 아닙니다.
#define LSID_AUTO002244							0x00000930		// 소속된 길드가 없습니다.
#define LSID_AUTO002245							0x00000931		// 자신의 길드에 예약된 길드전이 존재하지 않습니다.
#define LSID_AUTO002246							0x00000932		// 서클 존 스크럼블 가능한 목록 요청시 잘못된 맵인덱스나 페이지를 요청했습니다.
#define LSID_AUTO002247							0x00000933		// 현재 자신의 길드가 길드전 중이 아니거나 그라비티 스톤이 소환된 상태가 아닙니다.
#define LSID_AUTO002248							0x00000934		// 서클 존 스크럼블에 참여한 인원이 아닙니다.
#define LSID_AUTO002249							0x00000935		// 이미 조인 승인한 인원입니다.
#define LSID_AUTO002250							0x00000936		// 자신의 길드와는 서클 존 스크럼블이 불가능합니다.
#define LSID_AUTO002251							0x00000937		// 선택된 대상은 이미 현재 길드마스터 이므로 추천하실 수 없습니다.
#define LSID_AUTO002252							0x00000938		// 후보 등록이 정상적으로 처리 되었습니다.
#define LSID_AUTO002253							0x00000939		// 후보 등록 기간이 아닙니다.
#define LSID_AUTO002254							0x0000093A		// 이미 후보 등록이 되어 있습니다.
#define LSID_AUTO002255							0x0000093B		// 후보 자격이 없습니다. 후보 자격은 홈페이지를 통해서 확인이 가능합니다.
#define LSID_AUTO002256							0x0000093C		// 등록비가 부족합니다
#define LSID_AUTO002257							0x0000093D		// 등록에 실패하였습니다. 재시도 하시기 바랍니다.
#define LSID_AUTO002258							0x0000093E		// 투표가 정상적으로 처리 되었습니다.
#define LSID_AUTO002259							0x0000093F		// 후보가 한명이므로 선거를 진행하지 않습니다.
#define LSID_AUTO002260							0x00000940		// 투표 기간이 아닙니다. 투표 기간에 대한 정보는 홈페이지를 통해서 확인이 가능합니다.
#define LSID_AUTO002261							0x00000941		// 이미 투표를 진행하였습니다.
#define LSID_AUTO002262							0x00000942		// 투표 자격이 없습니다. 자격에 대한 조건은 홈페이지를 통해서 확인이 가능합니다.
#define LSID_AUTO002263							0x00000943		// 2차 후보에 탈락하여 등록비가 환원됩니다.
#define LSID_AUTO002264							0x00000944		// 등록비 환원이 성공적으로 이루어지지 않았습니다. 재접속 후에 등록비 환원을 확인 하십시요
#define LSID_AUTO002265							0x00000945		// 소지하신 종족화폐가 너무 많아 등록비가 환원이 안됩니다.
#define LSID_AUTO002266							0x00000946		// 길드 순위
#define LSID_AUTO002267							0x00000947		// 서클 존 스크럼블
#define LSID_AUTO002268							0x00000948		// 작은 선물 교환
#define LSID_AUTO002269							0x00000949		// 선물 교환
#define LSID_AUTO002270							0x0000094A		// 큰 선물 교환
#define LSID_AUTO002271							0x0000094B		// 선택이 완료되면 확인버튼을 누르면 완료됩니다.
#define LSID_AUTO002272							0x0000094C		// 확인버튼을 누르면 완료됩니다.
#define LSID_AUTO002273							0x0000094D		// 조합 결과 선택
#define LSID_AUTO002274							0x0000094E		// 아이템 조합이 성공적으로 이루어졌습니다.
#define LSID_AUTO002275							0x0000094F		// 선택한 아이템을 다시 선택하면 선택 해제가 가능합니다.
#define LSID_AUTO002276							0x00000950		// 선택개수
#define LSID_AUTO002277							0x00000951		// 아이템조합
#define LSID_AUTO002278							0x00000952		// 차 단
#define LSID_AUTO002279							0x00000953		// 채팅차단
#define LSID_AUTO002280							0x00000954		// 귓말차단
#define LSID_AUTO002281							0x00000955		// 추 가
#define LSID_AUTO002282							0x00000956		// 삭 제
#define LSID_AUTO002283							0x00000957		// 후보 선택
#define LSID_AUTO002284							0x00000958		// 투표 시작
#define LSID_AUTO002285							0x00000959		// 캐릭명
#define LSID_AUTO002286							0x0000095A		// 승 패 무
#define LSID_AUTO002287							0x0000095B		// 횟수
#define LSID_AUTO002288							0x0000095C		// 길드명
#define LSID_AUTO002289							0x0000095D		// 시작/완료시간
#define LSID_AUTO002290							0x0000095E		// %d일
#define LSID_AUTO002291							0x0000095F		// 예약된 스케쥴이 없습니다.
#define LSID_AUTO002292							0x00000960		// 레드존
#define LSID_AUTO002293							0x00000961		// 블루존
#define LSID_AUTO002294							0x00000962		// 스크럼블 포인트 스코어
#define LSID_AUTO002295							0x00000963		// 서클 존 워프 포인트 스코어
#define LSID_AUTO002296							0x00000964		// 서클 존 스크럼블 남은 시간
#define LSID_AUTO002297							0x00000965		// 현재 진행중인 서클 존 스크럼블이 없습니다.
#define LSID_AUTO002298							0x00000966		// 스케쥴
#define LSID_AUTO002299							0x00000967		// 스코어
#define LSID_AUTO002300							0x00000968		// 나의 길드 순위
#define LSID_AUTO002301							0x00000969		// 주간 기여도
#define LSID_AUTO002302							0x0000096A		// 종합 순위
#define LSID_AUTO002303							0x0000096B		// 주간 순위
#define LSID_AUTO002304							0x0000096C		// 길드마스터
#define LSID_AUTO002305							0x0000096D		// 대상 길드
#define LSID_AUTO002306							0x0000096E		// 스크럼블 시작 시간
#define LSID_AUTO002307							0x0000096F		// 스크럼블 진행 시간
#define LSID_AUTO002308							0x00000970		// %s님이 %s님을 길드 마스터로 추천했습니다.
#define LSID_AUTO002309							0x00000971		// 현재 무인 판매기 세율: %2d %%
#define LSID_AUTO002310							0x00000972		// 세율 조정: %2d %%
#define LSID_AUTO002311							0x00000973		// 길드 마스터 선출
#define LSID_AUTO002312							0x00000974		// 길드마스터 :
#define LSID_AUTO002313							0x00000975		// 30분
#define LSID_AUTO002314							0x00000976		// 1시간
#define LSID_AUTO002315							0x00000977		// 1시간 30분
#define LSID_AUTO002316							0x00000978		// 2시간
#define LSID_AUTO002317							0x00000979		// 2시간 30분
#define LSID_AUTO002318							0x0000097A		// 3시간
#define LSID_AUTO002319							0x0000097B		// 3시간 30분
#define LSID_AUTO002320							0x0000097C		// 4시간
#define LSID_AUTO002321							0x0000097D		// 4시간 30분
#define LSID_AUTO002322							0x0000097E		// 5시간
#define LSID_AUTO002323							0x0000097F		// 5시간 30분
#define LSID_AUTO002324							0x00000980		// 6시간
#define LSID_AUTO002325							0x00000981		// 대상 길드 선택
#define LSID_AUTO002326							0x00000982		// 스크럼블 소모 비용
#define LSID_AUTO002327							0x00000983		// 신 청
#define LSID_AUTO002328							0x00000984		// 투표 진행 상황
#define LSID_AUTO002329							0x00000985		// 스크램블메세지
#define LSID_AUTO002330							0x00000986		// 자동행위 %d
#define LSID_AUTO002331							0x00000987		// 자동채팅 %d
#define LSID_AUTO002332							0x00000988		// HP 설정
#define LSID_AUTO002333							0x00000989		// FP 설정
#define LSID_AUTO002334							0x0000098A		// SP 설정
#define LSID_AUTO002335							0x0000098B		// 매크로
#define LSID_AUTO002336							0x0000098C		// 자동 포션
#define LSID_AUTO002337							0x0000098D		// 자동 행위
#define LSID_AUTO002338							0x0000098E		// 자동 채팅
#define LSID_AUTO002339							0x0000098F		// 득표율
#define LSID_AUTO002340							0x00000990		// 전체투표자
#define LSID_AUTO002341							0x00000991		// 기권자
#define LSID_AUTO002342							0x00000992		// 족장 선거 출마
#define LSID_AUTO002343							0x00000993		// 소속길드
#define LSID_AUTO002344							0x00000994		// 족장역임
#define LSID_AUTO002345							0x00000995		// 닫기
#define LSID_AUTO002346							0x00000996		// 투표 결과
#define LSID_AUTO002347							0x00000997		// 족  장
#define LSID_AUTO002348							0x00000998		// 부족장
#define LSID_AUTO002349							0x00000999		// 족장 선출 투표
#define LSID_AUTO002350							0x0000099A		// 기권
#define LSID_AUTO002351							0x0000099B		// 전투 성향
#define LSID_AUTO002352							0x0000099C		// 회피성향
#define LSID_AUTO002353							0x0000099D		// 방어성향
#define LSID_AUTO002354							0x0000099E		// 캐릭터를 삭제할 시 창고 데이터가 모두 삭제 됩니다. 삭제하시겠습니까?
#define LSID_AUTO002355							0x0000099F		// 크리스탈을 파괴 후 10분 동안은 귀환 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002356							0x000009A0		// 대표
#define LSID_AUTO002357							0x000009A1		// 대표' 채팅은 길드 마스터와 족장 및 부족장만 사용 가능한 기능입니다.
#define LSID_AUTO002358							0x000009A2		// %d초 후에 자동 부활 합니다.
#define LSID_AUTO002359							0x000009A3		// 벨라 Guild : %d
#define LSID_AUTO002360							0x000009A4		// 코라 Guild : %d
#define LSID_AUTO002361							0x000009A5		// 아카 Guild : %d
#define LSID_AUTO002362							0x000009A6		// 재사용 가능할 때 까지 %d초 남았습니다.
#define LSID_AUTO002363							0x000009A7		// 족장 후보에 등록할 수 있는 자격을 가지지 않았습니다.
#define LSID_AUTO002364							0x000009A8		// 클라이언트 버전이 최신 버전이 아니므로 종료합니다.
#define LSID_AUTO002365							0x000009A9		// 던젼 게이트가 소멸되었습니다.
#define LSID_AUTO002366							0x000009AA		// 던젼 게이트가 생성되었습니다.
#define LSID_AUTO002367							0x000009AB		// 길드전 중에는 던전 게이트를 열 수 없습니다.
#define LSID_AUTO002368							0x000009AC		// 그라비티 스톤을 소지한 상태에서는 유닛에 탑승할 수 없습니다.
#define LSID_AUTO002369							0x000009AD		// 그라비티 스톤을 소유하고 있는 상태에서는 스킬 포스를 사용할 수 없습니다.
#define LSID_AUTO002370							0x000009AE		// 그라비티 스톤을 소유한 캐릭터는 리콜할 수 없습니다.
#define LSID_AUTO002371							0x000009AF		// [공격에러]대상이 이미 죽은 상태입니다.
#define LSID_AUTO002372							0x000009B0		// [공격에러]대상이 다른맴상에 존재합니다.
#define LSID_AUTO002373							0x000009B1		// [공격에러]사정거리를 벗어났습니다.
#define LSID_AUTO002374							0x000009B2		// [공격에러]대상이 공격을 회피했습니다.
#define LSID_AUTO002375							0x000009B3		// [공격에러]공격 지연 시간내에 공격했습니다.
#define LSID_AUTO002376							0x000009B4		// [공격에러]무효 대상입니다.
#define LSID_AUTO002377							0x000009B5		// [공격에러]공격가능높이범위를 넘었습니다.
#define LSID_AUTO002378							0x000009B6		// [공격에러]SF사용가능한 대상이 아님
#define LSID_AUTO002379							0x000009B7		// [공격에러]공격유형별 가능무기가 아님
#define LSID_AUTO002380							0x000009B8		// [공격에러]SF의 경우 FP가 모자람
#define LSID_AUTO002381							0x000009B9		// [공격에러]자신이 시체인경우
#define LSID_AUTO002382							0x000009BA		// [공격에러]대상이 시체인경우
#define LSID_AUTO002383							0x000009BB		// [공격에러]이미 적용된 SF가 있다.
#define LSID_AUTO002384							0x000009BC		// [공격에러]mastery가 적어서 사용할수 없다.
#define LSID_AUTO002385							0x000009BD		// [공격에러]가지고있는 스킬이 아님.
#define LSID_AUTO002386							0x000009BE		// [공격에러]가지고있는 포스이 아님.
#define LSID_AUTO002387							0x000009BF		// [공격에러]bullet가 없음
#define LSID_AUTO002388							0x000009C0		// [공격에러]counter attack일 때는 공격을 할수 없다.
#define LSID_AUTO002389							0x000009C1		// [공격에러]포스잠김상태
#define LSID_AUTO002390							0x000009C2		// [공격에러]스킬 잠김
#define LSID_AUTO002391							0x000009C3		// [공격에러]필드유닛을 착용상태라 스킬, 포스는 사용할수없음.
#define LSID_AUTO002392							0x000009C4		// [공격에러]필드유닛오류
#define LSID_AUTO002393							0x000009C5		// [공격에러]무기와 구경이같은 총탄이 아님..
#define LSID_AUTO002394							0x000009C6		// [공격에러]다른 클래스의 스킬인경우 1레벨이상은 못씀
#define LSID_AUTO002395							0x000009C7		// [공격에러]hp, fp, sp등이 모자름..
#define LSID_AUTO002396							0x000009C8		// [공격에러]원거리 무기에 총알을 장착안한 상태
#define LSID_AUTO002397							0x000009C9		// [공격에러]런쳐를 사용못하는 클래스
#define LSID_AUTO002398							0x000009CA		// [공격에러]홀리스톤을 공격할 자격이 없다
#define LSID_AUTO002399							0x000009CB		// [공격에러]락걸린 화살
#define LSID_AUTO002400							0x000009CC		// [공격에러]락걸린 포스
#define LSID_AUTO002401							0x000009CD		// [공격에러]마을이다
#define LSID_AUTO002402							0x000009CE		// [공격에러]유저등급으로인한 실패
#define LSID_AUTO002403							0x000009CF		// [공격에러]무기가 맞지않는다
#define LSID_AUTO002404							0x000009D0		// [공격에러]시즈상태가 아님    
#define LSID_AUTO002405							0x000009D1		// [공격에러]시즈내구성 제로
#define LSID_AUTO002406							0x000009D2		// [공격에러]무효의 범위
#define LSID_AUTO002407							0x000009D3		// [공격에러]석화 상태 
#define LSID_AUTO002408							0x000009D4		// [공격에러]가사(죽은척) 상태
#define LSID_AUTO002409							0x000009D5		// [공격에러]자폭 대기 상태
#define LSID_AUTO002410							0x000009D6		// [공격에러]그라비티 스톤 소유상태
#define LSID_AUTO002411							0x000009D7		// [공격에러]룰적인 포괄적인 에러
#define LSID_AUTO002412							0x000009D8		// [공격에러]데이터적인 포괄적인 에러
#define LSID_AUTO002413							0x000009D9		// [공격에러]대상이 반격기상태임
#define LSID_AUTO002414							0x000009DA		// 스크럼블 신청 가능한 길드 목록이 없습니다.
#define LSID_AUTO002415							0x000009DB		// 레드 팀 서클 존
#define LSID_AUTO002416							0x000009DC		// 블루 팀 서클 존
#define LSID_AUTO002417							0x000009DD		// 그라비티 스톤 존
#define LSID_AUTO002418							0x000009DE		// %s 길드와의 길드 스크럼블 안건 신청이 완료 되었습니다.
#define LSID_AUTO002419							0x000009DF		// 참가 인원수가 최대 참가 인원수를 초과 했습니다. 스크럼블에 참가할 수 없습니다.
#define LSID_AUTO002420							0x000009E0		// 신청할 수 있는 길드 목록이 없습니다.
#define LSID_AUTO002421							0x000009E1		// 요청한 예약 시간에 이미 다른 스크럼블이 예약되어 있습니다.
#define LSID_AUTO002422							0x000009E2		// 정산 작업이 진행중이어서 대상 길드에 스크럼블 안건을 신청할수 없습니다.
#define LSID_AUTO002423							0x000009E3		// 대상 길드가 투표가 진행중이어서 스크럼블 안건을 신청할수 없습니다.
#define LSID_AUTO002424							0x000009E4		// 대상 길드가 스크럼블 비용이 부족하여 스크럼블 안건을 신청할수 없습니다.
#define LSID_AUTO002425							0x000009E5		// 대상 길드의 투표할 원로가 없어서 스크럼블 안건을 신청할수 없습니다.
#define LSID_AUTO002426							0x000009E6		// 대상 길드가 이미 스크럼블 중이어서 스크럼블 안건을 신청할수 없습니다.
#define LSID_AUTO002427							0x000009E7		// 대상 길드는 이미 다른 길드에게 스크럼블을 신청한 상태 입니다.
#define LSID_AUTO002428							0x000009E8		// 대상 길드는 이미 다른 길드에게 스크럼블 신청을 받은 상태 입니다.
#define LSID_AUTO002429							0x000009E9		// 대상 길드는 이미 다른 길드와의 스크럼블이 결정된 상태입니다.
#define LSID_AUTO002430							0x000009EA		// 스크럼블을 신청한 참가 인원수가 최대 참가 인원수를 초과하여 안건을 신청할 수 없습니다.
#define LSID_AUTO002431							0x000009EB		// 당신의 게임시간은 %d일 남았습니다.
#define LSID_AUTO002432							0x000009EC		// 당신의 게임시간은 %d시간 남았습니다.
#define LSID_AUTO002433							0x000009ED		// 당신의 게임시간은 %d분 남았습니다. 빨리 충전해 주십이오. 게임충전주소 : %s
#define LSID_AUTO002434							0x000009EE		// 당신의 게임시간은 %d초 남았습니다.
#define LSID_AUTO002435							0x000009EF		// 프리미엄 캠페인 아이템 교환
#define LSID_AUTO002436							0x000009F0		// 던젼 게이트 생성
#define LSID_AUTO002437							0x000009F1		// 무인 시추기 관리
#define LSID_AUTO002438							0x000009F2		// 아이템 조합에 실패하였습니다.
#define LSID_AUTO002439							0x000009F3		// 스크럼블 진행 맵
#define LSID_AUTO002440							0x000009F4		// 벨라토 HQ
#define LSID_AUTO002441							0x000009F5		// 코라 HQ
#define LSID_AUTO002442							0x000009F6		// 아크레시아 HQ
#define LSID_AUTO002443							0x000009F7		// 10명
#define LSID_AUTO002444							0x000009F8		// 20명
#define LSID_AUTO002445							0x000009F9		// 30명
#define LSID_AUTO002446							0x000009FA		// 40명
#define LSID_AUTO002447							0x000009FB		// 50명
#define LSID_AUTO002448							0x000009FC		// 스크럼블참여인원
#define LSID_AUTO002449							0x000009FD		// 게이트 관리인
#define LSID_AUTO002450							0x000009FE		// 게이트 생성기 가동
#define LSID_AUTO002451							0x000009FF		// [대]
#define LSID_AUTO002452							0x00000A00		// 모든 내성 %s
#define LSID_AUTO002453							0x00000A01		// HP 최대량 %s
#define LSID_AUTO002454							0x00000A02		// 저주 포스 지속시간 %s
#define LSID_AUTO002455							0x00000A03		// 맵 채팅은 레벨 %d 이상 가능합니다.
#define LSID_AUTO002456							0x00000A04		// 맵 채팅 허용 가능할 때까지 %d 초 남았습니다.
#define LSID_AUTO002457							0x00000A05		// 포탈 이동 실패 : %d레벨 이상의 플레이어만 이동 가능합니다.
#define LSID_AUTO002458							0x00000A06		// 해당 위치에 아이템이 존재합니다.
#define LSID_AUTO002459							0x00000A07		// 해당 숙련도의 포스는 아직 사용할 수 없습니다.
#define LSID_AUTO002460							0x00000A08		// 차단할 캐릭터 이름을 입력하세요
#define LSID_AUTO002461							0x00000A09		// 회복을 도와주는 아이템이 아닙니다.
#define LSID_AUTO002462							0x00000A0A		// 충전 최소 금액은 %d%s 이상이어야 합니다.
#define LSID_AUTO002463							0x00000A0B		// 배터리 잔량이 부족합니다. 충전해 주시기 바랍니다.
#define LSID_AUTO002464							0x00000A0C		// 무인 시추기가 정상적으로 멈추었습니다.
#define LSID_AUTO002465							0x00000A0D		// 무인 시추기 배터리가 방전되었습니다.
#define LSID_AUTO002466							0x00000A0E		// 충전 비용이 부족합니다.
#define LSID_AUTO002467							0x00000A0F		// 스크럼블 비용
#define LSID_AUTO002468							0x00000A10		// 스크럼블 비용 %s가 재입금 되었습니다.
#define LSID_AUTO002469							0x00000A11		// 스크럼블 비용으로 %s를 지출 했습니다.
#define LSID_AUTO002470							0x00000A12		// 스크럼블 보상
#define LSID_AUTO002471							0x00000A13		// 스크럼블 보상으로 %s 가 입금 되었습니다.
#define LSID_AUTO002472							0x00000A14		// 시추기 충전
#define LSID_AUTO002473							0x00000A15		// 무인 시추기 충전 비용으로 %s를 지출했습니다.
#define LSID_AUTO002474							0x00000A16		// %s 길드와 길드 스크럼블이 결정 되었습니다.
#define LSID_AUTO002475							0x00000A17		// %s 길드가 스크럼블 신청을 거부했습니다.
#define LSID_AUTO002476							0x00000A18		// 그라비티 스톤 소유 시간 제한으로 %d초 뒤 다시 그라비티 스톤이 리젠됩니다.
#define LSID_AUTO002477							0x00000A19		// 유닛 탑승 상태에서는 그라비티 스톤을 소지할수 없습니다.
#define LSID_AUTO002478							0x00000A1A		// 대상 길드가 길드전 비용이 부족하여 스크럼블 안건을 신청할수 없습니다.
#define LSID_AUTO002479							0x00000A1B		// 이미 다른길드에게 스크럼블 신청을 한 상태 입니다.
#define LSID_AUTO002480							0x00000A1C		// 현재 다른길드에게 스크럼블 신청을 받고 있습니다.
#define LSID_AUTO002481							0x00000A1D		// 이미 다른 길드와의 스크럼블이 결정되었습니다.
#define LSID_AUTO002482							0x00000A1E		// 해당 안건을 제시할 수 있는 시간이 아닙니다.
#define LSID_AUTO002483							0x00000A1F		// 서버가 분주하니 잠시후에 재시도해주십시오.
#define LSID_AUTO002484							0x00000A20		// 세율 정보
#define LSID_AUTO002485							0x00000A21		// 콜드론 화산지역 이동
#define LSID_AUTO002486							0x00000A22		// 무인 거래기 세율 정보
#define LSID_AUTO002487							0x00000A23		// 보유길드
#define LSID_AUTO002488							0x00000A24		// 세율
#define LSID_AUTO002489							0x00000A25		// 위의 아이템이 소실되었습니다.
#define LSID_AUTO002490							0x00000A26		// 계속
#define LSID_AUTO002491							0x00000A27		// 아이템을 선택해 주십시오
#define LSID_AUTO002492							0x00000A28		// 총전적
#define LSID_AUTO002493							0x00000A29		// %d승 %d패 %d무
#define LSID_AUTO002494							0x00000A2A		// 통산 길드전 전적
#define LSID_AUTO002495							0x00000A2B		// 현재 배터리 량
#define LSID_AUTO002496							0x00000A2C		// 배터리 충전 비용
#define LSID_AUTO002497							0x00000A2D		// 배터리 충전량
#define LSID_AUTO002498							0x00000A2E		// 시추기 작동
#define LSID_AUTO002499							0x00000A2F		// 중 지
#define LSID_AUTO002500							0x00000A30		// 배터리 충전
#define LSID_AUTO002501							0x00000A31		// 관리
#define LSID_AUTO002502							0x00000A32		// 잔여 배터리량 없음
#define LSID_AUTO002503							0x00000A33		//  남음
#define LSID_AUTO002504							0x00000A34		// 1분 미만
#define LSID_AUTO002505							0x00000A35		// %d시간 %d분
#define LSID_AUTO002506							0x00000A36		// 현재 배터리 충전 량
#define LSID_AUTO002507							0x00000A37		// 무인 채굴기 관리
#define LSID_AUTO002508							0x00000A38		// 광물 보관함
#define LSID_AUTO002509							0x00000A39		// 장비를 착용하기 위해서는 등급이 %s이거나 그 이상이어야 합니다.
#define LSID_AUTO002510							0x00000A3A		// 증가
#define LSID_AUTO002511							0x00000A3B		// 감소
#define LSID_AUTO002512							0x00000A3C		// 방패 관통 확률 %s
#define LSID_AUTO002513							0x00000A3D		// 원거리 공격 딜레이 %s(초)
#define LSID_AUTO002514							0x00000A3E		// 스킬 공격 딜레이 %s(초)
#define LSID_AUTO002515							0x00000A3F		// 포스 공격 딜레이 %s(초)
#define LSID_AUTO002516							0x00000A40		// 채굴함을 개설 하시려면  %d %s가 소요됩니다. 개설하겠습니까?
#define LSID_AUTO002517							0x00000A41		// 채굴 관련 : 무인 채굴기가 설치된 상태에서는 일반 채굴기를 장착할 수 없습니다
#define LSID_AUTO002518							0x00000A42		// 정말로 회수하시겠습니까?
#define LSID_AUTO002519							0x00000A43		// 전투 모드에서는 공을 차실 수 없습니다.
#define LSID_AUTO002520							0x00000A44		// 이미 공을 차고 있습니다.
#define LSID_AUTO002521							0x00000A45		// 시즈킷이 장착된 상태에선 공을 차실 수 없습니다.
#define LSID_AUTO002522							0x00000A46		// 해당 슬롯에 배터리가 존재합니다.
#define LSID_AUTO002523							0x00000A47		// 비어 있는 배터리 슬롯이 존재하지 않습니다.
#define LSID_AUTO002524							0x00000A48		// %s 종족화폐가 조합 수수료로 필요합니다.<br>계속 하시겠습니까?
#define LSID_AUTO002525							0x00000A49		// %s %s님에게 PK 되었습니다.
#define LSID_AUTO002526							0x00000A4A		// 서클 존 스크럼블에서 패배 하였습니다. 기여도 %d을 얻었습니다.
#define LSID_AUTO002527							0x00000A4B		// 서클 존 스크럼블에서 승리를 쟁취하였습니다. 기여도 %d을 얻었습니다.
#define LSID_AUTO002528							0x00000A4C		// 서클 존 스크럼블에서 무승부를 하였습니다. 기여도 %d을 얻었습니다.
#define LSID_AUTO002529							0x00000A4D		// 길드 유지금이 모자릅니다.
#define LSID_AUTO002530							0x00000A4E		// 채굴 관련 : 무인 채굴기 회수중입니다.
#define LSID_AUTO002531							0x00000A4F		// 채굴 관련 : 무인 채굴기 설치중입니다.
#define LSID_AUTO002532							0x00000A50		// 배터리를 장착해 주시기 바랍니다.
#define LSID_AUTO002533							0x00000A51		// 챔피온
#define LSID_AUTO002534							0x00000A52		// 엘리트
#define LSID_AUTO002535							0x00000A53		// 히어로
#define LSID_AUTO002536							0x00000A54		// 죄송합니다. 한 계정의 경우 동일한 한 종족의 캐릭터만 선택할 수 있습니다.다시 동일한 종족의 캐릭터를 선택해 주십시오.
#define LSID_AUTO002537							0x00000A55		// 아이템 장착 실패 : 석화상태
#define LSID_AUTO002538							0x00000A56		// 아이템 장착 실패 : 계급이 낮음
#define LSID_AUTO002539							0x00000A57		// 파티 보너스 %.3f를 얻었습니다.
#define LSID_AUTO002540							0x00000A58		// 채굴 관련 : 소유자 정보가 다릅니다.
#define LSID_AUTO002541							0x00000A59		// 채굴 관련 : 보관함 생성 실패
#define LSID_AUTO002542							0x00000A5A		// 채굴 관련 : 보관함이 존재하지 않습니다. 보관함을 생성해 주시기 바랍니다.
#define LSID_AUTO002543							0x00000A5B		// 채굴 관련 : 비용이 모자랍니다.
#define LSID_AUTO002544							0x00000A5C		// 채굴 관련 : 무인 채굴기 설치 실패
#define LSID_AUTO002545							0x00000A5D		// 채굴 관련 : 무인 채굴기 회수 실패
#define LSID_AUTO002546							0x00000A5E		// 채굴 관련 : 배터리 장착 실패
#define LSID_AUTO002547							0x00000A5F		// 채굴 관련 : 오어를 인벤토리로 옮기는 데 실패했습니다.
#define LSID_AUTO002548							0x00000A60		// 채굴 관련 : 무인 채굴기가 설치 된 상태에서는 채굴하실 수 없습니다.
#define LSID_AUTO002549							0x00000A61		// 채굴 관련 : 일반 채굴기를 장착한 상태에서는 무인 채굴기를 설치할 수 없습니다
#define LSID_AUTO002550							0x00000A62		// %s의 %s
#define LSID_AUTO002551							0x00000A63		// 무인 채굴기
#define LSID_AUTO002552							0x00000A64		// 설치된 채굴기가 존재하지 않습니다.
#define LSID_AUTO002553							0x00000A65		// 채굴 관련 : 채굴기가 파괴되었습니다.
#define LSID_AUTO002554							0x00000A66		// 배터리 부족으로 채굴이 중지 되었습니다.
#define LSID_AUTO002555							0x00000A67		// 무인 채굴 보관함이 가득 찼습니다.
#define LSID_AUTO002556							0x00000A68		// 주위에 무인 채굴기가 존재하지 않습니다.
#define LSID_AUTO002557							0x00000A69		// 무인 채굴기가 공격 받고 있습니다.
#define LSID_AUTO002558							0x00000A6A		// %d분 뒤에 %s길드와 %s길드의 스크럼블이 시작됩니다.
#define LSID_AUTO002559							0x00000A6B		// %s 길드와 %s 길드간의 스크럼블에서 %s 길드가 승리하였습니다.
#define LSID_AUTO002560							0x00000A6C		// %s 길드와 %s 길드간의 스크럼블은 무승부입니다.
#define LSID_AUTO002561							0x00000A6D		// 스크린 샷 찍기 실패
#define LSID_AUTO002562							0x00000A6E		// %d시간
#define LSID_AUTO002563							0x00000A6F		// 채굴량
#define LSID_AUTO002564							0x00000A70		// %d칸 / 40칸
#define LSID_AUTO002565							0x00000A71		// 배터리 잔량
#define LSID_AUTO002566							0x00000A72		// 무인 채굴기 보관함
#define LSID_AUTO002567							0x00000A73		// 소유 길드:
#define LSID_AUTO002568							0x00000A74		// 현재 무인 판매기 세율 : %d %%
#define LSID_AUTO002569							0x00000A75		// 승점
#define LSID_AUTO002570							0x00000A76		// 명예 포인트
#define LSID_AUTO002571							0x00000A77		// 명예포인트 순위
#define LSID_AUTO002572							0x00000A78		// 숙련도메세지
#define LSID_AUTO002573							0x00000A79		// 슬롯 1
#define LSID_AUTO002574							0x00000A7A		// 슬롯 2
#define LSID_AUTO002575							0x00000A7B		// HP최대량 %s / %d초
#define LSID_AUTO002576							0x00000A7C		// %s %s / %d초
#define LSID_AUTO002577							0x00000A7D		// 회피 %s / %d초
#define LSID_AUTO002578							0x00000A7E		// 스킬 공격 딜레이 %s / %d초
#define LSID_AUTO002579							0x00000A7F		// 크리티컬 확률 %s / %d초
#define LSID_AUTO002580							0x00000A80		// %s / %d초
#define LSID_AUTO002581							0x00000A81		// 버프 캔슬 확률 %s
#define LSID_AUTO002582							0x00000A82		// 선출
#define LSID_AUTO002583							0x00000A83		// 전체 채팅을 하려면 %d 레벨이 되어야 합니다.
#define LSID_AUTO002584							0x00000A84		// 전체 채팅을 하려면 %d 종족머니가 필요합니다.
#define LSID_AUTO002585							0x00000A85		// 전체 채팅은 %d초 후 사용가능 합니다.
#define LSID_AUTO002586							0x00000A86		// 자신에게 파티 요청을 할 수 없습니다.
#define LSID_AUTO002587							0x00000A87		// 올바른 발사물이 아닙니다.
#define LSID_AUTO002588							0x00000A88		// 길드룸에서는 귀환 아이템을 사용할 수 없습니다.
#define LSID_AUTO002589							0x00000A89		// 여객선 내부에서는 게이트 스톤 아이템을 사용할 수 없습니다.
#define LSID_AUTO002590							0x00000A8A		// 보다 넓은 지역에서 게이트 스톤을 생성하십시요.
#define LSID_AUTO002591							0x00000A8B		// 레이더 아이템 사용을 성공하였습니다.
#define LSID_AUTO002592							0x00000A8C		// 비어있는 소켓이 존재하지 않습니다.
#define LSID_AUTO002593							0x00000A8D		// 이미 조합결과물이 있어 조합이 실패했습니다.<br>조합 확인 처리 후 다시 시도하시기 바랍니다.
#define LSID_AUTO002594							0x00000A8E		// 스텔스 상태에서는 소환하실 수 없습니다.
#define LSID_AUTO002595							0x00000A8F		// 부스터 상태에서는 스킬/포스를 사용하실 수 없습니다.
#define LSID_AUTO002596							0x00000A90		// 그래비티 스톤을 소지한 상태에서는 부스터를 사용하실 수 없습니다.
#define LSID_AUTO002597							0x00000A91		// 전투 모드에서는 사용하실 수 없습니다.
#define LSID_AUTO002598							0x00000A92		// 새 쪽지가 도착했습니다. 내용을 확인하시겠습니까?
#define LSID_AUTO002599							0x00000A93		// 읽지않은 쪽지가 있습니다. 리스트를 확인하시겠습니까?
#define LSID_AUTO002600							0x00000A94		// 반송된 쪽지가 있습니다. 내용을 확인하시겠습니까?
#define LSID_AUTO002601							0x00000A95		// %s님이 파티에 원거리 초대 하였습니다. 합류 하시겠습니까?
#define LSID_AUTO002602							0x00000A96		// 홀리 멘탈 스캐너 획득
#define LSID_AUTO002603							0x00000A97		// 홀리 멘탈 스캐너를 획득하라.
#define LSID_AUTO002604							0x00000A98		// 캐쉬가 부족하여 아이템을 구입할 수 없습니다.
#define LSID_AUTO002605							0x00000A99		// 가격 : %d Cash<br>
#define LSID_AUTO002606							0x00000A9A		// 선택개수 : %d개<br>
#define LSID_AUTO002607							0x00000A9B		// 합계가격 : %d Cash<br>
#define LSID_AUTO002608							0x00000A9C		// 거래여부 : %s<br>
#define LSID_AUTO002609							0x00000A9D		// 구분 : %s<br>
#define LSID_AUTO002610							0x00000A9E		// 정량아이템
#define LSID_AUTO002611							0x00000A9F		// 정액아이템
#define LSID_AUTO002612							0x00000AA0		// 대여시간 : %s<br>
#define LSID_AUTO002613							0x00000AA1		// 아이템 구입 실패 : 상점에 남아있는 아이템의 수량보다 많습니다.
#define LSID_AUTO002614							0x00000AA2		// 서버와 아이템 기준 가격이 달라 트레이드를 실패했습니다.
#define LSID_AUTO002615							0x00000AA3		// 아이템 구입 실패 : 상점에 남아있는 아이템의 수량이 부족합니다.
#define LSID_AUTO002616							0x00000AA4		// 자신이 등록한 아이템은 구입할 수 없습니다.
#define LSID_AUTO002617							0x00000AA5		// 아이템이 없다(8)
#define LSID_AUTO002618							0x00000AA6		// 개발자 및 운영자와 거래 불가(35)
#define LSID_AUTO002619							0x00000AA7		// 아이템 쿼리 실패(38)
#define LSID_AUTO002620							0x00000AA8		// 등록 해지 아이템(41)
#define LSID_AUTO002621							0x00000AA9		// 구입 하려는 물품의 가격이 바뀌었습니다.
#define LSID_AUTO002622							0x00000AAA		// 아이템이 없음(45)
#define LSID_AUTO002623							0x00000AAB		// 요청한 아이템이 로컬상에 판매 정보가 없다(37)
#define LSID_AUTO002624							0x00000AAC		// 판매자의 소지금 초과로 구입에 실패 했습니다.
#define LSID_AUTO002625							0x00000AAD		// 무인거래기 내부 에러(99)
#define LSID_AUTO002626							0x00000AAE		// DB 판매정보 Select를 실패 했습니다.
#define LSID_AUTO002627							0x00000AAF		// 요청한 아이템이 DB상에 판매 정보가 없습니다.
#define LSID_AUTO002628							0x00000AB0		// DB 판매 결과정보 update를 실패 했습니다.
#define LSID_AUTO002629							0x00000AB1		// 무인거래기 관련 : 알 수 없는 에러
#define LSID_AUTO002630							0x00000AB2		// 전리품
#define LSID_AUTO002631							0x00000AB3		// 어빌리티
#define LSID_AUTO002632							0x00000AB4		// 은촉매제
#define LSID_AUTO002633							0x00000AB5		// 금촉매제
#define LSID_AUTO002634							0x00000AB6		// 블랙 엑셀시어
#define LSID_AUTO002635							0x00000AB7		// 레드 엑셀시어
#define LSID_AUTO002636							0x00000AB8		// 블루 엑셀시어
#define LSID_AUTO002637							0x00000AB9		// 그린 엑셀시어
#define LSID_AUTO002638							0x00000ABA		// 옐로우 엑셀시어
#define LSID_AUTO002639							0x00000ABB		// 퍼플 엑셀시어
#define LSID_AUTO002640							0x00000ABC		// 화이트 엑셀시어
#define LSID_AUTO002641							0x00000ABD		// 브라운 엑셀시어
#define LSID_AUTO002642							0x00000ABE		// 올리브 엑셀시어
#define LSID_AUTO002643							0x00000ABF		// 네이비 엑셀시어
#define LSID_AUTO002644							0x00000AC0		// %s님이 접속하셨습니다.
#define LSID_AUTO002645							0x00000AC1		// %s님이 접속을 종료하셨습니다.
#define LSID_AUTO002646							0x00000AC2		// 스탠다드형 길드룸
#define LSID_AUTO002647							0x00000AC3		// 스페셜형 길드룸
#define LSID_AUTO002648							0x00000AC4		// 길드룸을 사용하실 자격이 아닙니다.
#define LSID_AUTO002649							0x00000AC5		// (%s%d일 대여 %s%s)<br>
#define LSID_AUTO002650							0x00000AC6		// 현재 대여중인 길드룸이 없습니다.
#define LSID_AUTO002651							0x00000AC7		// 대여에는 %s%s가 필요합니다.
#define LSID_AUTO002652							0x00000AC8		// 대여하시겠습니까?
#define LSID_AUTO002653							0x00000AC9		// %s에 입장하시겠습니까?
#define LSID_AUTO002654							0x00000ACA		// 길드룸 대여 시간이 %s 남았습니다.
#define LSID_AUTO002655							0x00000ACB		// 클래스 리파인 이벤트 기간이 아닙니다.
#define LSID_AUTO002656							0x00000ACC		// 더 이상 리파인 이벤트에 참여 할 수 없습니다.
#define LSID_AUTO002657							0x00000ACD		// 쪽지 관련 : 심각한 오류입니다.
#define LSID_AUTO002658							0x00000ACE		// 무인거래기에 등록된 아이템은 보낼수 없습니다.
#define LSID_AUTO002659							0x00000ACF		// 거래가 불가능한 아이템입니다.
#define LSID_AUTO002660							0x00000AD0		// 현재 기갑장비는 거래가 불가능합니다.
#define LSID_AUTO002661							0x00000AD1		// 티켓은 보낼수 없습니다.
#define LSID_AUTO002662							0x00000AD2		// 맵 아이템은 보낼수 없습니다.
#define LSID_AUTO002663							0x00000AD3		// 쪽지 관련 : 우편함 여유 공간을 확인해 주세요.
#define LSID_AUTO002664							0x00000AD4		// 쪽지 관련 : 문자열이 잘못 입력 되었습니다.
#define LSID_AUTO002665							0x00000AD5		// 편지가 정상적으로 전송되었습니다.
#define LSID_AUTO002666							0x00000AD6		// 편지가 전송되지 못했습니다.
#define LSID_AUTO002667							0x00000AD7		// 쪽지 관련 : 아이템 관련 에러.
#define LSID_AUTO002668							0x00000AD8		// 선택된 %d%%의 세율은 오는 자정에 적용됩니다.
#define LSID_AUTO002669							0x00000AD9		// 선택한 세율: %d
#define LSID_AUTO002670							0x00000ADA		// 사용하시려면 메시지를 잠그셔야 합니다.
#define LSID_AUTO002671							0x00000ADB		// 클래스 리파인 이벤트 정보 읽기 실패
#define LSID_AUTO002672							0x00000ADC		// 최소
#define LSID_AUTO002673							0x00000ADD		// 최대
#define LSID_AUTO002674							0x00000ADE		// 현재 이펙트 옵션은 %s로 설정되었습니다.
#define LSID_AUTO002675							0x00000ADF		// 단축벨트 사용이 숫자키로 변경되었습니다.
#define LSID_AUTO002676							0x00000AE0		// 단축벨트 사용이 펑션키로 변경되었습니다.
#define LSID_AUTO002677							0x00000AE1		// 원거리 파티 초대 요청을 하였습니다.
#define LSID_AUTO002678							0x00000AE2		// 초대하려는 대상이 없거나 오프라인 상태입니다.
#define LSID_AUTO002679							0x00000AE3		// 다른 종족은 파티에 초대할 수 없습니다.
#define LSID_AUTO002680							0x00000AE4		// 초대하려는 상대가 파티를 할 수 없는 상태입니다.
#define LSID_AUTO002681							0x00000AE5		// 초대하려는 유저가 파티 거부 상태입니다.
#define LSID_AUTO002682							0x00000AE6		// 현재 초대를 할 수 없는 상태입니다.
#define LSID_AUTO002683							0x00000AE7		// 초대에 필요한 아이템이 없습니다.
#define LSID_AUTO002684							0x00000AE8		// 초대한 유저가 파티가입을 거절하였습니다.
#define LSID_AUTO002685							0x00000AE9		// 원거리 파티 초대 에러 : 알 수 없는 에러 (%d)
#define LSID_AUTO002686							0x00000AEA		// 카오스 모드 시간이 %d%% 미만 일때만 큐어 가능 합니다.
#define LSID_AUTO002687							0x00000AEB		// 아이템으로 클래스 리파인에 실패 했습니다.
#define LSID_AUTO002688							0x00000AEC		// 타겟이 잘못되었습니다.
#define LSID_AUTO002689							0x00000AED		// 대상을 선택하지 않았거나 사용거리에서 벗어났습니다.
#define LSID_AUTO002690							0x00000AEE		// 대상은 솔로가 아니므로 당신의 눈도장을 받을수 없습니다.
#define LSID_AUTO002691							0x00000AEF		// 포션 관련 알 수 없는 에러 : %d
#define LSID_AUTO002692							0x00000AF0		// 아이템 루팅 실패 : 대여 시간이 달라 겹칠 수 없습니다.
#define LSID_AUTO002693							0x00000AF1		// 대여 아이템(%s)이 기간 만료로 삭제되었습니다.
#define LSID_AUTO002694							0x00000AF2		// 일반 아이템(%s)이 삭제되었습니다.
#define LSID_AUTO002695							0x00000AF3		// %s님께서 %s에 %d단계 업그레이드 성공하셨습니다.
#define LSID_AUTO002696							0x00000AF4		// %s님께서 %s를 습득하셨습니다.
#define LSID_AUTO002697							0x00000AF5		// 레이더 아이템을 가지고있지 않습니다.
#define LSID_AUTO002698							0x00000AF6		// 레이더 아이템이 아닙니다.
#define LSID_AUTO002699							0x00000AF7		// 죽은 상태에서는 레이더 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002700							0x00000AF8		// Lock 상태에서는 레이더 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002701							0x00000AF9		// 석화 상태에서는 레이더 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002702							0x00000AFA		// 유닛에 탐승한 상태에서는 레이더 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002703							0x00000AFB		// 시즈 모드 상태에서는 레이더 아이템을 사용하실 수 없습니다.
#define LSID_AUTO002704							0x00000AFC		// 지금은 위성에 접속할수 없습니다. ( 대기시간 %d초 )
#define LSID_AUTO002705							0x00000AFD		// 위성 접속에 실패하였습니다.
#define LSID_AUTO002706							0x00000AFE		// 레이더 아이템 오류( 데이터는 항상 지속시간이 딜레이보다 작아야한다. )
#define LSID_AUTO002707							0x00000AFF		// : 종족장
#define LSID_AUTO002708							0x00000B00		// : 부족장
#define LSID_AUTO002709							0x00000B01		// : 솔루스 소유
#define LSID_AUTO002710							0x00000B02		// : 아나카데 소유
#define LSID_AUTO002711							0x00000B03		// : 하람 소유
#define LSID_AUTO002712							0x00000B04		// : 누메러스 소유
#define LSID_AUTO002713							0x00000B05		// : AC-213 소유
#define LSID_AUTO002714							0x00000B06		// : AC-117 소유
#define LSID_AUTO002715							0x00000B07		// 족장 획득 금액:
#define LSID_AUTO002716							0x00000B08		//  종족 타겟으로 선택되었습니다.
#define LSID_AUTO002717							0x00000B09		// 맵 포인팅 : 사용 권한이 없습니다.
#define LSID_AUTO002718							0x00000B0A		// 맵 포인팅 : 사용 가능 시간이 %d 초 남았습니다.
#define LSID_AUTO002719							0x00000B0B		// 맵 포인팅 : 광산 맵이 아닙니다.
#define LSID_AUTO002720							0x00000B0C		// 맵 포인팅 : 크리쟁 중이 아닙니다.
#define LSID_AUTO002721							0x00000B0D		// 맵 포인팅 : 잘못된 위치값 입니다.
#define LSID_AUTO002722							0x00000B0E		// 맵 포인팅 : 알수 없는 에러.
#define LSID_AUTO002723							0x00000B0F		// 아이템 정리 관련 : 대여 시간이 달라 겹칠 수 없다.
#define LSID_AUTO002724							0x00000B10		// 창고 관련 : 대여 시간이 달라 겹칠 수 없다.
#define LSID_AUTO002725							0x00000B11		// %s를 구입 했습니다.
#define LSID_AUTO002726							0x00000B12		// 캐쉬 관련 : DB 에러
#define LSID_AUTO002727							0x00000B13		// 캐쉬 관련 : 계정 오류
#define LSID_AUTO002728							0x00000B14		// 캐쉬 관련 : 게임코드 오류
#define LSID_AUTO002729							0x00000B15		// 캐쉬 관련 : 존재하지 않는 아이템입니다.
#define LSID_AUTO002730							0x00000B16		// 캐쉬 관련 : 아이템 가격이 다릅니다.
#define LSID_AUTO002731							0x00000B17		// 캐쉬 관련 : 아이템 개수가 다릅니다.
#define LSID_AUTO002732							0x00000B18		// 캐쉬 관련 : 할인율 오류
#define LSID_AUTO002733							0x00000B19		// 캐쉬 관련 : 아이템 시리얼 오류
#define LSID_AUTO002734							0x00000B1A		// 캐쉬 관련 : 잘못 된 서버 이름
#define LSID_AUTO002735							0x00000B1B		// 캐쉬 관련 : 잘못 된 캐릭터 이름
#define LSID_AUTO002736							0x00000B1C		// 캐쉬 관련 : 상품목록 인덱스가 다릅니다.
#define LSID_AUTO002737							0x00000B1D		// 캐쉬 관련 : 사용할 수 없는 아이템입니다.
#define LSID_AUTO002738							0x00000B1E		// 캐쉬 관련 ; 캐쉬 포인트가 부족합니다.
#define LSID_AUTO002739							0x00000B1F		// 캐쉬 관련 : 아이템 지급 후 캐쉬 롤백 실패
#define LSID_AUTO002740							0x00000B20		// 캐쉬 관련 : 아이템 구입 실패
#define LSID_AUTO002741							0x00000B21		// 캐쉬 관련 : 인벤토리에 빈 공간이 부족합니다.
#define LSID_AUTO002742							0x00000B22		// 캐쉬 관련 : 알수 없는 에러 %d
#define LSID_AUTO002743							0x00000B23		// [아이템 판매 성공]<br>
#define LSID_AUTO002744							0x00000B24		// %s%d . %s ( %d개 )
#define LSID_AUTO002745							0x00000B25		// %s<br>판매된 금액 : %s%s
#define LSID_AUTO002746							0x00000B26		// %s<br>판매시 세금 : %s<br>
#define LSID_AUTO002747							0x00000B27		// %s<br>판매한 총금액 : %s<br>
#define LSID_AUTO002748							0x00000B28		// %s<br>판매시 총세금 : %s<br>
#define LSID_AUTO002749							0x00000B29		// %s<br>현재 인벤토리의 총달란트 : %s<br>
#define LSID_AUTO002750							0x00000B2A		// [등록 물품 해지 통보]<br>
#define LSID_AUTO002751							0x00000B2B		// 자동거래 상점이 아닙니다.
#define LSID_AUTO002752							0x00000B2C		// 아바타와 가까운거리의 상점이 아닙니다.
#define LSID_AUTO002753							0x00000B2D		// 다루지 않는 아이템입니다.
#define LSID_AUTO002754							0x00000B2E		// 디스플레이 버젼이 다릅니다.
#define LSID_AUTO002755							0x00000B2F		// 이미 본 것 입니다.
#define LSID_AUTO002756							0x00000B30		// 동시 거래 가능수를 초과 했습니다.
#define LSID_AUTO002757							0x00000B31		// 등록 비용이 부족합니다.
#define LSID_AUTO002758							0x00000B32		// 아이템이 없습니다.
#define LSID_AUTO002759							0x00000B33		// 아이템이 실제와 다릅니다.
#define LSID_AUTO002760							0x00000B34		// 같은 버전입니다.
#define LSID_AUTO002761							0x00000B35		// 버전을 초과했습니다.
#define LSID_AUTO002762							0x00000B36		// 대기중인 아이템이 꽉찼습니다.
#define LSID_AUTO002763							0x00000B37		// 수량을 덜 임시 인벤토리 공간이 부족합니다.
#define LSID_AUTO002764							0x00000B38		// 등록 아이템이 아닙니다.
#define LSID_AUTO002765							0x00000B39		// 락 걸린 아이템입니다.
#define LSID_AUTO002766							0x00000B3A		// 페이지수를 초과했습니다.
#define LSID_AUTO002767							0x00000B3B		// 올릴때 수량을 초과했습니다.
#define LSID_AUTO002768							0x00000B3C		// 상품리스트 인덱스를 초과했습니다.
#define LSID_AUTO002769							0x00000B3D		// 정렬에 실패했습니다.
#define LSID_AUTO002770							0x00000B3E		// 지난 번 접속시 등록 했던 아이템을 재등록 하기 전입니다.
#define LSID_AUTO002771							0x00000B3F		// 개발자는 등록하지 못합니다.
#define LSID_AUTO002772							0x00000B40		// 파는 가격 등록이 가능한 최대치를 초과했습니다.
#define LSID_AUTO002773							0x00000B41		//  포스리버에 대응하는 포스 데이타가 없습니다.
#define LSID_AUTO002774							0x00000B42		// DB 레코드에 등록을 실패했습니다.
#define LSID_AUTO002775							0x00000B43		// 요청한 아이템 Serial 이나 등록 Serial 값이 존재하지 않습니다.
#define LSID_AUTO002776							0x00000B44		// DB 업데이트 완료 후 서버 로컬 상에 등록을 실패 했습니다.
#define LSID_AUTO002777							0x00000B45		// DB 레코드에 가격 변경 실패 했습니다.(해당 레코드가 존재 하지 않습니다.)
#define LSID_AUTO002778							0x00000B46		// DB 업데이트 완료 후 서버 로컬 상의 등록 해지가 실패 했습니다.
#define LSID_AUTO002779							0x00000B47		// DB 레코드에 등록 해지가 실패 했습니다.
#define LSID_AUTO002780							0x00000B48		// DB 판매 결과정보 되돌리기 update를 실패 했습니다.( no date or db error )
#define LSID_AUTO002781							0x00000B49		// 요청한 아이템이 로컬상에 판매 정보가 없습니다.
#define LSID_AUTO002782							0x00000B4A		// 요청한 아이템의 상태값을 얻어오는 쿼리가 실패 했습니다.
#define LSID_AUTO002783							0x00000B4B		// 이미 팔린 물품입니다.
#define LSID_AUTO002784							0x00000B4C		// 등록 해지된 아이템입니다.
#define LSID_AUTO002785							0x00000B4D		// 인벤에 공간이 부족합니다.
#define LSID_AUTO002786							0x00000B4E		// 아이템을 구입할 돈이 부족합니다.
#define LSID_AUTO002787							0x00000B4F		// 요청한 아이템이 없습니다
#define LSID_AUTO002788							0x00000B50		// 본인이 해지 과정 중 등록한 DB 아이템 정보가 존재하지 않습니다.
#define LSID_AUTO002789							0x00000B51		// 검색 DB 쿼리 과정 중 DB Task 매니져 내부 실패
#define LSID_AUTO002790							0x00000B52		// 검색 DB 쿼리 과정 중 전체 개수 DB 쿼리 실패
#define LSID_AUTO002791							0x00000B53		// 등록된 물품이 없습니다.
#define LSID_AUTO002792							0x00000B54		// 요청한 페이지가 등록되어 있는 페이지 개수를 넘습니다.
#define LSID_AUTO002793							0x00000B55		// 검색 DB 쿼리 과정 중 페이지 DB 쿼리 실패
#define LSID_AUTO002794							0x00000B56		// 검색 DB 쿼리 과정 중 페이지 결과값 NO DATA 입니다.
#define LSID_AUTO002795							0x00000B57		// 무인거래기 요청한 작업을 수행 중입니다.
#define LSID_AUTO002796							0x00000B58		// 무인 거래기 내부 에러
#define LSID_AUTO002797							0x00000B59		// 등록시간 경과 해지 과정 중 DB 상태 업데이트 실패 했습니다.
#define LSID_AUTO002798							0x00000B5A		// 등록시간 경과 해지 과정 중 등록된 DB 아이템 정보 가져오기가 실패 했습니다.
#define LSID_AUTO002799							0x00000B5B		// 등록시간 경과 해지 과정 중 등록된 DB 아이템 정보가 존재하지 않습니다.
#define LSID_AUTO002800							0x00000B5C		// 본인이 해지 과정 중 등록된 DB 아이템 정보 가져오기 실패 했습니다.
#define LSID_AUTO002801							0x00000B5D		// 요청한 분류의 버전 얻어오기가 실패 했습니다.
#define LSID_AUTO002802							0x00000B5E		// 요청한 분류의 버전이 증가 되었습니다.
#define LSID_AUTO002803							0x00000B5F		// 몬스터의 저주내성으로 인하여 시전 실패.
#define LSID_AUTO002804							0x00000B60		// 몬스터의 높은 저주내성으로 인하여 시전 실패.
#define LSID_AUTO002805							0x00000B61		// 몬스터의 매우 높은 저주내성으로 인하여 시전 실패.
#define LSID_AUTO002806							0x00000B62		// 틀린무기입니다.
#define LSID_AUTO002807							0x00000B63		// 부스터 상태에서는 공격하실 수 없습니다.
#define LSID_AUTO002808							0x00000B64		// 쪽지에 첨부된 아이템을 인벤토리 %d번째 가방 %d번째 칸에 추가하였습니다.
#define LSID_AUTO002809							0x00000B65		// 쪽지 관련 : 아이템 받기 실패.
#define LSID_AUTO002810							0x00000B66		// 통제장치의 칩 확보에 성공했습니다. 앞으로 10분 후 무력화 상태인 홀리스톤 키퍼가 출몰합니다.
#define LSID_AUTO002811							0x00000B67		// 통제장치의 칩 확보에 실패했습니다. 앞으로 10분 후 무력화 상태인 홀리스톤 키퍼가 출몰합니다.
#define LSID_AUTO002812							0x00000B68		// 무력화 상태인 홀리스톤 키퍼가 출몰하였습니다.
#define LSID_AUTO002813							0x00000B69		// 홀리스톤 키퍼가 사망하여 카오스 시간까지 리스폰되지 않습니다.
#define LSID_AUTO002814							0x00000B6A		// 채굴 관련 : 홀리 멘탈 퀘스트를 완료하지 못 해 채굴권한이 없습니다.
#define LSID_AUTO002815							0x00000B6B		// 충전이 실패하였습니다.
#define LSID_AUTO002816							0x00000B6C		// %s 길드에 길드전 신청이 정산작업으로 취소 되었습니다.
#define LSID_AUTO002817							0x00000B6D		// %s을 대여 중입니다.
#define LSID_AUTO002818							0x00000B6E		// 길드룸 대여가 끝났거나 대여 중이지 않습니다.
#define LSID_AUTO002819							0x00000B6F		// 길드 관련 : 개인 소유 가능한 최대 금액(%s) 초과하여 유지금 인출을 실패했습니다.
#define LSID_AUTO002820							0x00000B70		// 애니머스 소환 상태에선 그라비티 스톤을 소유할수 없다.
#define LSID_AUTO002821							0x00000B71		// 불법프로그램을 사용하는것을 발견했으니 게임종료하시고 사용하지 말아 주세요. 계속사용할시 결과는 스스로 책임을 져야 합니다.
#define LSID_AUTO002822							0x00000B72		// 불법프로그램을 사용한것으로 인해 %d초내에 강제적으로 게임이 종료됩니다.
#define LSID_AUTO002823							0x00000B73		// 족장 선출 관련 : 알 수 없는 에러( %d )
#define LSID_AUTO002824							0x00000B74		// 쪽지 관련 : 새로운 쪽지가 도착하였습니다.
#define LSID_AUTO002825							0x00000B75		// 쪽지 관련 : 반송된 쪽지가 있습니다.
#define LSID_AUTO002826							0x00000B76		// 쪽지 관련 : 쪽지 시스템에 쪽지가 가득 찼습니다.
#define LSID_AUTO002827							0x00000B77		// 쪽지 관련 : 올바르지 않는 아이템입니다.
#define LSID_AUTO002828							0x00000B78		// 쪽지 관련 : 가지고 있지 않는 아이템입니다.
#define LSID_AUTO002829							0x00000B79		// 쪽지 관련 : 첨부할 골드가 모자랍니다.
#define LSID_AUTO002830							0x00000B7A		// 쪽지 관련 : 아이템 수량이 부족합니다.
#define LSID_AUTO002831							0x00000B7B		// 쪽지 관련 : 첨부할 수 없는 아이템(유닛키)입니다.
#define LSID_AUTO002832							0x00000B7C		// 쪽지 관련 : 첨부할 수 없는 아이템(캐쉬아이템)입니다.
#define LSID_AUTO002833							0x00000B7D		// 쪽지 관련 : 시스템 에러
#define LSID_AUTO002834							0x00000B7E		// 쪽지 관련 : 사용자 이름을 찾을 수 없습니다.
#define LSID_AUTO002835							0x00000B7F		// 쪽지 관련 : 받는 사람 우편함이 가득 찼습니다.
#define LSID_AUTO002836							0x00000B80		// 쪽지 관련 : 요청한 쪽지가 존재하지 않습니다.
#define LSID_AUTO002837							0x00000B81		// 쪽지 관련 : 쪽지에 첨부된 물품이 없습니다.
#define LSID_AUTO002838							0x00000B82		// 쪽지 관련 : 다른 종족에게는 보낼수 없습니다.
#define LSID_AUTO002839							0x00000B83		// 쪽지 관련 : 인벤토리에 빈 공간이 없습니다.
#define LSID_AUTO002840							0x00000B84		// 쪽지 관련 : 알수 없는 에러
#define LSID_AUTO002841							0x00000B85		// [공지] %s
#define LSID_AUTO002842							0x00000B86		// 전체 채팅에 필요한 +2오어가 부족합니다.
#define LSID_AUTO002843							0x00000B87		// %d시간 미만
#define LSID_AUTO002844							0x00000B88		// 마우스 커서 파일을 찾을 수 없어 프로그램을 종료합니다.
#define LSID_AUTO002845							0x00000B89		// 발동
#define LSID_AUTO002846							0x00000B8A		// 대여시간
#define LSID_AUTO002847							0x00000B8B		// 아이템 스킬
#define LSID_AUTO002848							0x00000B8C		// 레이더 아이템
#define LSID_AUTO002849							0x00000B8D		// 선물하기
#define LSID_AUTO002850							0x00000B8E		// 장바구니담기
#define LSID_AUTO002851							0x00000B8F		// 즉시구매
#define LSID_AUTO002852							0x00000B90		// 사용가능레벨
#define LSID_AUTO002853							0x00000B91		// 잔여량
#define LSID_AUTO002854							0x00000B92		// 할인률
#define LSID_AUTO002855							0x00000B93		// 신규아이템
#define LSID_AUTO002856							0x00000B94		// 대여아이템
#define LSID_AUTO002857							0x00000B95		// 오름차순
#define LSID_AUTO002858							0x00000B96		// 내림차순
#define LSID_AUTO002859							0x00000B97		// 스크롤
#define LSID_AUTO002860							0x00000B98		// 발사물
#define LSID_AUTO002861							0x00000B99		// 설치물
#define LSID_AUTO002862							0x00000B9A		// 조계지 소유권 정보
#define LSID_AUTO002863							0x00000B9B		// 가공석 만들기
#define LSID_AUTO002864							0x00000B9C		// 세공석 만들기
#define LSID_AUTO002865							0x00000B9D		// 보석 만들기
#define LSID_AUTO002866							0x00000B9E		// 탐나는 가공석
#define LSID_AUTO002867							0x00000B9F		// 빛나는 세공석
#define LSID_AUTO002868							0x00000BA0		// 찬란한 보석
#define LSID_AUTO002869							0x00000BA1		// 길드룸
#define LSID_AUTO002870							0x00000BA2		// 상품목록
#define LSID_AUTO002871							0x00000BA3		// 조합레시피 정보
#define LSID_AUTO002872							0x00000BA4		// 스트롱 홀드
#define LSID_AUTO002873							0x00000BA5		// 재활용 박스 교환
#define LSID_AUTO002874							0x00000BA6		// 망토
#define LSID_AUTO002875							0x00000BA7		// 상세정보
#define LSID_AUTO002876							0x00000BA8		// %d차 업그레이드
#define LSID_AUTO002877							0x00000BA9		// FULL 업그레이드
#define LSID_AUTO002878							0x00000BAA		// 족장에 의하여 명예길드로 선정된 길드입니다.
#define LSID_AUTO002879							0x00000BAB		// 길드 정보
#define LSID_AUTO002880							0x00000BAC		// 분배율
#define LSID_AUTO002881							0x00000BAD		// 길  드  명 : %s
#define LSID_AUTO002882							0x00000BAE		// 길드마스터 : %s
#define LSID_AUTO002883							0x00000BAF		// 명예길드 열람
#define LSID_AUTO002884							0x00000BB0		// 현재위치
#define LSID_AUTO002885							0x00000BB1		// 영문, 숫자
#define LSID_AUTO002886							0x00000BB2		// 스캔 위성 사용중에는 확대 버튼을 사용하실수 없습니다.
#define LSID_AUTO002887							0x00000BB3		// 위성 스캔 기능이 종료되었습니다.
#define LSID_AUTO002888							0x00000BB4		// 위성 스캔이 고장났습니다.
#define LSID_AUTO002889							0x00000BB5		// 자 종족 캐릭터
#define LSID_AUTO002890							0x00000BB6		// 자 종족 족장진
#define LSID_AUTO002891							0x00000BB7		// 타 종족 캐릭터
#define LSID_AUTO002892							0x00000BB8		// 타 종족 족장진
#define LSID_AUTO002893							0x00000BB9		// 그래픽 자동 설정
#define LSID_AUTO002894							0x00000BBA		// 종족 정보
#define LSID_AUTO002895							0x00000BBB		// 전체채팅
#define LSID_AUTO002896							0x00000BBC		// 게시판 사용중에는 채팅을 사용하실수 없습니다.
#define LSID_AUTO002897							0x00000BBD		// 게 시 판
#define LSID_AUTO002898							0x00000BBE		// 보고싶은 게시판을 선택하세요
#define LSID_AUTO002899							0x00000BBF		// 게시판 서버번호을 알수 없습니다.
#define LSID_AUTO002900							0x00000BC0		// 개발 서버에서는 게시판 열수 없습니다.
#define LSID_AUTO002901							0x00000BC1		// 잘못된 정보로 게시판을 열수가 없습니다.
#define LSID_AUTO002902							0x00000BC2		// 해상도가 너무 낮아서 게시판을 열수 없습니다.
#define LSID_AUTO002903							0x00000BC3		// 게시판 상태에서는 키보드를 입력하실수 없습니다.
#define LSID_AUTO002904							0x00000BC4		// 우 편 함
#define LSID_AUTO002905							0x00000BC5		// 순번
#define LSID_AUTO002906							0x00000BC6		// 이  름
#define LSID_AUTO002907							0x00000BC7		// 제  목
#define LSID_AUTO002908							0x00000BC8		// 편지를 더블 클릭하면 자세한 정보가 나타납니다.
#define LSID_AUTO002909							0x00000BC9		// 편지 쓰기
#define LSID_AUTO002910							0x00000BCA		// 편지 삭제
#define LSID_AUTO002911							0x00000BCB		// 편지 읽기
#define LSID_AUTO002912							0x00000BCC		// 체크 표시된 모든 편지를 삭제합니다.<br>삭제하시겠습니까?
#define LSID_AUTO002913							0x00000BCD		// 삭제하시겠습니까?
#define LSID_AUTO002914							0x00000BCE		// 선택하신 편지가 없습니다.
#define LSID_AUTO002915							0x00000BCF		// 우편 확인창
#define LSID_AUTO002916							0x00000BD0		// 보낸 사람
#define LSID_AUTO002917							0x00000BD1		// 아이템을 더블 클릭하면 가방으로 이동 합니다.
#define LSID_AUTO002918							0x00000BD2		// 받 기
#define LSID_AUTO002919							0x00000BD3		// 답 장
#define LSID_AUTO002920							0x00000BD4		// 반송확인창
#define LSID_AUTO002921							0x00000BD5		// 아이템을 인벤토리에 옮기시겠습니까?
#define LSID_AUTO002922							0x00000BD6		// 아이템이 인벤토리로 이동 합니다.
#define LSID_AUTO002923							0x00000BD7		// 아이템도 같이 삭제됩니다.<br>삭제하시겠습니까?
#define LSID_AUTO002924							0x00000BD8		// 아이템과 골드를 인벤토리에 옮기시겠습니까?
#define LSID_AUTO002925							0x00000BD9		// 우편 입력창
#define LSID_AUTO002926							0x00000BDA		// 받는 사람
#define LSID_AUTO002927							0x00000BDB		// 골 드
#define LSID_AUTO002928							0x00000BDC		// 아이템이나 골드를 상대방에게 보낼 수 있습니다.
#define LSID_AUTO002929							0x00000BDD		// 보내기
#define LSID_AUTO002930							0x00000BDE		// 입력을 취소하시겠습니까?
#define LSID_AUTO002931							0x00000BDF		// 받을 사람과 제목은 필수 입력사항입니다.
#define LSID_AUTO002932							0x00000BE0		// 편지를 보내기 위해서는 %d골드가 필요합니다.
#define LSID_AUTO002933							0x00000BE1		// 편지를 보내기 위한 골드가 부족합니다.
#define LSID_AUTO002934							0x00000BE2		// 우편 배송료로 %d골드가 소비됩니다.<br>편지를 보내시겠습니까?
#define LSID_AUTO002935							0x00000BE3		// 공격대장
#define LSID_AUTO002936							0x00000BE4		// 방어대장
#define LSID_AUTO002937							0x00000BE5		// 지원대장
#define LSID_AUTO002938							0x00000BE6		// 임명
#define LSID_AUTO002939							0x00000BE7		// 해고
#define LSID_AUTO002940							0x00000BE8		// 원하시는 길드를 선택하세요.
#define LSID_AUTO002941							0x00000BE9		// 분배 가능한 포인트 : %d
#define LSID_AUTO002942							0x00000BEA		// 무인거래기 수수료 세율 조정
#define LSID_AUTO002943							0x00000BEB		// 적용
#define LSID_AUTO002944							0x00000BEC		// 족장단
#define LSID_AUTO002945							0x00000BED		// 족장단구성
#define LSID_AUTO002946							0x00000BEE		// 세율 조정
#define LSID_AUTO002947							0x00000BEF		// 단축 외치기
#define LSID_AUTO002948							0x00000BF0		// 세금 분배
#define LSID_AUTO002949							0x00000BF1		// 우편리스트
#define LSID_AUTO002950							0x00000BF2		// 솔로
#define LSID_AUTO002951							0x00000BF3		// 선공 몬스터
#define LSID_AUTO002952							0x00000BF4		// %d 레벨 이상의 캐릭터는 삭제할 수 없습니다. http://rfonline.x2game.com/ 으로 문의 하시기 바랍니다.
#define LSID_AUTO002953							0x00000BF5		// RF Online 클라이언트 실행파일이 손상되었습니다.
#define LSID_AUTO002954							0x00000BF6		// 실행 파일 손상
#define LSID_AUTO002955							0x00000BF7		// 이미 RF Online 클라이언트가 실행중입니다.
#define LSID_AUTO002956							0x00000BF8		// 중복 실행
#define LSID_AUTO002957							0x00000BF9		// RF Online 클라이언트를 더 이상 실행하실 수 없습니다.
#define LSID_AUTO002958							0x00000BFA		// 현재 접속 가능 인원 초과 또는 기타 네트워크 문제로 인하여 해당 서버에 접속이 불가능합니다. Code : %d
#define LSID_AUTO002959							0x00000BFB		// 호출기를 열수 없습니다.
#define LSID_AUTO002960							0x00000BFC		// 호출기 시스템
#define LSID_AUTO002961							0x00000BFD		// 원하는 메뉴를 눌러주세요
#define LSID_AUTO002962							0x00000BFE		// 사용할수 없습니다.
#define LSID_AUTO002963							0x00000BFF		// 사용권한이 없는 스킬입니다.
#define LSID_AUTO002964							0x00000C00		// 스노우 배터리가 필요합니다.
#define LSID_AUTO002965							0x00000C01		// 핵폭탄은 족장 이상만 사용할 수 있습니다.
#define LSID_AUTO002966							0x00000C02		// 핵폭탄은 부족장 이상만 사용할 수 있습니다.
#define LSID_AUTO002967							0x00000C03		// 방어력 %s / %d초
#define LSID_AUTO002968							0x00000C04		// 족장은 종족 채팅을 사용할 수 없습니다.
#define LSID_AUTO002969							0x00000C05		// 전체 채팅을 사용하기 위해서는 %s가 필요합니다.
#define LSID_AUTO002970							0x00000C06		// 거래 채팅을 하려면 %d 종족머니가 필요합니다.
#define LSID_AUTO002971							0x00000C07		// 거래 채팅 비용 %d 종족머니가 소모되었습니다.
#define LSID_AUTO002972							0x00000C08		// 제재 조치 명령이 잘못되었습니다.
#define LSID_AUTO002973							0x00000C09		// [%s님께 %s 조치를 적용하려고 합니다.] 
#define LSID_AUTO002974							0x00000C0A		// 족장만 할 수 있는 기능입니다.
#define LSID_AUTO002975							0x00000C0B		// /파티
#define LSID_AUTO002976							0x00000C0C		// 팜
#define LSID_AUTO002977							0x00000C0D		// 삼
#define LSID_AUTO002978							0x00000C0E		// 제재
#define LSID_AUTO002979							0x00000C0F		// 제재 조치 명령이 너무 깁니다.
#define LSID_AUTO002980							0x00000C10		// 존재하지 않는 명령어 입니다.
#define LSID_AUTO002981							0x00000C11		// 1st
#define LSID_AUTO002982							0x00000C12		// 2nd
#define LSID_AUTO002983							0x00000C13		// 5th
#define LSID_AUTO002984							0x00000C14		// [경고] 핵폭탄이 발사 되었습니다.
#define LSID_AUTO002985							0x00000C15		// [경고] %s의 핵폭탄이 레이더에 포착되었습니다.
#define LSID_AUTO002986							0x00000C16		// 잘못된 정보로 동영상를 실행할수 없습니다. 
#define LSID_AUTO002987							0x00000C17		// [경고] %d초 후 핵폭탄이 떨어집니다.
#define LSID_AUTO002988							0x00000C18		// 스턴
#define LSID_AUTO002989							0x00000C19		// 자신에게 사용할수 없는 포션입니다.
#define LSID_AUTO002990							0x00000C1A		// 선택이 취소되었습니다.
#define LSID_AUTO002991							0x00000C1B		// %s 소모 아이템입니다. 사용하시겠습니까?
#define LSID_AUTO002992							0x00000C1C		// 부족장 이상만이 사용할 수 있습니다.
#define LSID_AUTO002993							0x00000C1D		// 족장 이상만이 사용할 수 있습니다.
#define LSID_AUTO002994							0x00000C1E		// 트랩 : 트랩을 사용할 권한이 없습니다.
#define LSID_AUTO002995							0x00000C1F		// %s, %s(%d개)
#define LSID_AUTO002996							0x00000C20		// %s 가(이) 필요합니다.
#define LSID_AUTO002997							0x00000C21		// 쪽지에 포함된 골드를 받을시 골드 최대 허용 액수를 초과하게 됩니다.<br>쪽지에 포함된 골드는 %d 골드 입니다.
#define LSID_AUTO002998							0x00000C22		// 종족전을 위해 광산으로 이동하시겠습니까?
#define LSID_AUTO002999							0x00000C23		// 무인거래기에 등록한 아이템의 등록 기간이 만료되었습니다.
#define LSID_AUTO003000							0x00000C24		// %s %s님에게 %s에 의해 PK 되었습니다.
#define LSID_AUTO003001							0x00000C25		// 세금 분배 설정이 시스템에 적용되었습니다.
#define LSID_AUTO003002							0x00000C26		// 세금 분배 설정이 시스템에 적용되지 못했습니다.
#define LSID_AUTO003003							0x00000C27		// 본 퀘스트를 포기하시겠습니까?<br>포기한 퀘스트는 다시 받을 수 없습니다.
#define LSID_AUTO003004							0x00000C28		// %s(%d일)
#define LSID_AUTO003005							0x00000C29		// 캐쉬 포인트가 부족합니다.
#define LSID_AUTO003006							0x00000C2A		// 할인률 : %d%%<br>
#define LSID_AUTO003007							0x00000C2B		// 총 할인가격 : %d Cash<br>
#define LSID_AUTO003008							0x00000C2C		// %s<br>금액 : 
#define LSID_AUTO003009							0x00000C2D		// %s골드 - %s
#define LSID_AUTO003010							0x00000C2E		// %s         골드 - %s<br>
#define LSID_AUTO003011							0x00000C2F		// PVP 포인트가 부족합니다.
#define LSID_AUTO003012							0x00000C30		// 부족장 이상만 구입할수 있습니다.
#define LSID_AUTO003013							0x00000C31		// 족장만 구입할수 있습니다.
#define LSID_AUTO003014							0x00000C32		// 후유증 상태에서는 리파인 캡슐을 사용할수 없습니다.
#define LSID_AUTO003015							0x00000C33		// 반송된 메세지가 있습니다.
#define LSID_AUTO003016							0x00000C34		// 쪽지 관련 : 관련된 쪽지를 찾을 수 없습니다.
#define LSID_AUTO003017							0x00000C35		// 반송된 쪽지가 없습니다.
#define LSID_AUTO003018							0x00000C36		// 채팅제한
#define LSID_AUTO003019							0x00000C37		// 현상범
#define LSID_AUTO003020							0x00000C38		// 파티금지
#define LSID_AUTO003021							0x00000C39		// %s님을 %s 임원으로 임명하시겠습니까?
#define LSID_AUTO003022							0x00000C3A		// 선택한 임원을 정말 해고 하시겠습니까?
#define LSID_AUTO003023							0x00000C3B		// 족장님께서 %s님을 %s 임원으로 임명하셨습니다.<br>수락 하시겠습니까?
#define LSID_AUTO003024							0x00000C3C		// 분배율을 0%로 설정하면 세금 분배 목록에서 제거됩니다.<br>계속하시겠습니까?
#define LSID_AUTO003025							0x00000C3D		// 설정하신 내용은 자정(00:00)을 기하여 시스템에 적용됩니다.<br>설정 내용을 적용하시겠습니까?
#define LSID_AUTO003026							0x00000C3E		// 종족퀘스트를 수행하지 못하여 이동이 불가능합니다.
#define LSID_AUTO003027							0x00000C3F		// 핵 폭탄을 쓸수없는 지역입니다.
#define LSID_AUTO003028							0x00000C40		// 지정 위치에 핵폭탄을 투하하시겠습니까?
#define LSID_AUTO003029							0x00000C41		// 포탈 이동 실패 : %s 는 Lv.%d  이상의 캐릭터만 출입할 수 있습니다.
#define LSID_AUTO003030							0x00000C42		// 포탈 이동 실패 : 포탈 이동에 필요한 아이템이 부족합니다.
#define LSID_AUTO003031							0x00000C43		// 포탈 이동 실패 : 아바타의 레벨이 포탈을 사용할 수 있는 레벨보다 낮습니다.
#define LSID_AUTO003032							0x00000C44		// 스턴 상태에선 이동할수 없습니다.
#define LSID_AUTO003033							0x00000C45		// %s 님의 보상 아이템 - 
#define LSID_AUTO003034							0x00000C46		// 스턴 상태에서 아이템을 장착할수 없습니다.
#define LSID_AUTO003035							0x00000C47		// 대상을 선택하지 않았거나 대상이 잘못되었습니다.
#define LSID_AUTO003036							0x00000C48		// 카오스 포션을 사용할 수 없는 상태입니다.
#define LSID_AUTO003037							0x00000C49		// 핵폭탄 후유증 상태가 아니므로 치료 포션 사용 할 수 없습니다.
#define LSID_AUTO003038							0x00000C4A		// 스턴 상태에선 사용할수 없습니다.
#define LSID_AUTO003039							0x00000C4B		// 스턴 상태에서 가방을 장착할수 없습니다.
#define LSID_AUTO003040							0x00000C4C		// 스턴 상태에서 아이템을 집을수 없습니다.
#define LSID_AUTO003041							0x00000C4D		// 스턴상태에서는 버릴수 없습니다.
#define LSID_AUTO003042							0x00000C4E		// 아이템 업그레이드 실패 : 스턴 상태
#define LSID_AUTO003043							0x00000C4F		// 스턴 상태에서는 아이템 업그레이드를 못합니다.
#define LSID_AUTO003044							0x00000C50		// 스턴상태 입니다.
#define LSID_AUTO003045							0x00000C51		// 스턴상태에선 사용할수 없습니다.
#define LSID_AUTO003046							0x00000C52		// [%s]님이 [%s]에서 [%s]에게 [%s]를 습득하였습니다.
#define LSID_AUTO003047							0x00000C53		// 아이템 수량이 부족합니다.
#define LSID_AUTO003048							0x00000C54		// 길드전 중에는 아이템을 사용할수 없습니다.
#define LSID_AUTO003049							0x00000C55		// 앉아있으면 아이템을 사용할수 없습니다.
#define LSID_AUTO003050							0x00000C56		// 시즈모드 중에는 아이템을 사용할수 없습니다.
#define LSID_AUTO003051							0x00000C57		// 유닛 탑승 중에는 아이템을 사용할수 없습니다.
#define LSID_AUTO003052							0x00000C58		// 배에서는 아이템을 사용할수 없습니다.
#define LSID_AUTO003053							0x00000C59		// 맵 이동 중에는 아이템을 사용할수 없습니다.
#define LSID_AUTO003054							0x00000C5A		// 죽었을때는 아이템을 사용할수 없습니다.
#define LSID_AUTO003055							0x00000C5B		// 석화 상태에서는 아이템을 사용할수 없습니다.
#define LSID_AUTO003056							0x00000C5C		// 아이템 조합을 실행할수 없는 위치입니다.
#define LSID_AUTO003057							0x00000C5D		// 레이다 아이템을 사용하기 위해 필요한 아이템이 부족합니다.
#define LSID_AUTO003058							0x00000C5E		// 현재 족장승률(%d승/%d전) %d%%
#define LSID_AUTO003059							0x00000C5F		// 누적 족장승률(%ld승/%ld전) %d%%
#define LSID_AUTO003060							0x00000C60		// %s님께 %s 조치가 적용되었습니다.
#define LSID_AUTO003061							0x00000C61		// %s 조치가 %s 남았습니다.
#define LSID_AUTO003062							0x00000C62		// 무인거래기 세율 조정 요청을 완료했습니다.
#define LSID_AUTO003063							0x00000C63		// 무인거래기 세율을 수정할 권한이 없습니다.
#define LSID_AUTO003064							0x00000C64		// 무인거래기 세율은 1시간 단위로 수정이 가능합니다.
#define LSID_AUTO003065							0x00000C65		// 요청한 세율이 설정 범위를 벗어났습니다.
#define LSID_AUTO003066							0x00000C66		// 무인거래기 세율 설정에 실패했습니다.
#define LSID_AUTO003067							0x00000C67		// 무인거래기 수수료 받기 성공
#define LSID_AUTO003068							0x00000C68		// 무인거래기 수수료가 인벤토리에 입금되었습니다.
#define LSID_AUTO003069							0x00000C69		// %d월 %d일 무인거래기 수수료: %s %s
#define LSID_AUTO003070							0x00000C6A		// 무인거래기 수수료 받기 실패
#define LSID_AUTO003071							0x00000C6B		// 소지금액 초과로 무인거래기 수수료를 받지 못했습니다. 재접속 시 다시 받을 수 있습니다.
#define LSID_AUTO003072							0x00000C6C		// 무인 거래기 수수료 받기 실패 (%d)
#define LSID_AUTO003073							0x00000C6D		// 기여도 증감
#define LSID_AUTO003074							0x00000C6E		// 현재 기여도
#define LSID_AUTO003075							0x00000C6F		// 기여도 %0.f 감소
#define LSID_AUTO003076							0x00000C70		// 기여도 %0.f 증가
#define LSID_AUTO003077							0x00000C71		// %s %s님에게 사망하여 %0.f의 기여도가 감소 하였습니다.
#define LSID_AUTO003078							0x00000C72		// %s %s님을 KILL하여 %0.f의 기여도가 증가 하였습니다.
#define LSID_AUTO003079							0x00000C73		// 비밀번호를 잘못 입력하셨습니다.
#define LSID_AUTO003080							0x00000C74		// 이미 인증되었으므로 작업을 처리할 수 없습니다.
#define LSID_AUTO003081							0x00000C75		// 비밀번호 인증 횟수를 초과하여 서버와의 연결이 끊어졌습니다.
#define LSID_AUTO003082							0x00000C76		// 해킹 방지 로그인 에러 (%d)
#define LSID_AUTO003083							0x00000C77		// 해킹 방지 로그인 비밀번호 변경에 성공했습니다.
#define LSID_AUTO003084							0x00000C78		// 비밀번호 찾기 실패 누적횟수로 인하여 서버와의 연결이 끊어졌습니다.
#define LSID_AUTO003085							0x00000C79		// 해킹 방지 로그인 비밀번호 찾기 에러 (%d)
#define LSID_AUTO003086							0x00000C7A		// 계정 로그인 암호 또는 창고 암호와 다르게 지정해야 합니다.
#define LSID_AUTO003087							0x00000C7B		// 비밀번호는 영어와 숫자를 조합하여 8자 이상 12자 이내로 지정하셔야 합니다.
#define LSID_AUTO003088							0x00000C7C		// 예전 비밀번호와 같게 지정할 수 없습니다.
#define LSID_AUTO003089							0x00000C7D		// 예전 비밀번호를 잘못 입력하셨습니다.
#define LSID_AUTO003090							0x00000C7E		// 로그인 상태가 아닙니다.
#define LSID_AUTO003091							0x00000C7F		// 해킹 방지 로그인 비밀번호 설정 에러 (%d)
#define LSID_AUTO003092							0x00000C80		// 해킹 방지 시스템 암호와 동일하게 설정할 수 없습니다.
#define LSID_AUTO003093							0x00000C81		// 소환 실패 : 애니머스 아이템 데이타가 없습니다.
#define LSID_AUTO003094							0x00000C82		// 스턴상태에서는 소환할수 없습니다.
#define LSID_AUTO003095							0x00000C83		// 스턴상태에선 시즈모드로 바꿀수없습니다.
#define LSID_AUTO003096							0x00000C84		// 후유증 상태에서는 탑승이 불가능 합니다.
#define LSID_AUTO003097							0x00000C85		//   30분 남았습니다.
#define LSID_AUTO003098							0x00000C86		//    5분 남았습니다.
#define LSID_AUTO003099							0x00000C87		//    Sale 종료
#define LSID_AUTO003100							0x00000C88		// Sale 알수없는 에러
#define LSID_AUTO003101							0x00000C89		// OnePlus 종료
#define LSID_AUTO003102							0x00000C8A		// SetSale 종료
#define LSID_AUTO003103							0x00000C8B		// OnePlus 알수없는 에러
#define LSID_AUTO003104							0x00000C8C		// SetSale 알수없는 에러
#define LSID_AUTO003105							0x00000C8D		// 캐쉬 관련 : 이벤트 데이터가 잘못되었습니다.
#define LSID_AUTO003106							0x00000C8E		// 서버와 클라이언트의 PVP포인트가 틀립니다. ( 서버 : %d PvPPoint ) ( 클라이언트 : %d PvPPoint )
#define LSID_AUTO003107							0x00000C8F		// %s<br>판매된 금액 : %s %s
#define LSID_AUTO003108							0x00000C90		// %s<br>판매시 세금 : %s %s<br>
#define LSID_AUTO003109							0x00000C91		// %s<br>판매한 총 금액 : %s %s
#define LSID_AUTO003110							0x00000C92		// %s<br>판매시 총 세금 : %s %s<br>
#define LSID_AUTO003111							0x00000C93		// %s<br>현재 인벤토리의 총 금액 : %s %s<br>
#define LSID_AUTO003112							0x00000C94		// %s ( 등록 취소 : 수수료 부족 )<br>
#define LSID_AUTO003113							0x00000C95		// %s ( 등록 실패 : %d )<br>
#define LSID_AUTO003114							0x00000C96		// 무인거래기 세율이 변경되었습니다.
#define LSID_AUTO003115							0x00000C97		// 등록 세금이 부족합니다.
#define LSID_AUTO003116							0x00000C98		// 자신이 등록한 물품이 아닙니다.
#define LSID_AUTO003117							0x00000C99		// 시전에 필요한 아이템이 없거나 부족합니다.
#define LSID_AUTO003118							0x00000C9A		// 해당 스킬을 사용할 수 있는 권한이 없습니다.
#define LSID_AUTO003119							0x00000C9B		// 카오스 모드에서 사용할 수 없는 스킬 입니다.
#define LSID_AUTO003120							0x00000C9C		// 스턴 상태
#define LSID_AUTO003121							0x00000C9D		// 가드타워 설치 스킬 시전에 필요한 아이템이 없거나 부족합니다.
#define LSID_AUTO003122							0x00000C9E		// 스턴상태에선 설치할수 없습니다.
#define LSID_AUTO003123							0x00000C9F		// 트랩 : 가까운곳에 캐릭터가 있어 트랩을 설치할 수 없습니다.
#define LSID_AUTO003124							0x00000CA0		// 트랩 : 다른 플레이어가 설치한 트랩입니다.
#define LSID_AUTO003125							0x00000CA1		// 트랩 : 트랩과의 거리가 멉니다.
#define LSID_AUTO003126							0x00000CA2		// 대상이 시전자의 맵에 존재하지 않아 소환이 취소되었습니다
#define LSID_AUTO003127							0x00000CA3		// 대상이 엘란맵 이용 권한이 없습니다.
#define LSID_AUTO003130							0x00000CA4		// 소환 시전자가 다른 맵(%S)에 있어 소환에 실패하였습니다.
#define LSID_AUTO003131							0x00000CA5		// 엘란맵에 이동할 권한이 없습니다.
#define LSID_AUTO003132							0x00000CA6		// 종족 버프가 적용 되었습니다
#define LSID_AUTO003133							0x00000CA7		// 트랩 : 트랩을 회수하였습니다.
#define LSID_AUTO003134							0x00000CA8		// 스턴상태에선 공격할수 없습니다.
#define LSID_AUTO003135							0x00000CA9		// PVP포인트가 활성화 되었습니다.
#define LSID_AUTO003136							0x00000CAA		// 트랩 : 회수된 트랩을 인벤토리 %d번째 가방 %d번째 칸에 추가하였습니다.
#define LSID_AUTO003137							0x00000CAB		// 트랩 : 트랩 회수 실패.
#define LSID_AUTO003138							0x00000CAC		// 존재하지 않는 케릭터명입니다.
#define LSID_AUTO003139							0x00000CAD		// 광산으로 이동을 실패 했습니다. %d
#define LSID_AUTO003140							0x00000CAE		// 종족 전쟁의 결과에 따라 기여도가 %d증감 되었습니다.
#define LSID_AUTO003141							0x00000CAF		// %d일 이상 접속하지 않아 기여도가 %d증감 되었습니다.
#define LSID_AUTO003142							0x00000CB0		// 퀘스트 정보 전송에 실패했습니다.
#define LSID_AUTO003143							0x00000CB1		// 퀘스트 '%s'의 조건을 만족하지 못해 퀘스트 수행에 실패했습니다.
#define LSID_AUTO003144							0x00000CB2		// 퀘스트 포기에 실패했습니다.
#define LSID_AUTO003145							0x00000CB3		// 퀘스트를 진행할 조건 또는 자격이 부족합니다.
#define LSID_AUTO003146							0x00000CB4		// 길드 입출금 처리중입니다. 잠시후에 다시 시도해 주세요.
#define LSID_AUTO003147							0x00000CB5		// 골드 소지금 제한을 넘어서 원석 처분 실패
#define LSID_AUTO003148							0x00000CB6		// 현상범 조치로 %s님이 길드에서 강제 탈퇴되었습니다.
#define LSID_AUTO003149							0x00000CB7		// 세금 분배 설정 요청에 성공했습니다.
#define LSID_AUTO003150							0x00000CB8		// 족장만 사용할 수 있는 기능입니다.
#define LSID_AUTO003151							0x00000CB9		// 세금 분배율에 문제가 있습니다.
#define LSID_AUTO003152							0x00000CBA		// 지정한 길드가 하나 이상 존재하지 않습니다.
#define LSID_AUTO003153							0x00000CBB		// 세금 분배 설정 요청 에러 %d
#define LSID_AUTO003154							0x00000CBC		// 현상범 조치로 인해 길드에서 강제 탈퇴 되었습니다.
#define LSID_AUTO003155							0x00000CBD		// 길드마스터 공격력 %d%%, 방어력 %d%% 증가 효과가 적용되었습니다.
#define LSID_AUTO003156							0x00000CBE		// 길드마스터 공격력 %d%%, 방어력 %d%% 증가 효과가 해제되었습니다.
#define LSID_AUTO003157							0x00000CBF		// 길드에 속해 있어야만 대여 할 수 있습니다.
#define LSID_AUTO003158							0x00000CC0		// 길드마스터많이 대여를 할 수 있습니다.
#define LSID_AUTO003159							0x00000CC1		// 길드룸을 더 이상 생성 할 수 없습니다.
#define LSID_AUTO003160							0x00000CC2		// 길드룸 설정 에러
#define LSID_AUTO003161							0x00000CC3		// 길드룸 생성에 실패 했습니다.
#define LSID_AUTO003162							0x00000CC4		// 잘못 된 길드룸 종류입니다.
#define LSID_AUTO003163							0x00000CC5		// 돈이 부족하여 길드룸 생성을 못 했습니다.
#define LSID_AUTO003164							0x00000CC6		// 길드룸을 생성 할 수 있는 등급이 안됩니다.
#define LSID_AUTO003165							0x00000CC7		// 길드룸 정의되지 않은 에러 발생
#define LSID_AUTO003166							0x00000CC8		// 종족전을 위해 %d초후 강제로 HQ로 소환 됩니다.
#define LSID_AUTO003167							0x00000CC9		// 종족전이 시작되어 HQ로 소환되었습니다.
#define LSID_AUTO003168							0x00000CCA		// 제한 지역의 사용 권한이 없어서 위치가 변경 되었습니다.
#define LSID_AUTO003169							0x00000CCB		// 프리미엄 서비스 전용 이벤트 아이템이 지급되었습니다.
#define LSID_AUTO003170							0x00000CCC		// 현재 인벤토리의 여유공간이 없어 이벤트 아이템이 지급되지 않았습니다.<br>인벤토리의 여유공간을 확인후 재 접속하여 주십시오.
#define LSID_AUTO003171							0x00000CCD		// %d일 이상 접속하지 않아 종족 랭킹에서 제외 되었습니다.
#define LSID_AUTO003172							0x00000CCE		// 임명 요청에 실패하였습니다.
#define LSID_AUTO003173							0x00000CCF		// 임명하려는 유저가 없거나 접속 중이 아닙니다.
#define LSID_AUTO003174							0x00000CD0		// 이미 임명된 자리입니다.
#define LSID_AUTO003175							0x00000CD1		// 이미 임명된 유저입니다.
#define LSID_AUTO003176							0x00000CD2		// 임명될 자격이 부족한 유저입니다.
#define LSID_AUTO003177							0x00000CD3		// 상대방이 임명을 거부하셨습니다.
#define LSID_AUTO003178							0x00000CD4		// DB 입력 오류가 발생했습니다.
#define LSID_AUTO003179							0x00000CD5		// 임명관련 알 수 없는 에러 ( %d )
#define LSID_AUTO003180							0x00000CD6		// 족장단 리스트 삽입에 실패했습니다.
#define LSID_AUTO003181							0x00000CD7		// %s님이 %s 임원으로 임명되었습니다.
#define LSID_AUTO003182							0x00000CD8		// 등록된 임원이 없습니다.
#define LSID_AUTO003183							0x00000CD9		// 후보자에 더 이상 등록할 수 없습니다.
#define LSID_AUTO003184							0x00000CDA		// 후보자가 아닙니다.
#define LSID_AUTO003185							0x00000CDB		// 족장이 아닙니다.
#define LSID_AUTO003186							0x00000CDC		// 부족장 및 임원 임명 기간이 아닙니다.
#define LSID_AUTO003187							0x00000CDD		// 해임할 수 없는 임원입니다.
#define LSID_AUTO003188							0x00000CDE		// 임명되어 있지 않은 임원입니다.
#define LSID_AUTO003189							0x00000CDF		// 해임하려는 캐릭터명이 임명된 캐릭터와 다릅니다.
#define LSID_AUTO003190							0x00000CE0		// 쪽지 관련 : 골드 소지금 한도가 넘어가서 골드를 받을수 없습니다.
#define LSID_AUTO003191							0x00000CE1		// 스턴상태에선 이동 할수 없습니다.
#define LSID_AUTO003192							0x00000CE2		// 해당 플레이어가 스턴 상태 입니다.
#define LSID_AUTO003193							0x00000CE3		// Npc와의 거리가 멀어서 이동을 실패 했습니다.
#define LSID_AUTO003194							0x00000CE4		// 제한 지역으로 이동 권한이 없습니다.
#define LSID_AUTO003195							0x00000CE5		// 제한된 포탈 지역 이동 실패 %d
#define LSID_AUTO003196							0x00000CE6		// 핵폭탄을 사용할수 없습니다.
#define LSID_AUTO003197							0x00000CE7		// 핵폭탄을 발사할 위치를 선택하세요.
#define LSID_AUTO003198							0x00000CE8		// 이미 금일 분은 지급 받으셨습니다.
#define LSID_AUTO003199							0x00000CE9		// 통제권을 획득할 권한이 없습니다.
#define LSID_AUTO003200							0x00000CEA		// 통제권을 사용할 권한이 없습니다.
#define LSID_AUTO003201							0x00000CEB		// 핵폭탄을 재사용할 시간이 되지 않았습니다.
#define LSID_AUTO003202							0x00000CEC		// 핵폭탄을 사용할 조건이 맞지 않습니다.
#define LSID_AUTO003203							0x00000CED		// 핵폭탄을 사용할 수 없는 지역입니다.
#define LSID_AUTO003204							0x00000CEE		// 스텔스 상태 일때는 핵폭탄을 사용할 수 없습니다.
#define LSID_AUTO003205							0x00000CEF		// 잘못된 데이터 입니다.
#define LSID_AUTO003206							0x00000CF0		// 알수 없는 에러
#define LSID_AUTO003207							0x00000CF1		// 정상적인 클라이언트가 아닙니다.<br>프로그램을 종료합니다.
#define LSID_AUTO003208							0x00000CF2		// 포인트
#define LSID_AUTO003209							0x00000CF3		// 자신
#define LSID_AUTO003210							0x00000CF4		// %s%.1f초
#define LSID_AUTO003211							0x00000CF5		// 핵폭탄
#define LSID_AUTO003212							0x00000CF6		// 지속시간
#define LSID_AUTO003213							0x00000CF7		// %d초
#define LSID_AUTO003214							0x00000CF8		// 필요 아이템
#define LSID_AUTO003215							0x00000CF9		// 지속 효과
#define LSID_AUTO003216							0x00000CFA		// 소모 아이템
#define LSID_AUTO003217							0x00000CFB		// 비소모 아이템
#define LSID_AUTO003218							0x00000CFC		// 소모 여부
#define LSID_AUTO003219							0x00000CFD		// 할인판매
#define LSID_AUTO003220							0x00000CFE		// Set 판매
#define LSID_AUTO003221							0x00000CFF		// 미친듯 질러도 남는장사라규~<br>이렇게 싼데 안살 수 있어!?<br>사면 살수록 남는장사!!<br>날이면 날마다 오는게 아니야<br>언니도 골라~!오빠도 골라~!
#define LSID_AUTO003222							0x00000D00		//   A열만
#define LSID_AUTO003223							0x00000D01		//   B열만
#define LSID_AUTO003224							0x00000D02		//   C열만
#define LSID_AUTO003225							0x00000D03		// A 열
#define LSID_AUTO003226							0x00000D04		// B 열
#define LSID_AUTO003227							0x00000D05		// C 열
#define LSID_AUTO003228							0x00000D06		// 총 금액 -> %s
#define LSID_AUTO003229							0x00000D07		// 할인된 가격 -> %s
#define LSID_AUTO003230							0x00000D08		// 세트 이벤트는 3가지 물품을 모두 선택하여야 구매할 수 있습니다.
#define LSID_AUTO003231							0x00000D09		// 엘란 고원 통과
#define LSID_AUTO003232							0x00000D0A		// 트레이드 게시판
#define LSID_AUTO003233							0x00000D0B		// 홀리멘탈주입
#define LSID_AUTO003234							0x00000D0C		// 펙시온 결정 교환
#define LSID_AUTO003235							0x00000D0D		// 대  화
#define LSID_AUTO003236							0x00000D0E		// 수수료 :
#define LSID_AUTO003237							0x00000D0F		// 등록 시 판매 금액의 0.1%가 수수료로 공제됩니다.
#define LSID_AUTO003238							0x00000D10		// 물품 판매가격 한도를 초과하였습니다.
#define LSID_AUTO003239							0x00000D11		// 가지고 있는 수량보다 큰 수를 입력할 수 없습니다.
#define LSID_AUTO003240							0x00000D12		// 총 수수료 :
#define LSID_AUTO003241							0x00000D13		// 선택하지 않은 아이템은 재등록이 취소 됩니다.
#define LSID_AUTO003242							0x00000D14		// 아이템을 소켓 위에 놓으면 등록할 수 있습니다.
#define LSID_AUTO003243							0x00000D15		// 총 수수료가 최대 허용 금액을 초과하였습니다.
#define LSID_AUTO003244							0x00000D16		// 지원대 임원만 사용할 수 있는 스킬입니다.
#define LSID_AUTO003245							0x00000D17		// 족장 임원 스킬
#define LSID_AUTO003246							0x00000D18		// 시작게시판 취소
#define LSID_AUTO003247							0x00000D19		// ▼
#define LSID_AUTO003248							0x00000D1A		// 실패 조건 없음
#define LSID_AUTO003249							0x00000D1B		// %s%d분 초과 시 실패
#define LSID_AUTO003250							0x00000D1C		// %s%d분 이전 완료 시 실패
#define LSID_AUTO003251							0x00000D1D		// 사망 또는 종료 시 실패
#define LSID_AUTO003252							0x00000D1E		// %s%s 사냥 금지
#define LSID_AUTO003253							0x00000D1F		// %s%s 획득 금지
#define LSID_AUTO003254							0x00000D20		// ▲
#define LSID_AUTO003255							0x00000D21		// %d분 남았습니다.
#define LSID_AUTO003256							0x00000D22		// 1분 미만 남았습니다.
#define LSID_AUTO003257							0x00000D23		// %d분 지났습니다.
#define LSID_AUTO003258							0x00000D24		// 몬스터메시지
#define LSID_AUTO003259							0x00000D25		// 거래메시지
#define LSID_AUTO003260							0x00000D26		// 길드에 가입되어있지 않습니다.
#define LSID_AUTO003261							0x00000D27		// 족장단 구성
#define LSID_AUTO003262							0x00000D28		// 임명하기 위해 필요한 정보가 부족합니다.
#define LSID_AUTO003263							0x00000D29		// %s 임원은 %d명까지 임명할 수 있습니다.
#define LSID_AUTO003264							0x00000D2A		// 등록된 임원이 없습니다
#define LSID_AUTO003265							0x00000D2B		// [해임]
#define LSID_AUTO003266							0x00000D2C		// 해고할 임원을 선택해 주십시오.
#define LSID_AUTO003267							0x00000D2D		// 선택된 길드가 없습니다.
#define LSID_AUTO003268							0x00000D2E		// 세금 분배 설정
#define LSID_AUTO003269							0x00000D2F		// 세금 분배 적용사항 열람
#define LSID_AUTO003270							0x00000D30		// 길드%d
#define LSID_AUTO003271							0x00000D31		// 찾기
#define LSID_AUTO003272							0x00000D32		// 분배 가능한 포인트가 없습니다.
#define LSID_AUTO003273							0x00000D33		// 이미 목록에 존재하는 길드 입니다.
#define LSID_AUTO003274							0x00000D34		// 현재 적용 중인 세율: %d%%
#define LSID_AUTO003275							0x00000D35		// 수정 대기 중인 세율: %d%%
#define LSID_AUTO003276							0x00000D36		// 족장으로부터 임명된 부족장만 사용할 수 있는 기능입니다.
#define LSID_AUTO003277							0x00000D37		// 족장 외치기 설정
#define LSID_AUTO003278							0x00000D38		// PVP포인트 
#define LSID_AUTO003279							0x00000D39		// 임시포인트:
#define LSID_AUTO003280							0x00000D3A		// 확정포인트:
#define LSID_AUTO003281							0x00000D3B		// 동물형
#define LSID_AUTO003282							0x00000D3C		// 식물형
#define LSID_AUTO003283							0x00000D3D		// 파충류
#define LSID_AUTO003284							0x00000D3E		// 갑각류
#define LSID_AUTO003285							0x00000D3F		// 곤충형
#define LSID_AUTO003286							0x00000D40		// 메카닉
#define LSID_AUTO003287							0x00000D41		// 노바쟌
#define LSID_AUTO003288							0x00000D42		// 뮤턴트
#define LSID_AUTO003289							0x00000D43		// 인간형
#define LSID_AUTO003290							0x00000D44		// 엘프형
#define LSID_AUTO003291							0x00000D45		// 헤로디언
#define LSID_AUTO003292							0x00000D46		// 아래의 프로그램에 의하여 시스템 정보가 변조되어 올바른 수행을 할 수 없습니다.<br>삭제하거나, 관계사에 문의 바랍니다.<br><br>%s
#define LSID_AUTO003293							0x00000D47		// 아래의 프로그램은 게임 중 실행이 허용되지 않습니다. 실행을 종료하시거나, 관계사에 문의 바랍니다.<br><br>%s
#define LSID_AUTO003294							0x00000D48		// 아래의 가상 입력 장치는 허용되지 않습니다.<br>삭제하거나, 관계사에 문의 바랍니다.<br><br>%s (%s)
#define LSID_AUTO003295							0x00000D49		// FG 가 정상적인 게임상태가 아니라고 판단하여 실행을 종료합니다.
#define LSID_AUTO003296							0x00000D4A		// 대상이 접속 중이지 않거나 찾을 수 없습니다.
#define LSID_AUTO003297							0x00000D4B		// 대상이 소환에 응할 수 없는 상태 입니다.
#define LSID_AUTO003298							0x00000D4C		// 현재 맵에 출입할 권한이 없는 대상 입니다.
#define LSID_AUTO003299							0x00000D4D		// 통제장치를 획득한 대상을 소환할 수 없습니다.
#define LSID_AUTO003300							0x00000D4E		// 소환할 대상이 맵 이동 중입니다.
#define LSID_AUTO003301							0x00000D4F		// 던전에 있는 대상은 소환할 수 업습니다.
#define LSID_AUTO003302							0x00000D50		// 같은 던전에 있는 대상만 소환할 수 있습니다.
#define LSID_AUTO003303							0x00000D51		// 그라비티 스톤을 가지고 있으므로 소환할 수 없습니다.
#define LSID_AUTO003304							0x00000D52		// 대상이 길드전 중이므로 소환할 수 없습니다.
#define LSID_AUTO003305							0x00000D53		// 길드전에 참여 중인 대상만 소환할 수 있습니다.
#define LSID_AUTO003306							0x00000D54		// 전투 중에는 순간 이동할 수 없습니다.
#define LSID_AUTO003307							0x00000D55		// 순간 이동하려는 지역에 출입할 권한이 없습니다.
#define LSID_AUTO003308							0x00000D56		// 통제장치를 획득하여 순간 이동을 할 수 없습니다.
#define LSID_AUTO003309							0x00000D57		// 던전에 있는 대상에게 순간 이동을 할 수 없습니다.
#define LSID_AUTO003310							0x00000D58		// 같은 던전에 있는 대상에게만 순간 이동이 가능합니다.
#define LSID_AUTO003311							0x00000D59		// 그라비티 스톤을 보유하고 있어 순간 이동할 수 없습니다.
#define LSID_AUTO003312							0x00000D5A		// 대상이 길드전 중이므로 순간 이동할 수 없습니다.
#define LSID_AUTO003313							0x00000D5B		// 길드전에 참가한 대상에게만 순간 이동을 할 수 있습니다.
#define LSID_AUTO003314							0x00000D5C		// 순간 이동 대상이 맵 이동 중입니다.
#define LSID_AUTO003315							0x00000D5D		// 순간 이동 관련 에러(%d)
#define LSID_AUTO003316							0x00000D5E		// 탈릭을 통하여 0이상 복구 할 수 없습니다.
#define LSID_AUTO003317							0x00000D5F		// 스캐너를 획득하여 %d의 확정포인트를 획득 하였습니다.
#define LSID_AUTO003318							0x00000D60		// 최근 해당 캐릭터에게 죽은 정보가 있어 임시포인트를 빼앗기지 않았습니다.
#define LSID_AUTO003319							0x00000D61		// 최근 해당 캐릭터를 죽인 정보가 있어 임시포인트를 획득하지 못하였습니다.
#define LSID_AUTO003320							0x00000D62		// 연속 감소제한에 의하여 임시포인트를 잃지 않았습니다.
#define LSID_AUTO003321							0x00000D63		// 해당 캐릭터가 연속 감소제한에 걸려 있어 임시포인트를 획득하지 못했습니다.
#define LSID_AUTO003322							0x00000D64		// 연속 획득 제한에 의하여 임시포인트를 획득할 수 없습니다.
#define LSID_AUTO003323							0x00000D65		// 해당 캐릭터가 연속 획득 제한에 걸려 있어 임시포인트를 잃지 않았습니다.
#define LSID_AUTO003324							0x00000D66		// 포션 사용에 실패 하였습니다.
#define LSID_AUTO003325							0x00000D67		// 확정포인트 복구
#define LSID_AUTO003326							0x00000D68		// 복구
#define LSID_AUTO003327							0x00000D69		// 교환에 필요한 홀리스톤의 수량이 부족합니다.
#define LSID_AUTO003328							0x00000D6A		// 장바구니로 이동 하시겠습니까?
#define LSID_AUTO003329							0x00000D6B		// 이벤트 중입니다.
#define LSID_AUTO003330							0x00000D6C		// 장바구니가 비어 있습니다.
#define LSID_AUTO003331							0x00000D6D		// 장바구니
#define LSID_AUTO003332							0x00000D6E		// 총   가지의 아이템이 담겨있습니다.
#define LSID_AUTO003333							0x00000D6F		// 총 구매액
#define LSID_AUTO003334							0x00000D70		// 할인 금액
#define LSID_AUTO003335							0x00000D71		// 구매 총액
#define LSID_AUTO003336							0x00000D72		// 할인율 
#define LSID_AUTO003337							0x00000D73		// 할인하려는 아이템이 쿠폰 할인 금액에 10%% 미만이라 쿠폰을 사용할 수 없습니다.
#define LSID_AUTO003338							0x00000D74		// 기본 소모품 상자
#define LSID_AUTO003339							0x00000D75		// 상주
#define LSID_AUTO003340							0x00000D76		// 시간쿠폰 확보
#define LSID_AUTO003341							0x00000D77		// %d시간 쿠폰이 지급 되었습니다.
#define LSID_AUTO003342							0x00000D78		// 최종 쿠폰이 지급 되었습니다.
#define LSID_AUTO003343							0x00000D79		// 하루에 받으실 수 있는 쿠폰을 모두 받으셨습니다.
#define LSID_AUTO003344							0x00000D7A		// 쿠폰을 받으실 준비가 되지 않았습니다.
#define LSID_AUTO003345							0x00000D7B		// 00:00시를 기준으로 상주 시간이 초기화 됩니다.(%d분 남음)
#define LSID_AUTO003346							0x00000D7C		// 변경할캐릭터명을입력하세요.
#define LSID_AUTO003347							0x00000D7D		// 캐릭터명변경권한이없습니다.
#define LSID_AUTO003348							0x00000D7E		// %s 로 입력하셨습니다.<br>캐릭터명을 변경할 경우 길드 내용이 모두 초기화됩니다.<br>정말 캐릭터명을 변경하겠습니까?
#define LSID_AUTO003349							0x00000D7F		// 캐릭터명 변경이 완료되었습니다.
#define LSID_AUTO003350							0x00000D80		// 족장진과길드마스터는이름을변경할수없습니다.
#define LSID_AUTO003351							0x00000D81		// 이름 변경 포션이 아닙니다. 
#define LSID_AUTO003352							0x00000D82		// 아바타의이름이%s로변경되었습니다.
#define LSID_AUTO003353							0x00000D83		// 이전할 서버명을 선택하세요.
#define LSID_AUTO003354							0x00000D84		// %s 로 입력하셨습니다. <br> 서버 이전 신청의 경우 길드 및 버디 저장 내용이 모두 초기화 됩니다. <br> 서버 이전 신청을 완료 하시겠습니까?
#define LSID_AUTO003355							0x00000D85		// 서버 이전 신청이 완료 되었습니다.<br>(10초 후 자동 종료됩니다.)
#define LSID_AUTO003356							0x00000D86		// 이동 아이템
#define LSID_AUTO003357							0x00000D87		// 소환할 캐릭터의 이름을 입력해 주십시오.
#define LSID_AUTO003358							0x00000D88		// 순간 이동할 대상의 캐릭터 이름을 입력해 주십시오.
#define LSID_AUTO003359							0x00000D89		// 안녕하세요. CCR입니다. RF Online은 게임물 등급 위원회에서 적정등급 18세 이용가 판정을 받은 게임입니다. 언제나 즐거운 시간 되세요.
#define LSID_AUTO003360							0x00000D8A		// 임시 포인트를 획득할 수 없는 지역입니다.
#define LSID_AUTO003361							0x00000D8B		// 탈릭을 통하여 %d의 확정포인트를 획득하였습니다.
#define LSID_AUTO003362							0x00000D8C		// 명예길드
#define LSID_AUTO003363							0x00000D8D		// 현재 해당 권한은 사용할 수 없습니다.
#define LSID_AUTO003364							0x00000D8E		// 아바타의 이름 변경 요청이 취소되었습니다.
#define LSID_AUTO003365							0x00000D8F		// %s님이 %s님으로 이름이 변경되었습니다.
#define LSID_AUTO003366							0x00000D90		// 금일 지급 받을 수 있는 남은 쿠폰은 최대 %d시간 쿠폰입니다.
#define LSID_AUTO003367							0x00000D91		// 당 회 매장량이 고갈되어 더 이상 채굴할 수 없습니다.
#define LSID_AUTO003368							0x00000D92		// 사용할 수 없는 조건의 쿠폰입니다.
#define LSID_AUTO003369							0x00000D93		// 해당 캐릭터는 이미 길드위원회로 선출 되어 있습니다.<br> 다시 선택하여 주십시오.
#define LSID_AUTO003370							0x00000D94		// %s님은 길드위원회가 아닙니다. 다시 선택하여 주십시오.
#define LSID_AUTO003371							0x00000D95		// %s님이 길드위원회로 선출 되었습니다.
#define LSID_AUTO003372							0x00000D96		// %s님이 길드위원회 자격을 상실하였습니다.
#define LSID_AUTO003373							0x00000D97		// 길드마스터 선출 안건제시
#define LSID_AUTO003374							0x00000D98		// 길드마스터 선출 투표
#define LSID_AUTO003375							0x00000D99		// 길드마스터 선출 투표가 진행 중입니다.
#define LSID_AUTO003376							0x00000D9A		// 대상 길드의 길드마스터가 존재하지 않아 길드전을 신청할 수 없습니다.
#define LSID_AUTO003377							0x00000D9B		// 위원으로 임명하려는 길드원이 이미 위원회의 자격을 가지고 있습니다.
#define LSID_AUTO003378							0x00000D9C		// 길드마스터는 위원회로 임명할 수 없습니다.
#define LSID_AUTO003379							0x00000D9D		// 길드위원회가 모두 선출 되었습니다.
#define LSID_AUTO003380							0x00000D9E		// 해당 캐릭터는 길드위원회가 아니므로 해임할 수 없습니다.
#define LSID_AUTO003381							0x00000D9F		// 현재 길드마스터를 선출할 수 없습니다.
#define LSID_AUTO003382							0x00000DA0		// 길드운영
#define LSID_AUTO003383							0x00000DA1		// %s님을 길드위원회로 선출 하겠습니까?
#define LSID_AUTO003384							0x00000DA2		// %s님을 길드위원회에서 해임 하시겠습니까?
#define LSID_AUTO003385							0x00000DA3		// 길드위원회 관리
#define LSID_AUTO003386							0x00000DA4		// 해임
#define LSID_AUTO003387							0x00000DA5		// 오어 매장량
#define LSID_AUTO003388							0x00000DA6		// 종족전 진행중 잃은 기여도가 모두 복구 되었습니다.
#define LSID_AUTO003389							0x00000DA7		// %s님이 %s버프를 시전해 주셨습니다. 
#define LSID_AUTO003390							0x00000DA8		// 소포
#define LSID_AUTO003391							0x00000DA9		// 송금
#define LSID_AUTO003392							0x00000DAA		// 편지
#define LSID_AUTO003393							0x00000DAB		// 확정포인트가 마이너스일 경우<br>각종 탈릭을 통하여 복구 가능합니다.
#define LSID_AUTO003394							0x00000DAC		// 복구포인트
#define LSID_AUTO003395							0x00000DAD		// SET구입
#define LSID_AUTO003396							0x00000DAE		// 시전자 < %s >
#define LSID_AUTO003397							0x00000DAF		// 연합군 전사 포상 50LV
#define LSID_AUTO003398							0x00000DB0		// 연합군 레인저 포상 50LV
#define LSID_AUTO003399							0x00000DB1		// 연합군 포스 포상 50LV
#define LSID_AUTO003400							0x00000DB2		// 동맹군 전사 포상 50LV
#define LSID_AUTO003401							0x00000DB3		// 동맹군 레인저 포상 50LV
#define LSID_AUTO003402							0x00000DB4		// 동맹군 포스 포상 50LV
#define LSID_AUTO003403							0x00000DB5		// 제국군 전사 포상 50LV
#define LSID_AUTO003404							0x00000DB6		// 제국군 레인저 포상 50LV
#define LSID_AUTO003405							0x00000DB7		// 제국군 런처 포상 50LV
#define LSID_AUTO003406							0x00000DB8		// 연합군 전사 포상 53LV
#define LSID_AUTO003407							0x00000DB9		// 연합군 레인저 포상 53LV
#define LSID_AUTO003408							0x00000DBA		// 연합군 포스 포상 53LV
#define LSID_AUTO003409							0x00000DBB		// 동맹군 전사 포상 53LV
#define LSID_AUTO003410							0x00000DBC		// 동맹군 레인저 포상 53LV
#define LSID_AUTO003411							0x00000DBD		// 동맹군 포스 포상 53LV
#define LSID_AUTO003412							0x00000DBE		// 제국군 전사 포상 53LV
#define LSID_AUTO003413							0x00000DBF		// 제국군 레인저 포상 53LV
#define LSID_AUTO003414							0x00000DC0		// 제국군 런처 포상 53LV
#define LSID_AUTO003415							0x00000DC1		// 연합군 전사 포상 55LV
#define LSID_AUTO003416							0x00000DC2		// 연합군 레인저 포상 55LV
#define LSID_AUTO003417							0x00000DC3		// 연합군 포스 포상 55LV
#define LSID_AUTO003418							0x00000DC4		// 동맹군 전사 포상 55LV
#define LSID_AUTO003419							0x00000DC5		// 동맹군 레인저 포상 55LV
#define LSID_AUTO003420							0x00000DC6		// 동맹군 포스 포상 55LV
#define LSID_AUTO003421							0x00000DC7		// 제국군 전사 포상 55LV
#define LSID_AUTO003422							0x00000DC8		// 제국군 레인저 포상 55LV
#define LSID_AUTO003423							0x00000DC9		// 제국군 런처 포상 55LV
#define LSID_AUTO003424							0x00000DCA		// 노바잔의 고대 유물함 교환
#define LSID_AUTO003425							0x00000DCB		// 작은 연합군 포상
#define LSID_AUTO003426							0x00000DCC		// 작은 동맹군 포상
#define LSID_AUTO003427							0x00000DCD		// 작은 제국군 포상
#define LSID_AUTO003428							0x00000DCE		// 교환에 필요한 재료가 부족합니다.
#define LSID_AUTO003429							0x00000DCF		// 다른 종류의 쿠폰은 사용할 수 없습니다.
#define LSID_AUTO003430							0x00000DD0		// 은총의 탈릭 1개
#define LSID_AUTO003431							0x00000DD1		// 은총의 탈릭 3개
#define LSID_AUTO003432							0x00000DD2		// 무지의 탈릭 1개
#define LSID_AUTO003433							0x00000DD3		// 무지의 탈릭 3개
#define LSID_AUTO003434							0x00000DD4		// 해당 길드의 길드마스터가 현재 접속중이지 않아 길드전을 신청할 수 없습니다.
#define LSID_AUTO003435							0x00000DD5		// %s길드로 부터 길드전을 제안 받았습니다.
#define LSID_AUTO003436							0x00000DD6		// 해당 길드의 길드전 신청을 수락 하시겠습니까?
#define LSID_AUTO003437							0x00000DD7		// %s길드와의 길드전 신청이 완료 되었습니다.
#define LSID_AUTO003438							0x00000DD8		// %s길드의 길드마스터가 길드전 수락을 거절하였습니다.
#define LSID_AUTO003439							0x00000DD9		// 사용상태
#define LSID_AUTO003440							0x00000DDA		// 상시
#define LSID_AUTO003441							0x00000DDB		// 전투시
#define LSID_AUTO003442							0x00000DDC		// 평화
#define LSID_AUTO003443							0x00000DDD		// 포션을 사용할 수 있는 상태가 아닙니다.
#define LSID_AUTO003444							0x00000DDE		// %d 시간 쿠폰이 확보 되었습니다.
#define LSID_AUTO003445							0x00000DDF		// 요즘 잘나가는<br>물건 베스트 3!!
#define LSID_AUTO003446							0x00000DE0		// 보안용 암호를 설정하면 계정을<br>안전하게 보호할 수 있습니다.
#define LSID_AUTO003447							0x00000DE1		// (영어+숫자 조합 8~12자)
#define LSID_AUTO003448							0x00000DE2		// (비밀번호 분실 시 필요)
#define LSID_AUTO003449							0x00000DE3		// 닫 기
#define LSID_AUTO003450							0x00000DE4		// 해킹 방지 시스템 전용 비밀번호를 입력하세요.
#define LSID_AUTO003451							0x00000DE5		// (5회 이상 틀리면 24시간 동안 로그인이 불가능 합니다.)
#define LSID_AUTO003452							0x00000DE6		// 로그인 실패 누적횟수 : %d
#define LSID_AUTO003453							0x00000DE7		// 비밀번호 찾기 실패 누적횟수 : %d
#define LSID_AUTO003454							0x00000DE8		// 비밀번호
#define LSID_AUTO003455							0x00000DE9		// 변경 비밀번호 입력
#define LSID_AUTO003456							0x00000DEA		// 변경 비밀번호 확인
#define LSID_AUTO003457							0x00000DEB		// [%s]쿠폰 아이템이 지급 되었습니다.
#define LSID_AUTO003458							0x00000DEC		// 쿠폰
#define LSID_AUTO003459							0x00000DED		// 프리미엄 서비스 이용자만 사용하실 수 있습니다.
#define LSID_AUTO003460							0x00000DEE		// 이벤트 진행 중에는 쿠폰 아이템을 사용하실 수 없습니다.
#define LSID_AUTO003461							0x00000DEF		// 상대편이 소환을 거절 하여도 포션이 소모 됩니다. 그래도 계속 진행 하시겠습니까?
#define LSID_AUTO003462							0x00000DF0		// 자신보다 2레벨 이상 높은 애니머스는 소환할 수 없습니다.
#define LSID_AUTO003463							0x00000DF1		// 제국군 노멀방어구 포상 50LV
#define LSID_AUTO003464							0x00000DF2		// 제국군 노멀방어구 포상 53LV
#define LSID_AUTO003465							0x00000DF3		// 제국군 노멀방어구 포상 55LV
#define LSID_AUTO003466							0x00000DF4		// 연합군 노멀방어구 포상 50LV
#define LSID_AUTO003467							0x00000DF5		// 연합군 노멀방어구 포상 53LV
#define LSID_AUTO003468							0x00000DF6		// 연합군 노멀방어구 포상 55LV
#define LSID_AUTO003469							0x00000DF7		// 동맹군 노멀방어구 포상 50LV
#define LSID_AUTO003470							0x00000DF8		// 동맹군 노멀방어구 포상 53LV
#define LSID_AUTO003471							0x00000DF9		// 동맹군 노멀방어구 포상 55LV
#define LSID_AUTO003472							0x00000DFA		// 경험치 획득률
#define LSID_AUTO003473							0x00000DFB		// 숙련도 향상률
#define LSID_AUTO003474							0x00000DFC		// 아이템 드랍률
#define LSID_AUTO003475							0x00000DFD		// 채광속도 향상
#define LSID_AUTO003476							0x00000DFE		// 종족 세율 조정 가능 기간입니다.
#define LSID_AUTO003477							0x00000DFF		// 설정하신 세율은 다음 종족 쟁 시작 시점까지 유효합니다.
#define LSID_AUTO003478							0x00000E00		// 지급 예정 세금 : %d %s
#define LSID_AUTO003479							0x00000E01		// 지급 예정 세금이 인벤토리에 지급 되었습니다.
#define LSID_AUTO003480							0x00000E02		// 지급 예정 세금
#define LSID_AUTO003481							0x00000E03		// 현 세율 : %d%%
#define LSID_AUTO003482							0x00000E04		// (일요일 자정 인벤토리에 자동 입금 됩니다.)
#define LSID_AUTO003483							0x00000E05		// 세율을 조정 할 수 있는 기간이 아닙니다.
#define LSID_AUTO003484							0x00000E06		// 지속형 포션에 대하여 30일 동안 최대 2개까지 동시에 사용할 수 있게 되었습니다.
#define LSID_AUTO003485							0x00000E07		// 비슷한 효과를 가지는 포션은 동시에 사용할 수 없습니다.
#define LSID_AUTO003486							0x00000E08		// 이미 포션 버프칸이 확장 되었으므로 해당 아이템을 사용할 수 없습니다.
#define LSID_AUTO003487							0x00000E09		// 명예의 전당
#define LSID_AUTO003488							0x00000E0A		// 파티 대상이 원거리 파티에 필요한 소지금이 부족합니다.
#define LSID_AUTO003489							0x00000E0B		// 환경 세부 효과
#define LSID_AUTO003490							0x00000E0C		// 포션 버프 확장 효과의 지속시간이 %s 남았습니다.
#define LSID_AUTO003491							0x00000E0D		// 축! 업그레이드 성공!!
#define LSID_AUTO003492							0x00000E0E		// 탈릭만 소멸 되었습니다.
#define LSID_AUTO003493							0x00000E0F		// 1단계 다운그레이드 되셨습니다.
#define LSID_AUTO003494							0x00000E10		// 2단계 다운그레이드 되셨습니다.
#define LSID_AUTO003495							0x00000E11		// 3단계 다운그레이드 되셨습니다.
#define LSID_AUTO003496							0x00000E12		// 모든 업그레이드가 초기화 되었습니다.
#define LSID_AUTO003497							0x00000E13		// 다운그레이드 되셨습니다.
#define LSID_AUTO003498							0x00000E14		// 사망시
#define LSID_AUTO003499							0x00000E15		// 조합이 완료 되었습니다.
#define LSID_AUTO003500							0x00000E16		// 업그레이드 재료만 파괴되었습니다.
#define LSID_AUTO003501							0x00000E17		// 모든 재료가 파괴되었습니다.
#define LSID_AUTO003502							0x00000E18		// %s님에게 죽어 %d의 종족화폐를 드랍하였습니다.
#define LSID_AUTO003503							0x00000E19		// 보호석을 소지 하고 있지 않으면 아이템을 드랍할 수 있습니다.
#define LSID_AUTO003504							0x00000E1A		// %s님이 돈가방을 드랍하였습니다.
#define LSID_AUTO003505							0x00000E1B		// 손실액이 보유액을 초과하여 더 이상 금액을 소비 하지 않습니다.
#define LSID_AUTO003506							0x00000E1C		// 해당 캐릭터의 손실액이 보유액을 초과하여 금액을 획득하지 못했습니다.
#define LSID_AUTO003507							0x00000E1D		// 인벤토리 및 창고의 보유가능 금액을 초과하여 금액을 획득 하지 못했습니다.
#define LSID_AUTO003508							0x00000E1E		// 사용 가능한 상태가 아닙니다. 
#define LSID_AUTO003509							0x00000E1F		// 기갑장비가 복구 되었습니다 하지만 내구도가 1이므로 수리가 꼭 필요합니다.
#define LSID_AUTO003510							0x00000E20		// 보험 기능이 적용 중 입니다.
#define LSID_AUTO003511							0x00000E21		// 새로운 파괴된 기갑장비의 정보가 추가되어 복구하지 않은 기갑장비의 열쇠와 정보가 소멸됩니다.
#define LSID_AUTO003512							0x00000E22		// 적용 순위가 낮아 사용할 수 없습니다.
#define LSID_AUTO003513							0x00000E23		// 적용순위
#define LSID_AUTO003514							0x00000E24		// 사용시 주의사항
#define LSID_AUTO003515							0x00000E25		// 지금 구매하신 아이템은 기갑장비의 복구를 하는 아이템입니다. 기갑장비의 복구는 가장 최근에 파괴된 기갑장비 1기로 제한하며, 파괴된 기갑장비가 2기 이상일 경우, 가장 마지막 파괴된 기갑장비는 복구되지만 나머지 기갑장비는 복구하실수 없습니다. 꼭 주의하시기 바랍니다.
#define LSID_AUTO003516							0x00000E26		// 인텐스
#define LSID_AUTO003517							0x00000E27		// 어드밴스 스트랭스
#define LSID_AUTO003518							0x00000E28		// 파인
#define LSID_AUTO003519							0x00000E29		// 스트롱
#define LSID_AUTO003520							0x00000E2A		// 솔리드
#define LSID_AUTO003521							0x00000E2B		// 스트랭스
#define LSID_AUTO003522							0x00000E2C		// 프로텍션
#define LSID_AUTO003523							0x00000E2D		// 뱀파이어
#define LSID_AUTO003524							0x00000E2E		// 가디언
#define LSID_AUTO003525							0x00000E2F		// 샤프
#define LSID_AUTO003526							0x00000E30		// 인듀런스
#define LSID_AUTO003527							0x00000E31		// 윈드
#define LSID_AUTO003528							0x00000E32		// 스마트
#define LSID_AUTO003529							0x00000E33		// 그랜드
#define LSID_AUTO003530							0x00000E34		// 세이빙
#define LSID_AUTO003531							0x00000E35		// 안티샤프
#define LSID_AUTO003532							0x00000E36		// 근처에 가드타워나 바인딩 타워가 존재합니다. 
#define LSID_AUTO003533							0x00000E37		// 바인딩 타워를 더 이상 설치하실 수 없습니다.
#define LSID_AUTO003534							0x00000E38		// 바인딩 타워를 정상적으로 회수 하셨습니다.
#define LSID_AUTO003535							0x00000E39		// 바인딩 타워가 파괴되었습니다.
#define LSID_AUTO003536							0x00000E3A		// 부활까지 %d초 남으셨습니다.
#define LSID_AUTO003537							0x00000E3B		// 지정된 바인딩 타워가 소멸하였습니다. 
#define LSID_AUTO003538							0x00000E3C		// 이벤트 아이템이 삭제 되었습니다.
#define LSID_AUTO003539							0x00000E3D		// 소지금이 부족하였으나 보호석 아이템으로 인하여 드랍 확률이 계산되지 않았습니다.
#define LSID_AUTO003540							0x00000E3E		// 같은 종류의 보조장비를 더 이상 소유하실 수 없습니다.
#define LSID_AUTO003541							0x00000E3F		// 공격력 증가 정보
#define LSID_AUTO003542							0x00000E40		// 방어력 증가 정보
#define LSID_AUTO003543							0x00000E41		// 보조 효과 정보
#define LSID_AUTO003544							0x00000E42		// 제이드 효과 정보
#define LSID_AUTO003545							0x00000E43		// 포장의 참
#define LSID_AUTO003546							0x00000E44		// 흥정의 참
#define LSID_AUTO003547							0x00000E45		// 투시의 참
#define LSID_AUTO003548							0x00000E46		// 질주의 참
#define LSID_AUTO003549							0x00000E47		// 상술의 참
#define LSID_AUTO003550							0x00000E48		// 획득의 참
#define LSID_AUTO003551							0x00000E49		// 파티의 참
#define LSID_AUTO003552							0x00000E4A		// 무지의 참
#define LSID_AUTO003553							0x00000E4B		// 은총의 참
#define LSID_AUTO003554							0x00000E4C		// 신성의 참
#define LSID_AUTO003555							0x00000E4D		// 회생의 참
#define LSID_AUTO003556							0x00000E4E		// 교감의 참
#define LSID_AUTO003557							0x00000E4F		// 버스트 제너레이터
#define LSID_AUTO003558							0x00000E50		// 프로텍트 제너레이터
#define LSID_AUTO003559							0x00000E51		// 보조장비 정보
#define LSID_AUTO003560							0x00000E52		// 경험치와 드롭율의 획득량이 증가한다.
#define LSID_AUTO003561							0x00000E53		// 경험치의 획득량이 증가한다.
#define LSID_AUTO003562							0x00000E54		// 아이템 착용 제한 레벨이 완화된다.
#define LSID_AUTO003563							0x00000E55		// PK 성공시 종족화폐를 획득한다.
#define LSID_AUTO003564							0x00000E56		// 판매가격이 증가한다.
#define LSID_AUTO003565							0x00000E57		// 구입가격이 할인된다.
#define LSID_AUTO003566							0x00000E58		// 디텍트.
#define LSID_AUTO003567							0x00000E59		// 이동속도가 증가한다.
#define LSID_AUTO003568							0x00000E5A		// 상점 거래에 있어 이득을 취한다.
#define LSID_AUTO003569							0x00000E5B		// 경험치와 아이템의 획득 가능 레벨이 확장된다.
#define LSID_AUTO003570							0x00000E5C		// 파티가 가능한 레벨제한이 확장된다.
#define LSID_AUTO003571							0x00000E5D		// 무지의 탈릭 효과를 받는다.
#define LSID_AUTO003572							0x00000E5E		// 은총의 탈릭 효과를 받는다.
#define LSID_AUTO003573							0x00000E5F		// 피속피해효과의 지속시간이 감소한다.
#define LSID_AUTO003574							0x00000E60		// 매 6초마다 일정량의 HP가 회복된다.
#define LSID_AUTO003575							0x00000E61		// 소환자의 포스 공격력의 일정량을 애니머스의 공격력에 반영한다.
#define LSID_AUTO003576							0x00000E62		// 공격력이 증가한다.
#define LSID_AUTO003577							0x00000E63		// 방어력이 증가한다.
#define LSID_AUTO003578							0x00000E64		// 받은 데미지를 반사한다.
#define LSID_AUTO003579							0x00000E65		// 방패 방어 무시 /명중률 증가
#define LSID_AUTO003580							0x00000E66		// 탑승자의 근접 공격력의 일정량을 기갑장비의 공격력에 반영한다.
#define LSID_AUTO003581							0x00000E67		// 어그로포인트가 증가한다.
#define LSID_AUTO003582							0x00000E68		// 어그로포인트가 감소한다.
#define LSID_AUTO003583							0x00000E69		// 모든 오어 량이 다음 종족 전으로 이월 되었습니다.
#define LSID_AUTO003584							0x00000E6A		// 홀리스톤 키퍼 방어에 성공하여 오어 량이 추가되었습니다.
#define LSID_AUTO003585							0x00000E6B		// 오어 이월 횟수
#define LSID_AUTO003586							0x00000E6C		// 투구 아이템을 드롭하였습니다.
#define LSID_AUTO003587							0x00000E6D		// 추가보상은 다음과 같습니다.
#define LSID_AUTO003588							0x00000E6E		// 추가보상은 다음과 같습니다. 다음중 선택하십시오.
#define LSID_AUTO003589							0x00000E6F		// 상의 아이템을 드롭하였습니다.
#define LSID_AUTO003590							0x00000E70		// 하의 아이템을 드롭하였습니다.
#define LSID_AUTO003591							0x00000E71		// 장갑 아이템을 드롭하였습니다.
#define LSID_AUTO003592							0x00000E72		// 신발 아이템을 드롭하였습니다.
#define LSID_AUTO003593							0x00000E73		// 겜블 시 운이 올라간다.
#define LSID_AUTO003594							0x00000E74		// 타 종족과 채팅이 가능해진다.
#define LSID_AUTO003595							0x00000E75		// 살펴보기
#define LSID_AUTO003596							0x00000E76		// 보유 금액을 초과하여 루팅할 수 없습니다.
#define LSID_AUTO003597							0x00000E77		// 돈가방을 통하여 %d의 종족화폐를 획득하였습니다.
#define LSID_AUTO003598							0x00000E78		// 프리미엄 서비스 전용 아이템 선택
#define LSID_AUTO003599							0x00000E79		// 프리미엄 서비스 전용 아이템입니다.<br>아래의 아이템 중 %d개를 선택하여 주세요.<br>전용 아이템은 프리미엄 서비스 이용자만 사용하실 수 있습니다.
#define LSID_AUTO003600							0x00000E7A		// 프리미엄 서비스 전용 아이템이 지급되었습니다.
#define LSID_AUTO003601							0x00000E7B		// 프리미엄 서비스 전용 아이템입니다.<br>다음 아이템을 지급 받으셨습니다.
#define LSID_AUTO003602							0x00000E7C		// 연합군 방패 포상 50LV
#define LSID_AUTO003603							0x00000E7D		// 연합군 방패 포상 53LV
#define LSID_AUTO003604							0x00000E7E		// 연합군 방패 포상 55LV
#define LSID_AUTO003605							0x00000E7F		// 동맹군 방패 포상 50LV
#define LSID_AUTO003606							0x00000E80		// 동맹군 방패 포상 53LV
#define LSID_AUTO003607							0x00000E81		// 동맹군 방패 포상 55LV
#define LSID_AUTO003608							0x00000E82		// 제국군 방패 포상 50LV
#define LSID_AUTO003609							0x00000E83		// 제국군 방패 포상 53LV
#define LSID_AUTO003610							0x00000E84		// 제국군 방패 포상 55LV
#define LSID_AUTO003611							0x00000E85		// 더 이상 창고 확장을 할 수 없습니다.
#define LSID_AUTO003612							0x00000E86		// 창고 확장 캡슐에 의해 창고 공간이 증가 되었습니다.
#define LSID_AUTO003613							0x00000E87		// 계정ID와 동일하게 비밀번호를 적용할 수 없습니다. 
#define LSID_AUTO003614							0x00000E88		// B  G  M
#define LSID_AUTO003615							0x00000E89		// E  A  X
#define LSID_AUTO003616							0x00000E8A		// 특 수 음
#define LSID_AUTO003617							0x00000E8B		// O   N
#define LSID_AUTO003618							0x00000E8C		// O F F
#define LSID_AUTO003619							0x00000E8D		// 마지막 페이지 저장
#define LSID_AUTO003620							0x00000E8E		// 매주 금  토  일
#define LSID_AUTO003621							0x00000E8F		// 00 : 00 ~ 24 : 00 (하루종일)
#define LSID_AUTO003622							0x00000E90		// 금 - 10% 할인
#define LSID_AUTO003623							0x00000E91		// 토 - 1+1 세일
#define LSID_AUTO003624							0x00000E92		// 일 - 셋트로 팍팍 할인
#define LSID_AUTO003625							0x00000E93		// 대상이 시야에 없습니다.
#define LSID_AUTO003626							0x00000E94		// 다른 서버로 이전이 접수된 캐릭터는 접속할 수 없습니다.
#define LSID_AUTO003627							0x00000E95		// 이동 속도 %s / %d초
#define LSID_AUTO003628							0x00000E96		// 적용되어 있는 종족 버프가 없어 사용이 불가능 합니다.
#define LSID_AUTO003629							0x00000E97		// 현재 적용된 종족 버프에는 사용이 불가능 합니다.
#define LSID_AUTO003630							0x00000E98		// 패배의 흉터로부터 치유 받으셨습니다.
#define LSID_AUTO003631							0x00000E99		// 굴욕의 낙인으로부터 자유로워 지셨습니다.
#define LSID_AUTO003632							0x00000E9A		// 제작에 적합한 클래스가 아닙니다.
#define LSID_AUTO003633							0x00000E9B		// 공성 진지 제작에 필요한 아이템이 부족합니다.
#define LSID_AUTO003634							0x00000E9C		// 공성 진지 제작에 성공 하였습니다.
#define LSID_AUTO003635							0x00000E9D		// 공성 진지가 공격 받고 있습니다.
#define LSID_AUTO003636							0x00000E9E		// 이미 공성 진지 버프 효과를 적용 받고 있습니다.
#define LSID_AUTO003637							0x00000E9F		// 수성 타워 제작에 필요한 아이템이 부족합니다.
#define LSID_AUTO003638							0x00000EA0		// 수성 타워 제작에 성공 하였습니다.
#define LSID_AUTO003639							0x00000EA1		// %s 아이템의 착용 상위 레벨제한으로 인하여 해당 아이템의 능력이 발휘 되지 않습니다.
#define LSID_AUTO003640							0x00000EA2		// 길드 룸에서는 동일 길드원 이외의 대상을 소환할 수 없습니다.
#define LSID_AUTO003641							0x00000EA3		// 타 길드의 길드룸에 위치한 대상에게 이동할 수 없습니다.
#define LSID_AUTO003642							0x00000EA4		// 사용 가능 레벨에 의해 아바타가 사용할 수 없는 아이템입니다.
#define LSID_AUTO003643							0x00000EA5		// 시즈 모드 상태에서는 소환에 응할수 없습니다.
#define LSID_AUTO003644							0x00000EA6		// 다른 서버로 이전이 접수된 캐릭터는 삭제할 수 없습니다.
#define LSID_AUTO003645							0x00000EA7		// 창고가 개설되어 있지 않거나 게임 접속후 한번도 오픈되지 않았습니다.
#define LSID_AUTO003646							0x00000EA8		// 충전 바로가기
#define LSID_AUTO003647							0x00000EA9		// 창고에 있는 쿠폰 아이템은 바로 이용하실 수 없습니다.
#define LSID_AUTO003648							0x00000EAA		// 던전 생성 이후 입장을 시도해 주시기 바랍니다.
#define LSID_AUTO003649							0x00000EAB		// %s 제한 항목 조건에 의해 입장이 제한되었습니다.
#define LSID_AUTO003650							0x00000EAC		// 아직 던전 설정이 되지 않아 입장이 제한 되었습니다.
#define LSID_AUTO003651							0x00000EAD		// 던전 난이도 설정
#define LSID_AUTO003652							0x00000EAE		// 던전 난이도를 설정하세요. 
#define LSID_AUTO003653							0x00000EAF		// 던전 게이트 생성
#define LSID_AUTO003654							0x00000EB0		// A
#define LSID_AUTO003655							0x00000EB1		// B
#define LSID_AUTO003656							0x00000EB2		// C
#define LSID_AUTO003657							0x00000EB3		// D
#define LSID_AUTO003658							0x00000EB4		// E
#define LSID_AUTO003659							0x00000EB5		// 입장
#define LSID_AUTO003660							0x00000EB6		// 점령지 정보
#define LSID_AUTO003661							0x00000EB7		// 점령지 관리
#define LSID_AUTO003662							0x00000EB8		// 공성전 신청
#define LSID_AUTO003663							0x00000EB9		// 공성전 스케쥴
#define LSID_AUTO003664							0x00000EBA		// 길드 등급:
#define LSID_AUTO003665							0x00000EBB		// 길드 마스터:
#define LSID_AUTO003666							0x00000EBC		// 발전도
#define LSID_AUTO003667							0x00000EBD		// 현재 공업가치: %d
#define LSID_AUTO003668							0x00000EBE		// 현재 기술가치: %d
#define LSID_AUTO003669							0x00000EBF		// 현재 상업가치: %d
#define LSID_AUTO003670							0x00000EC0		// 점령지 세율
#define LSID_AUTO003671							0x00000EC1		// 현재 점령지 세율: %d%%
#define LSID_AUTO003672							0x00000EC2		// 세금관리
#define LSID_AUTO003673							0x00000EC3		// 수성관리
#define LSID_AUTO003674							0x00000EC4		// 특산품 관리
#define LSID_AUTO003675							0x00000EC5		// 점령지 발전
#define LSID_AUTO003676							0x00000EC6		// 점령지 스킬
#define LSID_AUTO003677							0x00000EC7		// 점령지 수수료 세율 조정
#define LSID_AUTO003678							0x00000EC8		// 주포 업그레이드
#define LSID_AUTO003679							0x00000EC9		// 게이트 업그레이드
#define LSID_AUTO003680							0x00000ECA		// 보호석 업그레이드
#define LSID_AUTO003681							0x00000ECB		// 통제장치 업그레이드
#define LSID_AUTO003682							0x00000ECC		// 용병 고용
#define LSID_AUTO003683							0x00000ECD		// 가드타워 설치
#define LSID_AUTO003684							0x00000ECE		// 공업 투자액:
#define LSID_AUTO003685							0x00000ECF		// 기술 투자액:
#define LSID_AUTO003686							0x00000ED0		// 상업 투자액:
#define LSID_AUTO003687							0x00000ED1		// 투자
#define LSID_AUTO003688							0x00000ED2		// 투자할 금액을 입력하세요.<br>입력된 금액은 금일 투자한 금액에 추가로 적용됩니다.
#define LSID_AUTO003689							0x00000ED3		// 소유 지역:
#define LSID_AUTO003690							0x00000ED4		// 공성전 시간
#define LSID_AUTO003691							0x00000ED5		// 공성전 신청 길드
#define LSID_AUTO003692							0x00000ED6		// 길드명
#define LSID_AUTO003693							0x00000ED7		// 종족
#define LSID_AUTO003694							0x00000ED8		// 공성전 날짜
#define LSID_AUTO003695							0x00000ED9		// 신청 길드
#define LSID_AUTO003696							0x00000EDA		// 공성 지역
#define LSID_AUTO003697							0x00000EDB		// 공성전 소모 비용
#define LSID_AUTO003698							0x00000EDC		// 확인을 누르면 공성전이 신청됩니다.
#define LSID_AUTO003699							0x00000EDD		// 수성 길드
#define LSID_AUTO003700							0x00000EDE		// 시작/완료 시간
#define LSID_AUTO003701							0x00000EDF		// 공성지역으로의 이동이 %d분 남았습니다.
#define LSID_AUTO003702							0x00000EE0		// 공성전 시작이 %d초 남았습니다.
#define LSID_AUTO003703							0x00000EE1		// 공성전이 시작 되었습니다.
#define LSID_AUTO003704							0x00000EE2		// %s가(이) 파괴 되었습니다.
#define LSID_AUTO003705							0x00000EE3		// 게이트가 파괴되어 배리어가 소멸 되었습니다.
#define LSID_AUTO003706							0x00000EE4		// 미사일이 발사 되었습니다.
#define LSID_AUTO003707							0x00000EE5		// 점령지 내부에 %s가(이) 노출되었습니다.
#define LSID_AUTO003708							0x00000EE6		// %s 길드가 %s 공성에 성공하였습니다.
#define LSID_AUTO003709							0x00000EE7		// %s 길드가 %s 수성에 성공하였습니다.
#define LSID_AUTO003710							0x00000EE8		// 토너먼트에 참가중인 캐릭터는 접속할 수 없습니다.
#define LSID_AUTO003711							0x00000EE9		// 토너먼트에 참가중인 캐릭터는 삭제할 수 없습니다.
#define LSID_AUTO003712							0x00000EEA		// 던전 난이도 설정
#define LSID_AUTO003713							0x00000EEB		// 던전 난이도를 설정하세요.
#define LSID_AUTO003714							0x00000EEC		// 던전 관리인
#define LSID_AUTO003715							0x00000EED		// 선택하신 던전은 A급 난이도 던전으로 아이템 드롭율이 상승된 던전이 생성 됩니다.
#define LSID_AUTO003716							0x00000EEE		// 선택하신 던전은 B급 난이도 던전으로 아이템 드롭율이 상승되고, 경험치가 상승된 던전이 생성 됩니다.
#define LSID_AUTO003717							0x00000EEF		// 선택하신 던전은 C급 난이도 던전으로 아이템 드롭율이 상승되고, 경험치 상승과 몬스터 레벨이 상향된 던전이 생성 됩니다.
#define LSID_AUTO003718							0x00000EF0		// 선택하신 던전은 D급 난이도 던전으로 아이템 드롭율이 상승되고, 드롭 아이템 등급 상향과 경험치 상승 몬스터 등급이 상향된 던전이 생성 됩니다.
#define LSID_AUTO003719							0x00000EF1		// 선택하신 던전은 E급 난이도 던전으로 몬스터 레벨 상향, 몬스터 등급 상향, 드롭 아이템 등급 상향과 경험치가 상승된 던전이 생성 됩니다.
#define LSID_AUTO003720							0x00000EF2		// 공업
#define LSID_AUTO003721							0x00000EF3		// 기술
#define LSID_AUTO003722							0x00000EF4		// 상업
#define LSID_AUTO003723							0x00000EF5		// 투자된 금액은 자정을 기준으로 하여 가치로 환산됩니다.
#define LSID_AUTO003724							0x00000EF6		// 투자 금액이 부족합니다.
#define LSID_AUTO003725							0x00000EF7		// 최소 투자 금액 이하는 투자하실 수 없습니다.
#define LSID_AUTO003726							0x00000EF8		// 하루 최대 투자 금액을 초과하여 투자 하실 수 없습니다.
#define LSID_AUTO003727							0x00000EF9		// 투자해도 더 이상의 가치를 상승 시킬 수 없습니다.
#define LSID_AUTO003728							0x00000EFA		// 해당 지역에서는 사용할 수 없는 포션입니다.
#define LSID_AUTO003729							0x00000EFB		// %s 를 적용 하시겠습니까?<br>
#define LSID_AUTO003730							0x00000EFC		// (비용 : %d)
#define LSID_AUTO003731							0x00000EFD		// 업그레이드 단계가 설정되지 않았습니다.
#define LSID_AUTO003732							0x00000EFE		// 업그레이드에 필요한 비용이 부족합니다.
#define LSID_AUTO003733							0x00000EFF		// 설정한 업그레이드 단계가 설정되었습니다.
#define LSID_AUTO003734							0x00000F00		// %s 지역 크리스탈이 출몰하였습니다.
#define LSID_AUTO003735							0x00000F01		// %s 지역 크리스탈이 소멸하였습니다.
#define LSID_AUTO003736							0x00000F02		// %s 지역 크리스탈이 파괴하였습니다.
#define LSID_AUTO003737							0x00000F03		// %s 지역 크리스탈을 %s 가(이) 획득하였습니다.
#define LSID_AUTO003738							0x00000F04		// %s 를 시작합니다.
#define LSID_AUTO003739							0x00000F05		// %s 를 완료하였습니다.
#define LSID_AUTO003740							0x00000F06		// %s 가 취소 되었습니다.
#define LSID_AUTO003741							0x00000F07		// %s 가 불가능한 상태입니다.
#define LSID_AUTO003742							0x00000F08		// 지역 명
#define LSID_AUTO003743							0x00000F09		// 소유자 명
#define LSID_AUTO003744							0x00000F0A		// 소유 횟수
#define LSID_AUTO003745							0x00000F0B		// 지역 소유자가 지정되지 않아 %s 할 수 없습니다.
#define LSID_AUTO003746							0x00000F0C		// %s 가능 지역이 아닙니다.
#define LSID_AUTO003747							0x00000F0D		// %s 인원이 초과하여 채굴을 할 수 없습니다.
#define LSID_AUTO003748							0x00000F0E		// 애널라이저 작동 선택
#define LSID_AUTO003749							0x00000F0F		// 채집
#define LSID_AUTO003750							0x00000F10		// 조사
#define LSID_AUTO003751							0x00000F11		// 시작
#define LSID_AUTO003752							0x00000F12		// 애널라이저 배터리가 없습니다.
#define LSID_AUTO003753							0x00000F13		// 이미 다른 캐릭터가 크리스탈을 조사 중에 있습니다.
#define LSID_AUTO003754							0x00000F14		// 이미 소유 지역을 가지고 있는 캐릭터 입니다.
#define LSID_AUTO003755							0x00000F15		// 조사 지역이 아닙니다.
#define LSID_AUTO003756							0x00000F16		// 해당 던전으로 입장이 불가능 합니다.
#define LSID_AUTO003757							0x00000F17		// 현재 파티 초대를 요청하신 플레이어는 초대 할 수 없습니다.
#define LSID_AUTO003758							0x00000F18		// 현재 파티를 구성 할 수 없습니다.
#define LSID_AUTO003759							0x00000F19		// 동일 파티에 소속되어 있지 않으므로 입장 할 수 없습니다.
#define LSID_AUTO003760							0x00000F1A		// 5초 이후에 해당 던전에서 벗어 납니다.
#define LSID_AUTO003761							0x00000F1B		// 더 이상 추가로 파티에 초대 할 수 없습니다.
#define LSID_AUTO003762							0x00000F1C		// 입장 조건이 맞지 않아 입장 할 수 없습니다.
#define LSID_AUTO003763							0x00000F1D		// 길드 던전 내부에서 동일 길드 원 이외의 플레이어와 파티 할 수 없습니다.
#define LSID_AUTO003764							0x00000F1E		// 공성 전 길드 던전 내부에서 동일 길드 원 이외의 플레이어와 파티 할 수 없습니다.
#define LSID_AUTO003765							0x00000F1F		// 던전 생성은 파티장만 가능합니다.
#define LSID_AUTO003766							0x00000F20		// 파티 상태가 아니므로 해당 던전을 생성할 수 없습니다.
#define LSID_AUTO003767							0x00000F21		// 파티 상태에서는 개인형 던전을 생성 할 수 없습니다.
#define LSID_AUTO003768							0x00000F22		// %d 회
#define LSID_AUTO003769							0x00000F23		// 지역 소유자는 %s 할 수 없습니다.
#define LSID_AUTO003770							0x00000F24		// 소유 금액이 부족하여 %s를(을) 진행 할 수 없습니다.
#define LSID_AUTO003771							0x00000F25		// 지역 이용료가 %d 지불 되었습니다.
#define LSID_AUTO003772							0x00000F26		// 지역 이용료 %d 입금 되었습니다.
#define LSID_AUTO003773							0x00000F27		// HackShield 핵쉴드 엔진파일이 삭제되었거나 비정상적입니다.
#define LSID_AUTO003774							0x00000F28		// HackShield 핵쉴드 모듈파일이 삭제되었거나 비정상적입니다.
#define LSID_AUTO003775							0x00000F29		// 한정 판매 아이템 수량이 없어 더 이상 구입 할 수 없습니다.
#define LSID_AUTO003776							0x00000F2A		// %d 일 동안 %d 개만 한정 판매 합니다.
#define LSID_AUTO003777							0x00000F2B		// 오늘만 %d 개 %d CASH에 판매 합니다.
#define LSID_AUTO003778							0x00000F2C		// 한정 판매 기간이 모두 종료 되어 더 이상 구입할 수 없습니다.
#define LSID_AUTO003779							0x00000F2D		// 특별 한정 판매 가격 : 
#define LSID_AUTO003780							0x00000F2E		// CASH
#define LSID_AUTO003781							0x00000F2F		// HackShield 업데이트성공 (Value = 0x00000000 )
#define LSID_AUTO003782							0x00000F30		// HackShield HSUpdate.env 파일을 읽을 수 없습니다.
#define LSID_AUTO003783							0x00000F31		// HackShield HSUpdate.env 파일을 쓸 수 없습니다.
#define LSID_AUTO003784							0x00000F32		// HackShield 해당서버에 연결할 수 없습니다.
#define LSID_AUTO003785							0x00000F33		// HackShield 네트워크결과 입력 중에 오류가 발생 하였습니다.
#define LSID_AUTO003786							0x00000F34		// HackShield Hackshield 업데이트 프로그램 관련 파일을 찾을 수 없습니다.
#define LSID_AUTO003787							0x00000F35		// HSUpdate.pt 인증파일을 찾을 수 없습니다. 
#define LSID_AUTO003788							0x00000F36		// HackShield 업데이트 프로그램이 업데이트 전송 시간을 초과하였습니다.
#define LSID_AUTO003789							0x00000F37		// 씨앗 심기
#define LSID_AUTO003790							0x00000F38		// 씨앗을 심습니다.<br>씨앗에 이름을 지어주시겠어요?<br>(취소 시 기본 이름으로 설정됩니다.)
#define LSID_AUTO003791							0x00000F39		// 이름 입력
#define LSID_AUTO003792							0x00000F3A		// (예 : 무럭무럭)
#define LSID_AUTO003793							0x00000F3B		// 씨앗 관리
#define LSID_AUTO003794							0x00000F3C		// 물 주기
#define LSID_AUTO003795							0x00000F3D		// 약 뿌리기
#define LSID_AUTO003796							0x00000F3E		// 가꾸기
#define LSID_AUTO003797							0x00000F3F		// 재배 취소
#define LSID_AUTO003798							0x00000F40		// 재배 리모트 컨트롤러
#define LSID_AUTO003799							0x00000F41		// 재배지역
#define LSID_AUTO003800							0x00000F42		// 재배좌표
#define LSID_AUTO003801							0x00000F43		// 성장 정도
#define LSID_AUTO003802							0x00000F44		// 시간
#define LSID_AUTO003803							0x00000F45		// 상태
#define LSID_AUTO003804							0x00000F46		// 외형
#define LSID_AUTO003805							0x00000F47		// 좋음
#define LSID_AUTO003806							0x00000F48		// 보통
#define LSID_AUTO003807							0x00000F49		// 나쁨
#define LSID_AUTO003808							0x00000F4A		// 따기
#define LSID_AUTO003809							0x00000F4B		// 마지막 찬수!!! 한정판 아이템을 구입할 수 있는 이 기회를 놓치지 마세요!
#define LSID_AUTO003810							0x00000F4C		// 한정 판매 중인 아이템 입니다. 한정 판매 창에서 구매해 주세요.
#define LSID_AUTO003811							0x00000F4D		// 씨앗
#define LSID_AUTO003812							0x00000F4E		// 씨앗 심기에 성공하였습니다.
#define LSID_AUTO003813							0x00000F4F		// 작물 관리가 성공하였습니다.
#define LSID_AUTO003814							0x00000F50		// 작물 재배가 취소되었습니다.
#define LSID_AUTO003815							0x00000F51		// 현재 열려있는 NPC 관련 창을 닫으신 후에 다시 사용하시기 바랍니다.
#define LSID_AUTO003816							0x00000F52		// 씨앗 아이템의 보유가 확인되지 않고 있습니다.
#define LSID_AUTO003817							0x00000F53		// 씨앗이름에는 특수문자를 사용하실 수 없습니다.
#define LSID_AUTO003818							0x00000F54		// 금지된 단어를 사용하실 수 없습니다.
#define LSID_AUTO003819							0x00000F55		// 재배가 불가능한 지역입니다.
#define LSID_AUTO003820							0x00000F56		// 관리가 가능한 시간이 아닙니다.
#define LSID_AUTO003821							0x00000F57		// 잘못된 관리 메뉴 입니다.
#define LSID_AUTO003822							0x00000F58		// 리모트 컨트롤러 아이템이 없습니다.
#define LSID_AUTO003823							0x00000F59		// 이미 재배중인 작물이 있습니다.
#define LSID_AUTO003824							0x00000F5A		// 씨앗의 주인이 아닙니다.
#define LSID_AUTO003825							0x00000F5B		// 씨앗과의 거리가 멉니다.
#define LSID_AUTO003826							0x00000F5C		// 잘못된 이벤트 타입입니다. 
#define LSID_AUTO003827							0x00000F5D		// 재배 관련 에러 (%d)
#define LSID_AUTO003828							0x00000F5E		// 작물
#define LSID_AUTO003829							0x00000F5F		// 작물의 수확에 성공 하였습니다.
#define LSID_AUTO003830							0x00000F60		// 이름이 입력되지 않았습니다. 다시 입력해주세요.<br>(취소 시 기본 이름으로 설정됩니다.)
#define LSID_AUTO003831							0x00000F61		// 시듬
#define LSID_AUTO003832							0x00000F62		// 아바타가 사용할 수 없는 아이템입니다. 계급이 낮습니다.
#define LSID_AUTO003833							0x00000F63		// 경작물이 존재하지 않아 옮겨심기를 할 수 없습니다.
#define LSID_AUTO003834							0x00000F64		// 재배된 경작물에 병균이 생겼습니다. 서둘러 관리해주세요.
#define LSID_AUTO003835							0x00000F65		// 건강하지 않은 게임시간에 있어 요청한 작업을 수행할 수 없습니다.
#define LSID_AUTO003836							0x00000F66		// 건강하지 않은 게임시간에 진입하여 수행 중이던 작업을 종료합니다.
#define LSID_AUTO003837							0x00000F67		// 대상자가 건강하지 않은 게임시간에 있어 요청한 작업을 수행할 수 없습니다.
#define LSID_AUTO003838							0x00000F68		// 게임한 시간이 1시간 되었습니다.
#define LSID_AUTO003839							0x00000F69		// 온라인 누적 시간이 3시간 되었습니다. 로그아웃하여 휴식할 것을 권장합니다.
#define LSID_AUTO003840							0x00000F6A		// 피로게임 시간에 진입했으며 게임수익이 정상수치 대비 50% 하락됩니다. 빠른 시간 내 로그아웃을 하여 휴식을 하시고, 적당한 운동을 하세요.
#define LSID_AUTO003841							0x00000F6B		// 건강하지 않은 게임시간으로 진입되었습니다. 바로 로그아웃하시고 휴식을 하세요. 만일 로그아웃하지 않을 경우에는 신체건강에 해로울 수 있습니다. 게임 내에서 획득되는 수익이 이미 0으로 전혀 없습니다.
#define LSID_AUTO003842							0x00000F6C		// 건강하지 않은 게임시간에 진입한 상태입니다. 바로 로그아웃하시고 휴식을 하세요.
#define LSID_AUTO003843							0x00000F6D		// 축하합니다. 당신은 건강시간에 진입했습니다.
#define LSID_AUTO003844							0x00000F6E		// 누적 로그인 시간 : %d시간 %d분 가량입니다.
#define LSID_AUTO003845							0x00000F6F		// 누적 로그아웃 시간 : %d시간 %d분 가량입니다.
#define LSID_AUTO003846							0x00000F70		// 아이템 루팅 실패 - 겹칠수 없는 아이템입니다. 
#define LSID_AUTO003847							0x00000F71		// 아이템 루팅 실패 - 루팅 딜레이가 경과하지 않았습니다. 
#define LSID_AUTO003848							0x00000F72		// 아이템 루팅 실패 - 루팅이 불가능한(락상태의) 아이템 입니다. 
#define LSID_AUTO003849							0x00000F73		// 아이템 루팅 실패 - 석화 상태에서는 아이템을 루팅할 수 없습니다. 
#define LSID_AUTO003850							0x00000F74		// 포인트 정보
#define LSID_AUTO003851							0x00000F75		// 가공포인트
#define LSID_AUTO003852							0x00000F76		// 사냥포인트
#define LSID_AUTO003853							0x00000F77		// 가공포인트:
#define LSID_AUTO003854							0x00000F78		// 사냥포인트:
#define LSID_AUTO003855							0x00000F79		// 황금광은 가공할 수 없습니다.
#define LSID_AUTO003856							0x00000F7A		// 가공 포인트가 부족합니다.
#define LSID_AUTO003857							0x00000F7B		// 사냥 포인트가 부족합니다.
#define LSID_AUTO003858							0x00000F7C		// 서버와 클라이언트의 액션포인트가 틀립니다. (서버 : %d 가공포인트, %d 사냥포인트)(클라이언트 : %d 가공포인트, %d 사냥포인트)
#define LSID_AUTO003859							0x00000F7D		// 해당 머니 타입은 존재하지 않습니다.
#define LSID_AUTO003860							0x00000F7E		// 월
#define LSID_AUTO003861							0x00000F7F		// 화
#define LSID_AUTO003862							0x00000F80		// 수
#define LSID_AUTO003863							0x00000F81		// 목
#define LSID_AUTO003864							0x00000F82		// 금
#define LSID_AUTO003865							0x00000F83		// 토
#define LSID_AUTO003866							0x00000F84		// 일
#define LSID_AUTO003867							0x00000F85		// 요일을 선택해주세요.
#define LSID_AUTO003868							0x00000F86		// 총 사령관 임명
#define LSID_AUTO003869							0x00000F87		// 오전 총 사령관
#define LSID_AUTO003870							0x00000F88		// 오후 총 사령관
#define LSID_AUTO003871							0x00000F89		// 저녁 총 사령관
#define LSID_AUTO003872							0x00000F8A		// 사령관 이름 입력
#define LSID_AUTO003873							0x00000F8B		// 캐릭터 명 입력
#define LSID_AUTO003874							0x00000F8C		// 응모
#define LSID_AUTO003875							0x00000F8D		// 황금포인트:
#define LSID_AUTO003876							0x00000F8E		// 황금시대 이벤트에 응모하셨습니다.<br>사용된 포인트는 당첨여부와 관계없이 반환되지 않습니다.<br>정말 응모하겠습니까?
#define LSID_AUTO003877							0x00000F8F		// 황금 포인트가 부족합니다.
#define LSID_AUTO003878							0x00000F90		// 구입 자격이 없습니다.
#define LSID_AUTO003879							0x00000F91		// 해당 포션을 사용하기 위해서는 등급이 %s 이거나 그 이상이어야 합니다.
#define LSID_AUTO003880							0x00000F92		// 해당 레이다를 사용하기 위해서는 등급이 %s 이거나 그 이상이어야 합니다.
#define LSID_AUTO003881							0x00000F93		// 족장인 %s 님을 탄핵 하려 합니다.
#define LSID_AUTO003882							0x00000F94		// 탄핵은 4등급 이상의 길드 마스터만이 사용 가능 합니다.
#define LSID_AUTO003883							0x00000F95		// 소환 대상 길드/파티의 소속 맴버 이름을 입력하세요.
#define LSID_AUTO003884							0x00000F96		// %s 님을 %s 요일 %s 으로 임명 하시겠습니까?
#define LSID_AUTO003885							0x00000F97		// 족장님으로 부터 %s 요일 %s 임명을 요청 받았습니다. 수락 하시겠습니까?
#define LSID_AUTO003886							0x00000F98		// 해당 사령관을 해임 하시겠습니까?
#define LSID_AUTO003887							0x00000F99		// 계급 제한으로 인해 사용이 불가능 합니다.
#define LSID_AUTO003888							0x00000F9A		// 재임명 시간이 되지 않았습니다
#define LSID_AUTO003889							0x00000F9B		// 자신은 임명할수 없습니다.
#define LSID_AUTO003890							0x00000F9C		// 임명 불가능한 시간입니다.
#define LSID_AUTO003891							0x00000F9D		// 총사령관 임명 관련 알수 없는 에러 %d
#define LSID_AUTO003892							0x00000F9E		// 총사령관 임명이 완료 되었습니다.
#define LSID_AUTO003893							0x00000F9F		// 총사령관 해임이 완료 되었습니다.
#define LSID_AUTO003894							0x00000FA0		// 지휘관
#define LSID_AUTO003895							0x00000FA1		// 기동타격대장
#define LSID_AUTO003896							0x00000FA2		// 테러진압대장
#define LSID_AUTO003897							0x00000FA3		// 타격지원대장
#define LSID_AUTO003898							0x00000FA4		// 사령부
#define LSID_AUTO003899							0x00000FA5		// 지휘부
#define LSID_AUTO003900							0x00000FA6		// 기동타격대
#define LSID_AUTO003901							0x00000FA7		// 테러진압대
#define LSID_AUTO003902							0x00000FA8		// 타격지원대
#define LSID_AUTO003903							0x00000FA9		// 탄핵 명령이 잘못되었습니다.
#define LSID_AUTO003904							0x00000FAA		// %s 님이 %s 요일 %s에 임명되셨습니다.
#define LSID_AUTO003905							0x00000FAB		// %s 님이 %s 요일 %s에서 해임되셨습니다.
#define LSID_AUTO003907							0x00000FAC		// 족장은 길드를 탈퇴할 수 없습니다.
#define LSID_AUTO003908							0x00000FAD		// FG로 인해 블록 처리 되었습니다. <br>프로그램을 종료합니다.
#define LSID_AUTO003909							0x00000FAE		// 선택한 임원을 정말 해고 하시겠습니까?<br>해임한 인원은 24시간동안 다시 임명하실 수 없습니다.
#define LSID_AUTO003910							0x00000FAF		// 분류
#define LSID_AUTO003911							0x00000FB0		// %d단계
#define LSID_AUTO003912							0x00000FB1		// 적용레벨
#define LSID_AUTO003913							0x00000FB2		// %d~%d Lv
#define LSID_AUTO003914							0x00000FB3		// 레벨 탈릭이 가능한 레벨이 아닙니다.
#define LSID_AUTO003915							0x00000FB4		// 해당 아이템은 프리미엄 서비스 이용자만 사용하실 수 있습니다.
#define LSID_AUTO003916							0x00000FB5		// 프리미엄 캐쉬 아이템 %s의 효과가 적용되지 않습니다.
#define LSID_AUTO003917							0x00000FB6		// 프리미엄 서비스 이용시 획득할 수 있는 최대 임시 포인트는 %d 포인트 입니다.
#define LSID_AUTO003918							0x00000FB7		// 레벨 차이로 사용이 제한 됩니다.
#define LSID_AUTO003919							0x00000FB8		// 대상의 FP가 부족하여 적용이 되지 않습니다.
#define LSID_AUTO003920							0x00000FB9		// FP가 부족하여 스킬 효과가 사라집니다.
#define LSID_AUTO003921							0x00000FBA		// FP가 부족하여 포스 효과가 사라집니다.
#define LSID_AUTO003922							0x00000FBB		// 대상의 SP가 부족하여 적용이 되지 않습니다.
#define LSID_AUTO003923							0x00000FBC		// SP가 부족하여 더 이상 공격 할 수 없습니다.
#define LSID_AUTO003924							0x00000FBD		// SP가 부족하여 스킬 효과가 사라집니다.
#define LSID_AUTO003925							0x00000FBE		// SP가 부족하여 포스 효과가 사라집니다.
#define LSID_AUTO003926							0x00000FBF		// SP가 부족하여 더 이상 회피 할 수 없습니다.
#define LSID_AUTO003927							0x00000FC0		// SP가 부족하여 더 이상 블록 할 수 없습니다.
#define LSID_AUTO003928							0x00000FC1		// %s가 %d 상승 되었습니다. 이 효과는 %d초 후에 사라집니다.
#define LSID_AUTO003929							0x00000FC2		// 회피율
#define LSID_AUTO003930							0x00000FC3		// 근접 숙련도가 해제되었습니다.
#define LSID_AUTO003931							0x00000FC4		// 원거리 숙련도가 해제되었습니다.
#define LSID_AUTO003932							0x00000FC5		// 방어 숙련도가 해제되었습니다.
#define LSID_AUTO003933							0x00000FC6		// 포스 숙련도가 해제되었습니다.
#define LSID_AUTO003934							0x00000FC7		// 방패 숙련도가 해제되었습니다.
#define LSID_AUTO003935							0x00000FC8		// 종족 특화 숙련도가 해제되었습니다.
#define LSID_AUTO003936							0x00000FC9		// 모든 숙련도가 해제되었습니다.
#define LSID_AUTO003937							0x00000FCA		// 레벨 56 이후 해제 가능합니다.
#define LSID_AUTO003938							0x00000FCB		// 해제하시려는 숙련도가 GM이어야 해제 가능합니다.
#define LSID_AUTO003939							0x00000FCC		// 이미 해제된 숙련도입니다.
#define LSID_AUTO003940							0x00000FCD		// 기갑 장비 튜닝 중에는 기갑장비를 입/출고 할 수 없습니다.
#define LSID_AUTO003941							0x00000FCE		// 랭크
#define LSID_AUTO003942							0x00000FCF		// %d단계
#define LSID_AUTO003943							0x00000FD0		// 추가 효과
#define LSID_AUTO003944							0x00000FD1		// 추가 공격력 + %d
#define LSID_AUTO003945							0x00000FD2		// 추가 방어력 + %d
#define LSID_AUTO003946							0x00000FD3		// 추가 게이지 + %d
#define LSID_AUTO003947							0x00000FD4		// 종족 방어력 + %.0f
#define LSID_AUTO003948							0x00000FD5		// 무기 랭크 업
#define LSID_AUTO003949							0x00000FD6		// 방어구 랭크 업
#define LSID_AUTO003950							0x00000FD7		// 랭크 업
#define LSID_AUTO003951							0x00000FD8		// 수수료가 부족합니다.
#define LSID_AUTO003952							0x00000FD9		// 랭크 업에 성공하였습니다
#define LSID_AUTO003953							0x00000FDA		// 랭크 업에 실패하여 %s이 소멸 되었습니다.
#define LSID_AUTO003954							0x00000FDB		// 실행
#define LSID_AUTO003955							0x00000FDC		// 포스 젬
#define LSID_AUTO003956							0x00000FDD		// 세이프 젬
#define LSID_AUTO003957							0x00000FDE		// 현재 해당 기갑의 내구도가 0이므로 출고할 수 없습니다.
#define LSID_AUTO003958							0x00000FDF		// 현재 해당 기갑의 내구도가 0이므로 우선 수리를 해야만 합니다
#define LSID_AUTO003959							0x00000FE0		// 해당 기갑은 수리가 불가능한 기갑입니다.
#define LSID_AUTO003960							0x00000FE1		// 해당 기갑은 튜닝이 불가능한 기갑입니다.
#define LSID_AUTO003961							0x00000FE2		// 출고 여부
#define LSID_AUTO003962							0x00000FE3		// 출고 가능
#define LSID_AUTO003963							0x00000FE4		// 출고 불가
#define LSID_AUTO003964							0x00000FE5		// 연합군 전사 포상 57LV
#define LSID_AUTO003965							0x00000FE6		// 연합군 레인저 포상 57LV
#define LSID_AUTO003966							0x00000FE7		// 연합군 포스 포상 57LV
#define LSID_AUTO003967							0x00000FE8		// 동맹군 전사 포상 57LV
#define LSID_AUTO003968							0x00000FE9		// 동맹군 레인저 포상 57LV
#define LSID_AUTO003969							0x00000FEA		// 동맹군 포스 포상 57LV
#define LSID_AUTO003970							0x00000FEB		// 제국군 전사 포상 57LV
#define LSID_AUTO003971							0x00000FEC		// 제국군 레인저 포상 57LV
#define LSID_AUTO003972							0x00000FED		// 제국군 런처 포상 57LV
#define LSID_AUTO003973							0x00000FEE		// 연합군 전사 포상 60LV
#define LSID_AUTO003974							0x00000FEF		// 연합군 레인저 포상 60LV
#define LSID_AUTO003975							0x00000FF0		// 연합군 포스 포상 60LV
#define LSID_AUTO003976							0x00000FF1		// 동맹군 전사 포상 60LV
#define LSID_AUTO003977							0x00000FF2		// 동맹군 레인저 포상 60LV
#define LSID_AUTO003978							0x00000FF3		// 동맹군 포스 포상 60LV
#define LSID_AUTO003979							0x00000FF4		// 제국군 전사 포상 60LV
#define LSID_AUTO003980							0x00000FF5		// 제국군 레인저 포상 60LV
#define LSID_AUTO003981							0x00000FF6		// 제국군 런처 포상 60LV
#define LSID_AUTO003982							0x00000FF7		// 연합군 전사 포상 63LV
#define LSID_AUTO003983							0x00000FF8		// 연합군 레인저 포상 63LV
#define LSID_AUTO003984							0x00000FF9		// 연합군 포스 포상 63LV
#define LSID_AUTO003985							0x00000FFA		// 동맹군 전사 포상 63LV
#define LSID_AUTO003986							0x00000FFB		// 동맹군 레인저 포상 63LV
#define LSID_AUTO003987							0x00000FFC		// 동맹군 포스 포상 63LV
#define LSID_AUTO003988							0x00000FFD		// 제국군 전사 포상 63LV
#define LSID_AUTO003989							0x00000FFE		// 제국군 레인저 포상 63LV
#define LSID_AUTO003990							0x00000FFF		// 제국군 런처 포상 63LV
#define LSID_AUTO003991							0x00001000		// 연합군 전사 포상 65LV
#define LSID_AUTO003992							0x00001001		// 연합군 레인저 포상 65LV
#define LSID_AUTO003993							0x00001002		// 연합군 포스 포상 65LV
#define LSID_AUTO003994							0x00001003		// 동맹군 전사 포상 65LV
#define LSID_AUTO003995							0x00001004		// 동맹군 레인저 포상 65LV
#define LSID_AUTO003996							0x00001005		// 동맹군 포스 포상 65LV
#define LSID_AUTO003997							0x00001006		// 제국군 전사 포상 65LV
#define LSID_AUTO003998							0x00001007		// 제국군 레인저 포상 65LV
#define LSID_AUTO003999							0x00001008		// 제국군 런처 포상 65LV
#define LSID_AUTO004000							0x00001009		// 발동탄 사용을 시작합니다.
#define LSID_AUTO004001							0x0000100A		// 발동탄 사용을 중지합니다.
#define LSID_AUTO004002							0x0000100B		// 발동탄이 없거나 사용이 불가능한 무기를 장착 중입니다.
#define LSID_AUTO004003							0x0000100C		// 발동탄이 장착되어 있지 않습니다.
#define LSID_AUTO004004							0x0000100D		// 발동탄을 사용할 수 없습니다.
#define LSID_AUTO004005							0x0000100E		// 사용중인 발동탄이 제거되어 발동탄 사용이 중지됩니다.
#define LSID_AUTO004006							0x0000100F		// 사용중인 무기가 제거되어 발동탄 사용이 중지됩니다.
#define LSID_AUTO004007							0x00001010		// %d %s 를 획득 하였습니다.
#define LSID_AUTO004008							0x00001011		// 수수료 :
#define LSID_AUTO004009							0x00001012		// 랭크 업 타입과 장비 타입이 맞지 않습니다.
#define LSID_AUTO004010							0x00001013		// 대여중인 아이템은 랭크 업이 불가능합니다.
#define LSID_AUTO004011							0x00001014		// 장착중인 아이템은 랭크 업이 불가능합니다.
#define LSID_AUTO004012							0x00001015		// 랭크 업이 불가능한 아이템입니다.
#define LSID_AUTO004013							0x00001016		// 랭크 업 타입과 재료 타입이 맞지 않습니다.
#define LSID_AUTO004014							0x00001017		// 랭크 업에는 랭크 업 재료 아이템만이 사용됩니다.
#define LSID_AUTO004015							0x00001018		// 먼저 랭크 업할 아이템을 선택해 주십시오.
#define LSID_AUTO004016							0x00001019		// 랭크 업할 아이템이 없습니다.
#define LSID_AUTO004017							0x0000101A		// 랭크 업을 할 때에는 반드시 랭크 업 재료 아이템이 있어야 합니다.
#define LSID_AUTO004018							0x0000101B		// 더 이상 랭크 업이 불가능한 아이템 입니다.
#define LSID_AUTO004019							0x0000101C		// 석화 상태
#define LSID_AUTO004020							0x0000101D		// 없는 대상 아이템
#define LSID_AUTO004021							0x0000101E		// 대상 아이템 lock
#define LSID_AUTO004022							0x0000101F		// 없는 재료 아이템
#define LSID_AUTO004023							0x00001020		// 재료 리소스 아이템 아님
#define LSID_AUTO004024							0x00001021		// 재료 아이템 lock
#define LSID_AUTO004025							0x00001022		// 유효한 대상, 재료 아이템 아님
#define LSID_AUTO004026							0x00001023		// 맥스단계까지 랭크 업된 상태
#define LSID_AUTO004027							0x00001024		// 아이템 랭크 업 실패 : 알 수 없는 에러
#define LSID_AUTO004028							0x00001025		// 아이템 랭크업 수수료 표시 실패 : 알 수 없는 에러
#define LSID_AUTO004029							0x00001026		// 아이템 랭크업에 성공 했습니다.
#define LSID_AUTO004030							0x00001027		// 지정되지 않는 서버로의 접속이 감지되었습니다.
#define LSID_AUTO004031							0x00001028		// 레벨 업그레이드
#define LSID_AUTO004032							0x00001029		// 등급 업그레이드
#define LSID_AUTO004033							0x0000102A		// 대여중인 아이템은 레벨 업이 불가능합니다.
#define LSID_AUTO004034							0x0000102B		// 장착중인 아이템은 레벨 업이 불가능합니다.
#define LSID_AUTO004035							0x0000102C		// 레벨 업이 불가능한 아이템입니다.
#define LSID_AUTO004036							0x0000102D		// 첫번째 슬롯의 아이템과 동일한 아이템을 놓아야 합니다.
#define LSID_AUTO004037							0x0000102E		// 첫번째 슬롯의 아이템과 등급이 같아야 합니다.
#define LSID_AUTO004038							0x0000102F		// 첫번째 슬롯의 아이템과 업그레이드 상태가 같아야 합니다.
#define LSID_AUTO004039							0x00001030		// 레벨 업할 아이템을 올바른 슬롯위치에 놓아야 합니다.
#define LSID_AUTO004040							0x00001031		// 레벨 업 타입과 재료 타입이 맞지 않습니다.
#define LSID_AUTO004041							0x00001032		// 레벨 업에는 레벨 업 재료 아이템만이 사용됩니다.
#define LSID_AUTO004042							0x00001033		// 먼저 레벨 업할 아이템을 선택해 주십시오.
#define LSID_AUTO004043							0x00001034		// 레벨 업할 아이템이 없습니다.
#define LSID_AUTO004044							0x00001035		// 두번째 슬롯에 첫번째 슬롯의 아이템과 동일한 아이템을 놓아야 합니다.
#define LSID_AUTO004045							0x00001036		// 레벨 업을 할 때에는 반드시 레벨 업 재료 아이템이 있어야 합니다.
#define LSID_AUTO004046							0x00001037		// 대여중인 아이템은 등급 업이 불가능합니다.
#define LSID_AUTO004047							0x00001038		// 장착중인 아이템은 등급 업이 불가능합니다.
#define LSID_AUTO004048							0x00001039		// 등급 업이 불가능한 아이템입니다.
#define LSID_AUTO004049							0x0000103A		// 더 이상 등급 업이 불가능한 아이템입니다.
#define LSID_AUTO004050							0x0000103B		// 등급 업 타입과 재료 타입이 맞지 않습니다.
#define LSID_AUTO004051							0x0000103C		// 등급 업에는 등급 업 재료 아이템만이 사용됩니다.
#define LSID_AUTO004052							0x0000103D		// 먼저 등급 업할 아이템을 선택해 주십시오.
#define LSID_AUTO004053							0x0000103E		// 등급 업할 아이템이 없습니다.
#define LSID_AUTO004054							0x0000103F		// 등급 업을 할 때에는 반드시 등급 업 재료 아이템이 있어야 합니다.
#define LSID_AUTO004055							0x00001040		// 정의되지 않은 수수료표시 타입입니다.
#define LSID_AUTO004056							0x00001041		// 맥스단계까지 레벨 업된 상태
#define LSID_AUTO004057							0x00001042		// 맥스단계까지 등급 업된 상태
#define LSID_AUTO004058							0x00001043		// 아이템 레벨 업에 성공 했습니다.
#define LSID_AUTO004059							0x00001044		// 레벨 업에 실패하여 %s과 %s이 소멸 되었습니다.
#define LSID_AUTO004060							0x00001045		// 레벨 업 시(조건에 맞지않음)
#define LSID_AUTO004061							0x00001046		// 아이템 레벨 업 실패 : 알 수 없는 에러
#define LSID_AUTO004062							0x00001047		// 아이템 등급 업에 성공 했습니다.
#define LSID_AUTO004063							0x00001048		// 등급 업에 실패하여 %s과 %s이 소멸 되었습니다.
#define LSID_AUTO004064							0x00001049		// 등급 업 시(조건에 맞지않음)
#define LSID_AUTO004065							0x0000104A		// 아이템 등급 업 실패 : 알 수 없는 에러
#define LSID_AUTO004066							0x0000104B		// 등급
#define LSID_AUTO004067							0x0000104C		// %c 등급
#define LSID_AUTO004068							0x0000104D		// 등급효과
#define LSID_AUTO004069							0x0000104E		// %s 에 오신 것을 환영합니다.
#define LSID_AUTO004070							0x0000104F		// %s요일 %2d:%2d - %2d:%2d
#define LSID_AUTO004071							0x00001050		// 길드 마스터가 아닙니다.
#define LSID_AUTO004072							0x00001051		// 공성전을 신청할 수 있는 맵이 아닙니다.
#define LSID_AUTO004073							0x00001052		// 공성전을 신청할 수 있는 기간이 아닙니다.
#define LSID_AUTO004074							0x00001053		// 공성전 관련 에러가 발생했습니다 : (%d)
#define LSID_AUTO004075							0x00001054		// 공성전 신청이 완료되었습니다.
#define LSID_AUTO004076							0x00001055		// 수성 길드는 신청할 수 없습니다.
#define LSID_AUTO004077							0x00001056		// 인비져블 상태에서는 거래 요청을 할 수 없습니다.
#define LSID_AUTO004078							0x00001057		// 인비져블 상태에서는 아이템을 루팅할 수 없습니다.
#define LSID_AUTO004079							0x00001058		// 인비져블 상태에서는 아이템을 드랍할 수 없습니다.
#define LSID_AUTO004080							0x00001059		// 통제장치를 획득하여 인비져블 포션을 사용할 수 없습니다.
#define LSID_AUTO004081							0x0000105A		// 현재 아바타는 보호 상태입니다. %.0f 초 남았습니다.
#define LSID_AUTO004082							0x0000105B		// 보호 상태가 해제 되었습니다.
#define LSID_AUTO004083							0x0000105C		// 자신 또는 상대방이 인비져블 상태일 경우 거래가 불가능 합니다.
#define LSID_AUTO004084							0x0000105D		// 황금
#define LSID_AUTO004085							0x0000105E		// 황금포인트
#define LSID_AUTO004086							0x0000105F		// %s황금포인트 - %s
#define LSID_AUTO004087							0x00001060		// %s가공포인트 - %s
#define LSID_AUTO004088							0x00001061		// %s사냥포인트 - %s
#define LSID_AUTO004089							0x00001062		// 퀘스트 보유 최대 갯수를 초과 하여 지급된 퀘스트 중 첫 퀘스트가 삭제 되었습니다.
#define LSID_AUTO004090							0x00001063		// %d~%d 레벨 크리전쟁 진행 시간
#define LSID_AUTO004091							0x00001064		// %d~%d 레벨 크리전쟁
#define LSID_AUTO004092							0x00001065		// GameMon이 이미 실행되어 있습니다. GameMon 프로세스를 종료하거나, 컴퓨터를 재부팅 후 다시 실행해 주십시오.
#define LSID_AUTO004093							0x00001066		// 게임이 중복 실행되었거나 게임가드가 이미 실행되어 있습니다. 게임을 종료 한 후 다시 실행해 주십시오.
#define LSID_AUTO004094							0x00001067		// 바이러스 및 해킹 툴 검사 모듈 로딩에 실패했습니다. 메모리가 부족하거나, 혹은 바이러스나 스파이웨어 검사를 해 주십시오
#define LSID_AUTO004095							0x00001068		// GameMon 초기화에 실패했습니다. 재부팅 후 다시 실행하거나, 충돌할 만한 다른 프로그램들을 종료한 후 다시 실행해 주십시오. 혹은 바이러스나 스파이웨어 검사를 해 주십시오.
#define LSID_AUTO004096							0x00001069		// GameGuard.des 파일이 없거나 변조되었습니다. 게임 패치를 다시 받아 주십시오.
#define LSID_AUTO004097							0x0000106A		// 게임가드 설정 파일이 없거나 변조되었습니다. 게임 패치를 다시 받아 주십시오.
#define LSID_AUTO004098							0x0000106B		// Windows의 시스템 파일이 손상되었습니다. 인터넷 익스플로러를 업그레이드 하거나 재설치 해 보십시오. 혹은 바이러스나 스파이웨어 검사를 해 주십시오.
#define LSID_AUTO004099							0x0000106C		// 게임가드 프로세스 실행에 실패했습니다. 게임 패치를 다시 받아 실행해 주십시오.
#define LSID_AUTO004100							0x0000106D		// 불법 프로그램이 발견되었습니다. 불필요한 프로그램을 종료한 후에 다시 게임을 실행해 주십시오.
#define LSID_AUTO004101							0x0000106E		// 게임가드 업데이트 서버 접속에 실패하였습니다. 잠시 후 다시 접속하거나, 네트워크 상태를 확인한 후 다시 시도해 주십시오.
#define LSID_AUTO004102							0x0000106F		// 다운로드에 실패하였습니다. 네트워크 상태가 좋지 않거나, 인터넷 설정에 문제가 있을 수 있습니다. 혹은 개인 방화벽 설정을 확인한 후 다시 시도해 주십시오.
#define LSID_AUTO004103							0x00001070		// 업데이트 중 취소 버튼을 눌렀습니다. 접속이 되지 않아 취소한 것이라면, 다시 시도해 보거나 네트워크 상태를 점검해 주십시오. 혹은 개인 방화벽 설정을 확인해 주십시오.
#define LSID_AUTO004104							0x00001071		// 업데이트가 제대로 이루어지지 않었습니다. 바이러스 백신 프로그램을 일시 중지 시킨 후 재시도 해보시거나, PC 관리 프로그램의 설정을 조정해 보십시오.
#define LSID_AUTO004105							0x00001072		// 게임가드 실행 중 에러가 발생하였습니다. 게임 폴더 안의 GameGuard 폴더에 있는 *.erl 파일들을 game1@inca.co.kr로 첨부하여 메일을 보내주시기 바랍니다.
#define LSID_AUTO004106							0x00001073		// 콩그레츄레이션
#define LSID_AUTO004107							0x00001074		// 대박 소식
#define LSID_AUTO004108							0x00001075		// 포격 %d초 전
#define LSID_AUTO004109							0x00001076		// 공성측에 포격을 시작합니다.
#define LSID_AUTO004110							0x00001077		// 수성측의 포격이 탐지되었습니다.
#define LSID_AUTO004111							0x00001078		// 게이트가 소환되었습니다. 
#define LSID_AUTO004112							0x00001079		// 게이트가 파괴되었습니다. 
#define LSID_AUTO004113							0x0000107A		// 보호석이 소환되었습니다. 
#define LSID_AUTO004114							0x0000107B		// 보호석이 파괴되었습니다.
#define LSID_AUTO004115							0x0000107C		// 통제장치가 소환되었습니다. 
#define LSID_AUTO004116							0x0000107D		// 통제장치가 파괴되었습니다. 
#define LSID_AUTO004117							0x0000107E		// 점령지 히스토리
#define LSID_AUTO004118							0x0000107F		// %d월 %d일 ~ %d월 %d일
#define LSID_AUTO004119							0x00001080		// 보안 프로그램이 업데이트 되었습니다. 안전한 곳으로 이동한 후 게임을 다시 실행하여 주십시오. 잠시 후 서버와의 접속이 끊어집니다.
#define LSID_AUTO004120							0x00001081		// 현재 원피스(상의, 하의)를 장착중이므로 하의는 장착할 수 없습니다.
#define LSID_AUTO004121							0x00001082		// 현재 원피스(상의, 하의, 신발)를 장착중이므로 하의는 장착할 수 없습니다.
#define LSID_AUTO004122							0x00001083		// 현재 원피스(상의, 하의, 신발)를 장착중이므로 신발은 장착할 수 없습니다.
#define LSID_AUTO004123							0x00001084		// 현재 원피스(상의, 하의, 신발, 투구)를 장착중이므로 하의는 장착할 수 없습니다.
#define LSID_AUTO004124							0x00001085		// 현재 원피스(상의, 하의, 신발, 투구)를 장착중이므로 신발은 장착할 수 없습니다.
#define LSID_AUTO004125							0x00001086		// 현재 원피스(상의, 하의, 신발, 투구)를 장착중이므로 투구는 장착할 수 없습니다.
#define LSID_AUTO004126							0x00001087		// 현재 원피스(상의, 하의, 신발, 투구, 장갑)를 장착중이므로 하의는 장착할 수 없습니다.
#define LSID_AUTO004127							0x00001088		// 현재 원피스(상의, 하의, 신발, 투구, 장갑)를 장착중이므로 신발은 장착할 수 없습니다.
#define LSID_AUTO004128							0x00001089		// 현재 원피스(상의, 하의, 신발, 투구, 장갑)를 장착중이므로 투구는 장착할 수 없습니다.
#define LSID_AUTO004129							0x0000108A		// 현재 원피스(상의, 하의, 신발, 투구, 장갑)를 장착중이므로 장갑은 장착할 수 없습니다.
#define LSID_AUTO004130							0x0000108B		// 아이템 장착 실패 : 인벤토리에 코스튬을 되돌릴 여유공간이 부족함
#define LSID_AUTO004131							0x0000108C		// 아이템 장착 실패 : 무기/방패코스튬을 장착할 조건이 안됨
#define LSID_AUTO004132							0x0000108D		// 한 개 이상 소지 할 수 없는 아이템 입니다.
#define LSID_AUTO004133							0x0000108E		// %s 님을 등록 하시겠습니까?
#define LSID_AUTO004134							0x0000108F		// 타 종족 캐릭터는 등록 할 수 없습니다.
#define LSID_AUTO004135							0x00001090		// 현재 해당 캐릭터는 서버에 존재하지 않습니다.
#define LSID_AUTO004136							0x00001091		// %s 님이 캐릭터 등록을 요청 하였습니다.
#define LSID_AUTO004137							0x00001092		// %s님이 캐릭터 등록을 취소 하였습니다. 다시 등록하여 주십시오.
#define LSID_AUTO004138							0x00001093		// 인벤토리에 여유 공간이 없어 캐릭터 등록이 취소 되었습니다. 다시 등록하여 주십시오
#define LSID_AUTO004139							0x00001094		// %s님과 캐릭터 등록이 완료 되었습니다.
#define LSID_AUTO004140							0x00001095		// 사회 계급 진급
#define LSID_AUTO004141							0x00001096		// 전투 계급 진급
#define LSID_AUTO004142							0x00001097		// 사냥 계급 진급
#define LSID_AUTO004143							0x00001098		// 명예 포인트
#define LSID_AUTO004144							0x00001099		// 명예포인트:
#define LSID_AUTO004145							0x0000109A		// 획득포인트:
#define LSID_AUTO004146							0x0000109B		// 누적포인트:
#define LSID_AUTO004147							0x0000109C		// 종족 등급:
#define LSID_AUTO004148							0x0000109D		// 사회 등급:
#define LSID_AUTO004149							0x0000109E		// 전투 등급:
#define LSID_AUTO004150							0x0000109F		// 사냥 등급:
#define LSID_AUTO004151							0x000010A0		// 다음 계급은 [%s]이며,<br>필요포인트는 %d 포인트 입니다.<br><br>보유 명예 포인트 : %d 포인트<br><br>진급 하시겠습니까?<br>
#define LSID_AUTO004152							0x000010A1		// 다음 계급은 [%s]이며,<br>필요포인트는 %d 포인트 입니다.<br><br>보유 전투 포인트 : %d 포인트<br><br>진급 하시겠습니까?<br>
#define LSID_AUTO004153							0x000010A2		// 다음 계급은 [%s]이며,<br>필요포인트는 %d 포인트 입니다.<br><br>보유 사냥 포인트 : %d 포인트<br><br>진급 하시겠습니까?<br>
#define LSID_AUTO004154							0x000010A3		// 오늘 하루 획득할 수 있는 최대 사냥 포인트는 %d 포인트 입니다.
#define LSID_AUTO004155							0x000010A4		// 사회 등급이 [%s](으)로 진급되었습니다.
#define LSID_AUTO004156							0x000010A5		// 전투 등급이 [%s](으)로 진급되었습니다.
#define LSID_AUTO004157							0x000010A6		// 사냥 등급이 [%s](으)로 진급되었습니다.
#define LSID_AUTO004158							0x000010A7		// 잘못된 계급타입값이 처리되었습니다.
#define LSID_AUTO004159							0x000010A8		// 이미 맥스단계까지 진급한 상태입니다.
#define LSID_AUTO004160							0x000010A9		// 진급에 필요한 포인트가 부족합니다.
#define LSID_AUTO004161							0x000010AA		// 계급 등급업 에러: 알 수 없는 에러(%d)
#define LSID_AUTO004162							0x000010AB		// 계급 세부 효과
#define LSID_AUTO004163							0x000010AC		// 탈릭 혼합 교환
#define LSID_AUTO004164							0x000010AD		// 사용 권한
#define LSID_AUTO004165							0x000010AE		// 보유 효과
#define LSID_AUTO004166							0x000010AF		// 공성진지
#define LSID_AUTO004167							0x000010B0		// 수성타워
#define LSID_AUTO004168							0x000010B1		// 설치 중
#define LSID_AUTO004169							0x000010B2		// 공성전에 참가 중일 때만 사용할 수 있습니다.
#define LSID_AUTO004170							0x000010B3		// 수성 길드는 사용할 수 없는 아이템 입니다.
#define LSID_AUTO004171							0x000010B4		// 공성 길드는 사용할 수 없는 아이템 입니다.
#define LSID_AUTO004172							0x000010B5		// %s 길드의 공성 진지
#define LSID_AUTO004173							0x000010B6		// 수성타워를 회수 하였습니다.
#define LSID_AUTO004174							0x000010B7		// 수성타워의 회수 권한이 없습니다.
#define LSID_AUTO004175							0x000010B8		// 수성타워가 없습니다.
#define LSID_AUTO004176							0x000010B9		// 수성타워의 HP가 최대일 때만 업그레이드 할 수 있습니다.
#define LSID_AUTO004177							0x000010BA		// 수성타워의 레벨이 최고 단계이므로 업그레드 할 수 없습니다.
#define LSID_AUTO004178							0x000010BB		// 공성전 맵이 존재하지 않습니다.
#define LSID_AUTO004179							0x000010BC		// 공성전 지역이 아닙니다.
#define LSID_AUTO004180							0x000010BD		// 이미 최대 개수의 공성전 아이템이 설치되었습니다.
#define LSID_AUTO004181							0x000010BE		// 공성전 아이템의 설치가 취소되었습니다.
#define LSID_AUTO004182							0x000010BF		// 공성전 아이템의 설치에 실패 했습니다.
#define LSID_AUTO004183							0x000010C0		// 공성전 아이템이 없습니다.
#define LSID_AUTO004184							0x000010C1		// 공성전 아이템이 아닙니다.
#define LSID_AUTO004185							0x000010C2		// 공성전 아이템이 존재하지 않습니다.
#define LSID_AUTO004186							0x000010C3		// 공성진지의 HP가 부족하여 스킬을 받을 수 없습니다.
#define LSID_AUTO004187							0x000010C4		// 공성진지가 보유한 스킬이 아닙니다.
#define LSID_AUTO004188							0x000010C5		// 해당 아이템을 제작할 수 있는 레벨이 아닙니다.
#define LSID_AUTO004189							0x000010C6		// 해당 아이템을 설치할 수 있는 권한이 없습니다.
#define LSID_AUTO004190							0x000010C7		// 해당 아이템의 소유 길드가 아닙니다.
#define LSID_AUTO004191							0x000010C8		// 아이템을 업그레이드 할 권한이 없습니다.
#define LSID_AUTO004192							0x000010C9		// 석화 상태에서 아이템을 업그레이드 할 수 없습니다.
#define LSID_AUTO004193							0x000010CA		// 탈릭의 종류와 상관없이 20개만 가져오시면 탈릭의 결정 1개를 드립니다.
#define LSID_AUTO004194							0x000010CB		// 이미 다른 캐릭터와 맺어진 캐릭터 입니다.
#define LSID_AUTO004195							0x000010CC		// 공성 진지 제작 의뢰
#define LSID_AUTO004196							0x000010CD		// 수성 타워 제작 의뢰
#define LSID_AUTO004197							0x000010CE		// 수성 타워 업그레이드
#define LSID_AUTO004198							0x000010CF		// %s 공성전에 참여 하시겠습니까?
#define LSID_AUTO004199							0x000010D0		// 현재 장비(무기)를 장착하지 않았으므로 무기 코스튬은 장착할 수 없습니다.
#define LSID_AUTO004200							0x000010D1		// 장착하려는 무기 코스튬 타입과 장착 중인 무기의 타입이 다릅니다.
#define LSID_AUTO004201							0x000010D2		// 현재 장비(방패)를 장착하지 않았으므로 방패 코스튬은 장착할 수 없습니다.
#define LSID_AUTO004202							0x000010D3		// 인비져블 상태에서는 소환하실 수 없습니다.
#define LSID_AUTO004203							0x000010D4		// 0~100레벨크리전쟁
#define LSID_AUTO004204							0x000010D5		// %d~%d레벨 크리전쟁
#define LSID_AUTO004205							0x000010D6		// 업그레이드 단계
#define LSID_AUTO004206							0x000010D7		// 소환 가능한 개수를 초과하였습니다.
#define LSID_AUTO004207							0x000010D8		// 경작물이 존재하지 않습니다.
#define LSID_AUTO004208							0x000010D9		// 성장률이 부족합니다.
#define LSID_AUTO004209							0x000010DA		// 관리를 위한 아이템이 없거나 부족합니다.
#define LSID_AUTO004210							0x000010DB		// 펫 관련 알수 없는 에러 (%d)
#define LSID_AUTO004211							0x000010DC		// 관리하기
#define LSID_AUTO004212							0x000010DD		// 먹이주기
#define LSID_AUTO004213							0x000010DE		// 놀아주기
#define LSID_AUTO004214							0x000010DF		// 펫 버리기
#define LSID_AUTO004215							0x000010E0		// 상태보기
#define LSID_AUTO004216							0x000010E1		// 펫 상태 보기
#define LSID_AUTO004217							0x000010E2		// 병듬
#define LSID_AUTO004218							0x000010E3		// 탑승장비 튜닝
#define LSID_AUTO004219							0x000010E4		// 탑승장비 출고
#define LSID_AUTO004220							0x000010E5		// 발사물
#define LSID_AUTO004221							0x000010E6		// 단축 벨트에 등록된 스킬/포스만 사용할 수 있습니다.
#define LSID_AUTO004222							0x000010E7		// 해당 아이템은 %d개를 초과하여 소지할 수 없습니다.
#define LSID_AUTO004223							0x000010E8		// 현재 구매되지 않는 아이템입니다.
#define LSID_AUTO004224							0x000010E9		// 해당 지역에 더 이상의 씨앗을 심을 수 없습니다.
#define LSID_AUTO004225							0x000010EA		// 씨앗 아이템 데이터 에러.
#define LSID_AUTO004226							0x000010EB		// 존재하지 않는 맵입니다. (맵 관련 데이터 에러)
#define LSID_AUTO004227							0x000010EC		// 변경될 씨앗의 오브젝트 원형이 존재하지 않습니다.
#define LSID_AUTO004228							0x000010ED		// 씨앗이 변신 가능한 레벨이 아닙니다.
#define LSID_AUTO004229							0x000010EE		// 변경될 씨앗의 단계가 존재하지 않습니다.
#define LSID_AUTO004230							0x000010EF		// 조사가 가능한 시간이 아닙니다.
#define LSID_AUTO004231							0x000010F0		// 이미 조사가 완료된 지역입니다.
#define LSID_AUTO004232							0x000010F1		// %d ~ %d 레벨 크리 전쟁 진행시간
#define LSID_AUTO004233							0x000010F2		// %d ~ %d 레벨 크리스탈 전쟁
#define LSID_AUTO004234							0x000010F3		// 킬 순위
#define LSID_AUTO004235							0x000010F4		// 순위
#define LSID_AUTO004236							0x000010F5		// 캐릭터명
#define LSID_AUTO004237							0x000010F6		// KILL/DEATH
#define LSID_AUTO004238							0x000010F7		// %d ~ %d 레벨 지휘관
#define LSID_AUTO004239							0x000010F8		// 총 지휘관
#define LSID_AUTO004240							0x000010F9		// 부 지휘관
#define LSID_AUTO004241							0x000010FA		// 부 지휘관 초대
#define LSID_AUTO004242							0x000010FB		// %d ~ %d 레벨대의 크리 전쟁 지휘관에 선출되었습니다. 지휘관을 수행하시겠습니까?
#define LSID_AUTO004243							0x000010FC		// %d ~ %d 레벨대의 크리 전쟁 부 지휘관에 선출되었습니다. 부 지휘관을 수행하시겠습니까?
#define LSID_AUTO004244							0x000010FD		// 선출 시간이 아닙니다.
#define LSID_AUTO004245							0x000010FE		// 해당 권한이 없습니다.
#define LSID_AUTO004246							0x000010FF		// 잘못된 캐릭터를 선택 하셨습니다.
#define LSID_AUTO004247							0x00001100		// %d ~ %d 크리전쟁 대기
#define LSID_AUTO004248							0x00001101		// 보호석
#define LSID_AUTO004249							0x00001102		// 통제장치
#define LSID_AUTO004250							0x00001103		// 주포
#define LSID_AUTO004251							0x00001104		// %s를 실패 하였습니다.
#define LSID_AUTO004252							0x00001105		// 이전 레벨대 쟁의 채굴 수수료가 지급되었습니다.
#define LSID_AUTO004253							0x00001106		// 소지 금액 초과로 수수료를 받지 못하였습니다. 재접속 시 다시 받을 수 있습니다.
#define LSID_AUTO004254							0x00001107		// 오어를 채굴하기 위한 수수료가 부족합니다.
#define LSID_AUTO004255							0x00001108		// 지휘관 보상 아이템이 인벤토리에 지급 되었습니다.
#define LSID_AUTO004256							0x00001109		// 인벤토리에 여유 공간이 없습니다. 재접속 시 다시 받을 수 있습니다.
#define LSID_AUTO004257							0x0000110A		// %d - %d 지휘관 획득 금액 : %d
#define LSID_AUTO004258							0x0000110B		// %s 일 경우에만 사용할 수 있는 아이템입니다.
#define LSID_AUTO004259							0x0000110C		// %s 이상일 경우 사용할 수 있는 아이템입니다.
#define LSID_AUTO004260							0x0000110D		// 계급이 %s 이상일 경우 사용할 수 있는 아이템입니다.
#define LSID_AUTO004261							0x0000110E		// 군단 위원회
#define LSID_AUTO004262							0x0000110F		// 지속 HP
#define LSID_AUTO004263							0x00001110		// 지속 FP
#define LSID_AUTO004264							0x00001111		// 지속 SP
#define LSID_AUTO004265							0x00001112		// 아이템을 봉인 하시겠습니까?
#define LSID_AUTO004266							0x00001113		// 아이템을 봉인 해제 하시겠습니까?
#define LSID_AUTO004267							0x00001114		// 선택한 아이템을 확인 하시겠습니까?
#define LSID_AUTO004268							0x00001115		// 미확인
#define LSID_AUTO004269							0x00001116		// 확인 됨
#define LSID_AUTO004270							0x00001117		// 봉인 됨
#define LSID_AUTO004271							0x00001118		// 봉인 된 아이템 입니다.
#define LSID_AUTO004272							0x00001119		// 봉인이 불가능한 아이템 입니다.
#define LSID_AUTO004273							0x0000111A		// 확인을 위한 아이템이 존재하지 않습니다.
#define LSID_AUTO004274							0x0000111B		// 장착이 불가능한 상태의 아이템 입니다.
#define LSID_AUTO004275							0x0000111C		// 거래가 불가능한 상태의 아이템 입니다.
#define LSID_AUTO004276							0x0000111D		// 버리기가 불가능한 상태의 아이템 입니다.
#define LSID_AUTO004277							0x0000111E		// 창고보관이 불가능한 상태의 아이템 입니다.
#define LSID_AUTO004278							0x0000111F		// 업그레이드를 위해서는 군단 유지금 %s %s가 필요합니다. 업그레이드 하시겠습니까?
#define LSID_AUTO004279							0x00001120		// 투자를 위해서는 군단 유지금 %s %s가 필요합니다. 투자 하시겠습니까?
#define LSID_AUTO004280							0x00001121		// 공성전 보상 
#define LSID_AUTO004281							0x00001122		// 공성전 보상스킬
#define LSID_AUTO004282							0x00001123		// 기갑, 탑승병기 
#define LSID_AUTO004283							0x00001124		// 수성 군단이 아닙니다.
#define LSID_AUTO004284							0x00001125		// 투자할 가치 종류가 잘못 되었습니다.
#define LSID_AUTO004285							0x00001126		// 업그레이드 할 오브젝트가 잘못 되었습니다.
#define LSID_AUTO004286							0x00001127		// 업그레이드 할 레벨이 잘못 지정되었습니다.
#define LSID_AUTO004287							0x00001128		// 업그레이드에 필요한 공업 가치가 부족합니다.
#define LSID_AUTO004288							0x00001129		// 업그레이드에 필요한 기술 가치가 부족합니다.
#define LSID_AUTO004289							0x0000112A		// 업그레이드에 실패 했습니다.
#define LSID_AUTO004290							0x0000112B		// 업그레이드에 성공 했습니다.
#define LSID_AUTO004291							0x0000112C		// 한 번에 한 단계씩 업그레이드 할 수 있습니다.
#define LSID_AUTO004292							0x0000112D		// 공성전 신청 비용
#define LSID_AUTO004293							0x0000112E		// 점령지 발전 비용
#define LSID_AUTO004294							0x0000112F		// 점령지 스킬 업그레이드 비용
#define LSID_AUTO004295							0x00001130		// 점령지 수성 관리 업그레이드 비용
#define LSID_AUTO004296							0x00001131		// 편지에 첨부할 수 없는 상태의 아이템 입니다.
#define LSID_AUTO004297							0x00001132		// 무인거래기에 등록할 수 없는 상태의 아이템 입니다.
#define LSID_AUTO004298							0x00001133		// 업그레이드 할 수 없는 상태의 아이템 입니다.
#define LSID_AUTO004299							0x00001134		// 조합을 할 수 없는 상태의 아이템 입니다.
#define LSID_AUTO004300							0x00001135		// 10Lv~14Lv 전쟁 포탈
#define LSID_AUTO004301							0x00001136		// 15Lv~19Lv 전쟁 포탈
#define LSID_AUTO004302							0x00001137		// 20Lv~24Lv 전쟁 포탈
#define LSID_AUTO004303							0x00001138		// 25Lv~29Lv 전쟁 포탈
#define LSID_AUTO004304							0x00001139		// 30Lv~34Lv 전쟁 포탈
#define LSID_AUTO004305							0x0000113A		// 35Lv~39Lv 전쟁 포탈
#define LSID_AUTO004306							0x0000113B		// 40Lv~44Lv 전쟁 포탈
#define LSID_AUTO004307							0x0000113C		// 45Lv~49Lv 전쟁 포탈
#define LSID_AUTO004308							0x0000113D		// 50Lv~54Lv 전쟁 포탈
#define LSID_AUTO004309							0x0000113E		// 55Lv~59Lv 전쟁 포탈
#define LSID_AUTO004310							0x0000113F		// 60Lv~64Lv 전쟁 포탈
#define LSID_AUTO004311							0x00001140		// 65Lv~69Lv 전쟁 포탈
#define LSID_AUTO004312							0x00001141		// 70Lv~74Lv 전쟁 포탈
#define LSID_AUTO004313							0x00001142		// 75Lv~85Lv 전쟁 포탈
#define LSID_AUTO004314							0x00001143		// 무한 필드 대전
#define LSID_AUTO004315							0x00001144		// 무한 필드 대전 대기
#define LSID_AUTO004316							0x00001145		// 무한 필드 대전 진행
#define LSID_AUTO004317							0x00001146		// 무한 필드 대전 종료
#define LSID_AUTO004318							0x00001147		// 누적된 경험치를 획득 하시겠습니까?
#define LSID_AUTO004319							0x00001148		// 명예 군단이 정상적으로 설정되었습니다.
#define LSID_AUTO004320							0x00001149		// 명예 군단 설정에 실패하였습니다.
#define LSID_AUTO004321							0x0000114A		// 명예 군단 설정 요청에 성공하였습니다.
#define LSID_AUTO004322							0x0000114B		// 명예 군단 설정 요청 에러 %d
#define LSID_AUTO004323							0x0000114C		// %s 군단이 HQ 쟁탈전에서 승리하여, %s 님께서 족장으로 선출 되셨습니다.
#define LSID_AUTO004324							0x0000114D		// 수호탑이 소환되었습니다.
#define LSID_AUTO004325							0x0000114E		// 수호탑이 파괴 되었습니다.
#define LSID_AUTO004326							0x0000114F		// 자 종족만 신청이 가능한 지역입니다.
#define LSID_AUTO004327							0x00001150		// 해당 아이템을 구입하기 위해서는 %s 가(이) 필요합니다.
#define LSID_AUTO004328							0x00001151		// 지역 매장량
#define LSID_AUTO004329							0x00001152		// 매장량이 모두 소진되어 애널라이저 작동을 중단합니다.
#define LSID_AUTO004330							0x00001153		// 매량이 모두 소진 되었습니다.
#define LSID_AUTO004331							0x00001154		// 아이템을 구입하기 위해 필요한 조건을 만족시키지 못하였습니다.
#define LSID_AUTO004332							0x00001155		// 펫이 병들었습니다. 서둘러 돌봐주세요.
#define LSID_AUTO004333							0x00001156		// 펫의 관리가 성공 하였습니다.
#define LSID_AUTO004334							0x00001157		// 펫을 통한 아이템 획득에 성공 하였습니다.
#define LSID_AUTO004335							0x00001158		// 펫 사육이 취소 되었습니다.
#define LSID_AUTO004336							0x00001159		// 조합을 할 수 없는 아이템 상태 입니다.
#define LSID_AUTO004337							0x0000115A		// 레벨 업그레이드를 할 수 없는 아이템 상태 입니다.
#define LSID_AUTO004338							0x0000115B		// 랭크 업그레이드를 할 수 없는 아이템 상태 입니다.
#define LSID_AUTO004339							0x0000115C		// 등급 업그레이드를 할 수 없는 아이템 상태 입니다.
#define LSID_AUTO004340							0x0000115D		// 타겟 아이템이 존재하지 않습니다.
#define LSID_AUTO004341							0x0000115E		// 기본이름
#define LSID_AUTO004342							0x0000115F		// 현재 선택한 스킬/포스는 공성전에 참여해야만 사용 가능합니다.
#define LSID_AUTO004343							0x00001160		// 점령지 발전 투자에 성공 하였습니다.
#define LSID_AUTO004344							0x00001161		// 지휘관
#define LSID_AUTO004345							0x00001162		// Chip을 획득 하였습니다.
#define LSID_AUTO004346							0x00001163		// 더 이상 Chip을 획득할 수 없습니다.
#define LSID_AUTO004347							0x00001164		// 레인보우 서비스 %s 서버스 적용 중 입니다.
#define LSID_AUTO004348							0x00001165		// 고객님의 등급은 %s 입니다.
#define LSID_AUTO004349							0x00001166		// 현재 %s 서비스 이용 중 입니다.
#define LSID_AUTO004350							0x00001167		// Chip이 부족하여 구입할 수 없습니다.
#define LSID_AUTO004351							0x00001168		// Premium
#define LSID_AUTO004352							0x00001169		// Silver
#define LSID_AUTO004353							0x0000116A		// Gold
#define LSID_AUTO004354							0x0000116B		// V.I.P
#define LSID_AUTO004355							0x0000116C		// 보유 칩
#define LSID_AUTO004356							0x0000116D		// Chip
#define LSID_AUTO004357							0x0000116E		// 업그레이드를 할 수 없는 아이템 상태 입니다.
#define LSID_AUTO004358							0x0000116F		// 포션 효과가 적용되었습니다.
#define LSID_AUTO004359							0x00001170		// %s님께서 아이템 99 랭크 업그레이드에 성공 하였습니다.
#define LSID_AUTO004360							0x00001171		// %s님께서 아이템 Z 등급 업그레이드에 성공 하였습니다.
#define LSID_AUTO004361							0x00001172		// 포션 순간 효과가 사라졌습니다.
#define LSID_AUTO004362							0x00001173		// %s 군단이 명예군단으로 임명되었습니다.
#define LSID_AUTO004363							0x00001174		// 카운트
#define LSID_AUTO004364							0x00001175		// 진지타워
#define LSID_AUTO004365							0x00001176		// 진지타워 설치에 필요한 아이템이 부족 합니다. %s %d개가 필요합니다.
#define LSID_AUTO004366							0x00001177		// 진지타워 설치를 시작하였습니다.
#define LSID_AUTO004367							0x00001178		// 진지타워 설치가 완료되었습니다.
#define LSID_AUTO004368							0x00001179		// 더 이상 진지타워를 설치할 수 없습니다.
#define LSID_AUTO004369							0x0000117A		// 진지타워를 회수 하였습니다.
#define LSID_AUTO004370							0x0000117B		// 더 이상 진지타워를 설치할 수 없습니다.
#define LSID_AUTO004371							0x0000117C		// 진지타워 아이템이 없습니다.
#define LSID_AUTO004372							0x0000117D		// 진지타워 아이템이 아닙니다.
#define LSID_AUTO004373							0x0000117E		// 진지타워 설치 재료가 중복되었습니다.
#define LSID_AUTO004374							0x0000117F		// 진지타워 설치 재료가 없습니다.
#define LSID_AUTO004375							0x00001180		// 진지타워 설치 재료의 조합이 틀립니다.
#define LSID_AUTO004376							0x00001181		// 진지타워 설치 재료의 수량이 부족합니다.
#define LSID_AUTO004377							0x00001182		// 진지타워 설치 재료의 수량이 틀립니다.
#define LSID_AUTO004378							0x00001183		// 진지타워를 너무 먼 거리에 설치할 수 없습니다.
#define LSID_AUTO004379							0x00001184		// 현재 작동중인 진지타워가 아닙니다.
#define LSID_AUTO004380							0x00001185		// 가까운 곳에 다른 진지타워가 설치되어 있습니다.
#define LSID_AUTO004381							0x00001186		// 마을내에서는 진지타워를 설치할 수가 없습니다.
#define LSID_AUTO004382							0x00001187		// 사용할 수 없는 아이템 입니다.
#define LSID_AUTO004383							0x00001188		// 진지타워의 파츠가 없습니다.
#define LSID_AUTO004384							0x00001189		// 진지타워와 거리가 멉니다.
#define LSID_AUTO004385							0x0000118A		// 진지타워 에러가 발생했습니다 : %d
#define LSID_AUTO004386							0x0000118B		// 진지타워 설치가 취소되었습니다.
#define LSID_AUTO004387							0x0000118C		// 전광판에 등록할 글을 입력해 주세요. (%d자 이내)
#define LSID_AUTO004388							0x0000118D		// 전광판 내용은 %d자 까지만 입력이 가능합니다.
#define LSID_AUTO004389							0x0000118E		// 전광판에 글을 등록하였습니다. 대기번호 : %d번
#define LSID_AUTO004390							0x0000118F		// 전광판 사용자가 너무 많습니다. 잠시 후에 등록해 주세요.
#define LSID_AUTO004391							0x00001190		// 1일 플레이어 제재를 할 수 있는 제한 인원을 초과하였습니다.
#define LSID_AUTO004392							0x00001191		// 제재 조치를 수행하기 위해서는 %d %s가 필요합니다.
#define LSID_AUTO004393							0x00001192		// 제재 조치를 수행하기 위해서는 %s가 필요합니다.
#define LSID_AUTO004394							0x00001193		// %s님이 족장에 의해 제재 조치가 해제되었습니다.
#define LSID_AUTO004395							0x00001194		// 전쟁 사령관
#define LSID_AUTO004396							0x00001195		// 획득 종족 : 
#define LSID_AUTO004397							0x00001196		// 획득자 : 
#define LSID_AUTO004398							0x00001197		// 획득처 : 
#define LSID_AUTO004399							0x00001198		// 획득 위치 : 
#define LSID_AUTO004400							0x00001199		// 축 하 합 니 다 !!
#define LSID_AUTO004401							0x0000119A		// 파괴 되었습니다.
#define LSID_AUTO004402							0x0000119B		// %d 단계의 탈릭업 성공
#define LSID_AUTO004403							0x0000119C		// %d 단계의 랭크업 성공
#define LSID_AUTO004404							0x0000119D		// %d 단계의 등급업 성공
#define LSID_AUTO004405							0x0000119E		// %d 단계의 레벨업 성공
#define LSID_AUTO004406							0x0000119F		// %s Open
#define LSID_AUTO004407							0x000011A0		// %s 구매
#define LSID_AUTO004408							0x000011A1		// 전투포인트
#define LSID_AUTO004409							0x000011A2		// %d 단계의 탈릭업 실패
#define LSID_AUTO004410							0x000011A3		// %d 단계의 랭크업 실패
#define LSID_AUTO004411							0x000011A4		// %d 단계의 등급업 실패
#define LSID_AUTO004412							0x000011A5		// %d 단계의 레벨업 실패
#define LSID_AUTO004413							0x000011A6		// 캐쉬 아이템 구매에 따른 보너스 머니 %d 가 지급되었습니다.
#define LSID_AUTO004414							0x000011A7		// 지급될 보너스 머니로 인하여 개인 소유 한도 금액이 초과되고 있습니다. 아이템 구매를 할 수가 없습니다.
#define LSID_AUTO004415							0x000011A8		// 특수 채굴 정보
#define LSID_AUTO004416							0x000011A9		// 채굴 경험치 %3.f를 얻었습니다.
#define LSID_AUTO004417							0x000011AA		// 워리어
#define LSID_AUTO004418							0x000011AB		// 코만도
#define LSID_AUTO004419							0x000011AC		// 마일러
#define LSID_AUTO004420							0x000011AD		// 버서커
#define LSID_AUTO004421							0x000011AE		// 암즈맨
#define LSID_AUTO004422							0x000011AF		// 쉴드마일러
#define LSID_AUTO004423							0x000011B0		// 레인저
#define LSID_AUTO004424							0x000011B1		// 데스페라도
#define LSID_AUTO004425							0x000011B2		// 스나이퍼
#define LSID_AUTO004426							0x000011B3		// 히든솔져
#define LSID_AUTO004427							0x000011B4		// 센티넬
#define LSID_AUTO004428							0x000011B5		// 인필트레이터
#define LSID_AUTO004429							0x000011B6		// 스피리츄어리스트
#define LSID_AUTO004430							0x000011B7		// 싸이퍼
#define LSID_AUTO004431							0x000011B8		// 찬드라
#define LSID_AUTO004432							0x000011B9		// 위저드
#define LSID_AUTO004433							0x000011BA		// 아스트랄러
#define LSID_AUTO004434							0x000011BB		// 홀리찬드라
#define LSID_AUTO004435							0x000011BC		// 스페셜리스트
#define LSID_AUTO004436							0x000011BD		// 크래프트맨
#define LSID_AUTO004437							0x000011BE		// 드라이버
#define LSID_AUTO004438							0x000011BF		// 멘탈스미스
#define LSID_AUTO004439							0x000011C0		// 아머라이더
#define LSID_AUTO004440							0x000011C1		// 챔피온
#define LSID_AUTO004441							0x000011C2		// 나이츠
#define LSID_AUTO004442							0x000011C3		// 템플러
#define LSID_AUTO004443							0x000011C4		// 가디언
#define LSID_AUTO004444							0x000011C5		// 블랙나이츠
#define LSID_AUTO004445							0x000011C6		// 아처
#define LSID_AUTO004446							0x000011C7		// 헌터
#define LSID_AUTO004447							0x000011C8		// 어드벤츄러
#define LSID_AUTO004448							0x000011C9		// 스틸러
#define LSID_AUTO004449							0x000011CA		// 어쎄신
#define LSID_AUTO004450							0x000011CB		// 캐스터
#define LSID_AUTO004451							0x000011CC		// 서머너
#define LSID_AUTO004452							0x000011CD		// 워락
#define LSID_AUTO004453							0x000011CE		// 다크프리스트
#define LSID_AUTO004454							0x000011CF		// 그레이저
#define LSID_AUTO004455							0x000011D0		// 아티스트
#define LSID_AUTO004456							0x000011D1		// 디스트로이어
#define LSID_AUTO004457							0x000011D2		// 글라디우스
#define LSID_AUTO004458							0x000011D3		// 퍼니셔
#define LSID_AUTO004459							0x000011D4		// 어썰터
#define LSID_AUTO004460							0x000011D5		// 머셔너리
#define LSID_AUTO004461							0x000011D6		// 거너
#define LSID_AUTO004462							0x000011D7		// 스카우터
#define LSID_AUTO004463							0x000011D8		// 스트라이커
#define LSID_AUTO004464							0x000011D9		// 디멘터
#define LSID_AUTO004465							0x000011DA		// 팬텀쉐도우
#define LSID_AUTO004466							0x000011DB		// 엔지니어
#define LSID_AUTO004467							0x000011DC		// 싸이언티스트
#define LSID_AUTO004468							0x000011DD		// 배틀리더
#define LSID_AUTO004469							0x000011DE		// 깜짝 이벤트
#define LSID_AUTO004470							0x000011DF		// 돈 드랍율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004471							0x000011E0		// 근접 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004472							0x000011E1		// 원거리 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004473							0x000011E2		// 포스 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004474							0x000011E3		// 방어 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004475							0x000011E4		// 방패 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004476							0x000011E5		// 종족특화 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004477							0x000011E6		// 제작 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004478							0x000011E7		// 전체 채굴시 근접 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004479							0x000011E8		// 전체 채굴시 원거리 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004480							0x000011E9		// 전체 채굴시 포스 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004481							0x000011EA		// 전체 채굴시 방어 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004482							0x000011EB		// 전체 채굴시 방패 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004483							0x000011EC		// 전체 채굴시 종족특화 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004484							0x000011ED		// 전체 채굴시 제작 숙련도 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004485							0x000011EE		// 사냥 경험치 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004486							0x000011EF		// 종족 쟁 채굴 경험치 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004487							0x000011F0		// 레벨 쟁 채굴 경험치 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004488							0x000011F1		// 지역 채굴 경험치 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004489							0x000011F2		// 전체 채굴 경험치 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004490							0x000011F3		// 사냥 포인트 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004491							0x000011F4		// 명예 포인트 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004492							0x000011F5		// PVP 포인트 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004493							0x000011F6		// 탈릭 포인트 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004494							0x000011F7		// 종족 쟁 채굴 속도 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004495							0x000011F8		// 레벨 쟁 채굴 속도 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004496							0x000011F9		// 지역 채굴 속도 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004497							0x000011FA		// 전체 채굴 속도 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004498							0x000011FB		// 사냥시 이벤트 아이템을 획득 가능하도록 적용되었습니다.
#define LSID_AUTO004499							0x000011FC		// 전체 채굴시 희귀한 아이템 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004500							0x000011FD		// %s님께서 %s를 %d개 구매하셨습니다. 보너스 머니가 %d 지급 되었습니다.
#define LSID_AUTO004501							0x000011FE		// 바리게이트를 현재 위치에 생성할 수 없습니다.
#define LSID_AUTO004502							0x000011FF		// 전투포인트:
#define LSID_AUTO004503							0x00001200		// 배틀 던전 완료 보상 경험치 획득율 %d 증가 효과가 적용되었습니다.
#define LSID_AUTO004504							0x00001201		// 획득률 %d 증가
#define LSID_AUTO004505							0x00001202		// 돈드랍 이벤트
#define LSID_AUTO004506							0x00001203		// 숙련도 이벤트
#define LSID_AUTO004507							0x00001204		// 경험치 이벤트
#define LSID_AUTO004508							0x00001205		// 채굴 이벤트
#define LSID_AUTO004509							0x00001206		// 포인트 이벤트
#define LSID_AUTO004510							0x00001207		// 아이템 이벤트
#define LSID_AUTO004511							0x00001208		// 몬스터 사냥시
#define LSID_AUTO004512							0x00001209		// 공격 성공시
#define LSID_AUTO004513							0x0000120A		// 피해 방어시
#define LSID_AUTO004514							0x0000120B		// 방패 블록시
#define LSID_AUTO004515							0x0000120C		// 종족특화 사용시
#define LSID_AUTO004516							0x0000120D		// 아이템 제작시
#define LSID_AUTO004517							0x0000120E		// 전체 채굴시
#define LSID_AUTO004518							0x0000120F		// 종족 쟁 채굴시
#define LSID_AUTO004519							0x00001210		// 레벨 쟁 채굴시
#define LSID_AUTO004520							0x00001211		// 지역 채굴시
#define LSID_AUTO004521							0x00001212		// 전체 채굴시
#define LSID_AUTO004522							0x00001213		// 특수몬스터 제거시
#define LSID_AUTO004523							0x00001214		// 퀘스트 완료시
#define LSID_AUTO004524							0x00001215		// 적 종족 제거시
#define LSID_AUTO004525							0x00001216		// 탈릭포인트 획득시
#define LSID_AUTO004526							0x00001217		// 게임 머니
#define LSID_AUTO004527							0x00001218		// 근접 숙련도
#define LSID_AUTO004528							0x00001219		// 원거리 숙련도
#define LSID_AUTO004529							0x0000121A		// 포스 숙련도
#define LSID_AUTO004530							0x0000121B		// 방어 숙련도
#define LSID_AUTO004531							0x0000121C		// 방패 숙련도
#define LSID_AUTO004532							0x0000121D		// 종족특화 숙련도
#define LSID_AUTO004533							0x0000121E		// 제작 숙련도
#define LSID_AUTO004534							0x0000121F		// 경험치
#define LSID_AUTO004535							0x00001220		// 채굴 경험치
#define LSID_AUTO004536							0x00001221		// 채굴 속도
#define LSID_AUTO004537							0x00001222		// 사냥 포인트
#define LSID_AUTO004538							0x00001223		// 명예 포인트
#define LSID_AUTO004539							0x00001224		// PVP 포인트
#define LSID_AUTO004540							0x00001225		// 탈릭 포인트
#define LSID_AUTO004541							0x00001226		// %d 확률로 획득
#define LSID_AUTO004542							0x00001227		// 배틀던전 완료시
#define LSID_AUTO004543							0x00001228		// 레벨/등급업 에 필요한 재료 아이템의 수량이 부족합니다. 
#define LSID_AUTO004544							0x00001229		// 사용이 불가능한 아이템입니다. 레벨과 등급을 다시 확인해 주시기 바랍니다.
#define LSID_AUTO004545							0x0000122A		// 채굴 정보
#define LSID_AUTO004546							0x0000122B		// ※ 1회 채굴 시 획득
#define LSID_AUTO004547							0x0000122C		// 전체 채굴
#define LSID_AUTO004548							0x0000122D		// 지역 채굴
#define LSID_AUTO004549							0x0000122E		// 광산 채굴
#define LSID_AUTO004550							0x0000122F		// 획득 경험치
#define LSID_AUTO004551							0x00001230		// 획득 종족화폐
#define LSID_AUTO004552							0x00001231		// 획득 골드
#define LSID_AUTO004553							0x00001232		// 획득 아이템
#define LSID_AUTO004554							0x00001233		// 채굴 인원
#define LSID_AUTO004555							0x00001234		// 조사 아이템
#define LSID_AUTO004556							0x00001235		// 채굴 분류
#define LSID_AUTO004557							0x00001236		// 채굴 수수료
#define LSID_AUTO004558							0x00001237		// 종족 쟁
#define LSID_AUTO004559							0x00001238		// %dLv ~ %dLv 쟁
#define LSID_AUTO004560							0x00001239		// 착용중
#define LSID_AUTO004561							0x0000123A		// 지역 채굴 정보
#define LSID_AUTO004562							0x0000123B		// %dLv ~ %dLv 쟁 채굴 정보
#define LSID_AUTO004563							0x0000123C		// 종족 쟁 채굴 정보
#define LSID_AUTO004564							0x0000123D		// 로드
#define LSID_AUTO004565							0x0000123E		// 사령
#define LSID_AUTO004566							0x0000123F		// 지휘
#define LSID_AUTO004567							0x00001240		// 거장
#define LSID_AUTO004568							0x00001241		// 기동
#define LSID_AUTO004569							0x00001242		// 테러
#define LSID_AUTO004570							0x00001243		// 지원
#define LSID_AUTO004571							0x00001244		// 길마
#define LSID_AUTO004572							0x00001245		// 말머리를 추가하기 위해서는 %s 아이템이 필요합니다.
#define LSID_AUTO004573							0x00001246		// 말머리를 추가하기 위해서는 %d %s 가 필요합니다.
#define LSID_AUTO004574							0x00001247		// 말머리 등록은 1자 ~ 4자 까지만 가능합니다.
#define LSID_AUTO004575							0x00001248		// 말머리에 등록할 수 없는 단어입니다.
#define LSID_AUTO004576							0x00001249		// 전쟁 사령관 외치기를 사용하기 위해서는 %s 아이템이 필요합니다.
#define LSID_AUTO004577							0x0000124A		// 전쟁 사령관 외치기를 사용하기 위해서는 %d %s 가 필요합니다.
#define LSID_AUTO004578							0x0000124B		// 전쟁 사령관이 아닙니다.
#define LSID_AUTO004579							0x0000124C		// [ 아이템 %s 실패 ]<br><br>
#define LSID_AUTO004580							0x0000124D		// %s%s : 공성 지역을 소유하고 있지 않은 군단만 구입할 수 있습니다.
#define LSID_AUTO004581							0x0000124E		// %s%s : 공성 지역을 소유하고 있는 군단만 구입할 수 있습니다.
#define LSID_AUTO004582							0x0000124F		// %s%s : %s 지역을 소유하고 있는 군단만 구입할 수 있습니다.
#define LSID_AUTO004583							0x00001250		// 군단에 가입하고 있지 않으므로 해당 던전을 생성할 수 없습니다.
#define LSID_AUTO004584							0x00001251		// 사냥 포인트 %d 를 획득하였습니다.
#define LSID_AUTO004585							0x00001252		// 명예 포인트 %d 를 획득하였습니다.
#define LSID_AUTO004586							0x00001253		// PVP 포인트 %d 를 획득하였습니다.
#define LSID_AUTO004587							0x00001254		// 탈릭 포인트 %d 를 획득하였습니다.
#define LSID_AUTO004588							0x00001255		// 근접 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004589							0x00001256		// 원거리 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004590							0x00001257		// 포스 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004591							0x00001258		// 종족특화 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004592							0x00001259		// 방어 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004593							0x0000125A		// 방패 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004594							0x0000125B		// 제작 숙련도 %d 를 획득하였습니다.
#define LSID_AUTO004595							0x0000125C		// [Lv.%d] %s
#define LSID_AUTO004596							0x0000125D		// 주의사항 : 업그레이드의 성공 이외에 탈릭이 모두 소모되거나 보석류 아이템이 모두 소모되면 업그레이드는 자동 중단됩니다. <br>진행 중 취소는 ESC 나 NPC에게서 멀리 떨어졌을 경우 취소가 가능합니다.
#define LSID_AUTO004597							0x0000125E		// 알림 : 재료가 부족하여 업그레이드가 중단됩니다. 
#define LSID_AUTO004598							0x0000125F		// 주의사항 : 삽입된 재료만큼 자동으로 업그레이드가 시도됩니다. 재료가 모두 소모되면 자동 업그레이드가 중단됩니다. <br>진행 중 취소는 ESC 나 NPC에게서 멀리 떨어졌을 경우 취소가 가능합니다.
#define LSID_AUTO004599							0x00001260		// 연속 실행
#define LSID_AUTO004600							0x00001261		// %s님이 타 종족 %d 킬을 달성하였습니다.
#define LSID_AUTO004601							0x00001262		// %s %s에 의해 아군 피해가 속출하고 있습니다.
#define LSID_AUTO004602							0x00001263		// 사용이 불가능한 아이템입니다. %s의 탈릭 개수가 %s의 탈릭 개수와 일치해야 합니다.
#define LSID_AUTO004603							0x00001264		// 사용이 불가능한 아이템입니다. %s의 탈릭 개수가 %s의 탈릭 개수보다 한 개 많거나 일치해야 합니다.
#define LSID_AUTO004604							0x00001265		// 패키지
#define LSID_AUTO004605							0x00001266		// 일반
#define LSID_AUTO004606							0x00001267		// 고급
#define LSID_AUTO004607							0x00001268		// 희귀
#define LSID_AUTO004608							0x00001269		// 유물
#define LSID_AUTO004609							0x0000126A		// 영웅
#define LSID_AUTO004610							0x0000126B		// 전설
#define LSID_AUTO004611							0x0000126C		// 사용등급
#define LSID_AUTO004612							0x0000126D		// 사용레벨
#define LSID_AUTO004613							0x0000126E		// 레벨 입력 (1~80)
#define LSID_AUTO004614							0x0000126F		// 정말 구입하시겠습니까?
#define LSID_AUTO004615							0x00001270		// 존재하지 않는 아이템 레벨입니다.
#define LSID_AUTO004616							0x00001271		// 입력한 레벨값이 범위를 초과하였습니다.
#define LSID_AUTO004617							0x00001272		// 아이템 판매 실패 : 존재하지 않는 아이템입니다.
#define LSID_AUTO004618							0x00001273		// 아이템 판매 실패 : 구입에 필요한 아이템을 소지하고 있지 않습니다.
#define LSID_AUTO004619							0x00001274		// 아이템 판매 실패 : 구입에 필요한 아이템의 갯수가 맞지 않습니다.
#define LSID_AUTO004620							0x00001275		// 한 종류의 탈릭으로 업그레이드 된 아이템이 아닙니다.
#define LSID_AUTO004621							0x00001276		// 해당 아이템의 탈릭 코어는 존재하지 않습니다.
#define LSID_AUTO004622							0x00001277		// 업그레이드 하려는 아이템에 사용할 수 없는 탈릭 코어 입니다.
#define LSID_AUTO004623							0x00001278		// 탈릭 코어 생성에 성공 했습니다.
#define LSID_AUTO004624							0x00001279		// 탈릭 코어
#define LSID_AUTO004625							0x0000127A		// 업그레이드 하려는 아이템의 탈릭과 동일한 탈릭을 등록해야 합니다.
#define LSID_AUTO004626							0x0000127B		// %3.f %s 를 획득 하였습니다.
#define LSID_AUTO004627							0x0000127C		// PK 카운트
#define LSID_AUTO004628							0x0000127D		// 현재 진행 중인 이벤트가 없습니다.
#define LSID_AUTO004629							0x0000127E		// 채굴기 업그레이드
#define LSID_AUTO004630							0x0000127F		// 채굴기 등급업
#define LSID_AUTO004631							0x00001280		// 채굴기 등급업은 채굴기만 가능합니다.
#define LSID_AUTO004632							0x00001281		// 등급 업에 실패하여 %s이 소멸되었습니다.
#define LSID_AUTO004633							0x00001282		// 등급 업에 실패하여 %s이 초기화 되었습니다.
#define LSID_AUTO004634							0x00001283		// 더 이상 효과 업그레이드를 할 수 없습니다.
#define LSID_AUTO004635							0x00001284		// %s 님이 %s 효과 %d 단계 업그레이드에 성공 하였습니다.
#define LSID_AUTO004636							0x00001285		// 메인 쟁 채굴 속도 %s
#define LSID_AUTO004637							0x00001286		// 레벨 쟁 채굴 속도 %s
#define LSID_AUTO004638							0x00001287		// 지역 채굴 속도 %s
#define LSID_AUTO004639							0x00001288		// 전체 채굴 속도 %s
#define LSID_AUTO004640							0x00001289		// 메인 쟁 채굴 경험치량 %s
#define LSID_AUTO004641							0x0000128A		// 레벨 쟁 채굴 경험치량 %s
#define LSID_AUTO004642							0x0000128B		// 지역 채굴 경험치량 %s
#define LSID_AUTO004643							0x0000128C		// 전체 채굴 경험치량 %s
#define LSID_AUTO004644							0x0000128D		// 전체 채굴 아이템 획득률 %s
#define LSID_AUTO004645							0x0000128E		// 사냥 포인트 %.0f 획득
#define LSID_AUTO004646							0x0000128F		// 명예 포인트 %.0f 획득
#define LSID_AUTO004647							0x00001290		// PVP 포인트 %.0f 획득
#define LSID_AUTO004648							0x00001291		// 탈릭 포인트 %.0f 획득
#define LSID_AUTO004649							0x00001292		// 근접 숙련도 %.0f 획득
#define LSID_AUTO004650							0x00001293		// 원거리 숙련도 %.0f 획득
#define LSID_AUTO004651							0x00001294		// 포스 숙련도 %.0f 획득
#define LSID_AUTO004652							0x00001295		// 종족특화 숙련도 %.0f 획득
#define LSID_AUTO004653							0x00001296		// 방어 숙련도 %.0f 획득
#define LSID_AUTO004654							0x00001297		// 방패 숙련도 %.0f 획득
#define LSID_AUTO004655							0x00001298		// 제작 숙련도 %.0f 획득
#define LSID_AUTO004656							0x00001299		// 인챈트 내구도
#define LSID_AUTO004657							0x0000129A		// 인챈트 내구도 최대값에 도달한 아이템 입니다. 
#define LSID_AUTO004658							0x0000129B		// 인챈트 내구도를 상승시킬 수 없는 아이템 입니다. 
#define LSID_AUTO004659							0x0000129C		// %d개
#define LSID_AUTO004660							0x0000129D		// %d%%
#define LSID_AUTO004661							0x0000129E		// 이용등급확인
#define LSID_AUTO004662							0x0000129F		// 아이템의 인챈트 내구도가 성공적으로 복구 되었습니다.
#define LSID_AUTO004663							0x000012A0		// 아이템의 인챈트 내구도가 손상되었습니다.
#define LSID_AUTO004664							0x000012A1		// 공격력 %.1f%%%% 증가
#define LSID_AUTO004665							0x000012A2		// 방어력 %.1f%%%% 증가
#define LSID_AUTO004666							0x000012A3		// 원피스
#define LSID_AUTO004667							0x000012A4		// %s (IS:%d)
#define LSID_AUTO004668							0x000012A5		// %s 지역이 활성화되어 채굴이 가능합니다.
#define LSID_AUTO004669							0x000012A6		// %s 지역의 광물이 고갈되었습니다.
#define LSID_AUTO004670							0x000012A7		// 아직 활성화 되지 않은 채굴 지역 입니다.
#define LSID_AUTO004671							0x000012A8		// 경작물 관리 시간입니다. 서둘러 관리해주세요.
#define LSID_AUTO004672							0x000012A9		// 족장은 축소 화면으로 전환할 수 없습니다.
#define LSID_AUTO004673							0x000012AA		// 족장의 은총이 진행중인 경우 창을 종료할 수 없습니다.
#define LSID_AUTO004674							0x000012AB		// 위대한 족장여! 종족원들은 지금 당신의 힘이 필요로 해요. 배팅을 눌러 족장의 은총을 실현하세요.
#define LSID_AUTO004675							0x000012AC		// 참여 확인 요청중입니다. 1분 후 족장의 은총을 시작할 수 있습니다.
#define LSID_AUTO004676							0x000012AD		// 룰렛 중앙의 START 버튼을 눌러 종족원에게 어떤 족장의 은총을 적용할지 결정하세요.
#define LSID_AUTO004677							0x000012AE		// 족장의 은총 첫번째 결과로 %s 이(가) 선택되었습니다.
#define LSID_AUTO004678							0x000012AF		// 족장의 은총 두번째 결과로 %s 이(가) 선택되었습니다.
#define LSID_AUTO004679							0x000012B0		// 족장의 은총 세번째 결과로 %s 이(가) 선택되었습니다.
#define LSID_AUTO004680							0x000012B1		// 족장의 은총이 실현되어 %s(%s) %s 이(가) 적용되었습니다.
#define LSID_AUTO004681							0x000012B2		// 족장의 은총이 실현되지 못하였습니다.
#define LSID_AUTO004682							0x000012B3		// 자! 다음은 족장의 은총을 적용할 대상을 선택해야 해요. 다시 한번 룰렛을 돌려 주세요.
#define LSID_AUTO004683							0x000012B4		// 마지막 룰렛이에요. 족장의 은총 강도를 더 높게 올려 보도록 하죠.
#define LSID_AUTO004684							0x000012B5		// 가장 신중한 선택의 순간이 왔군요. 지금 까지 결정된 족장의 은총을 실현하느냐 실패하느냐는 당신 손에 달렸어요.
#define LSID_AUTO004685							0x000012B6		// 족장의 접속이 종료되어, 진행중인 족장의 은총이 취소되었습니다.
#define LSID_AUTO004686							0x000012B7		// %d 초 후 족장의 은총이 시작됩니다. 서둘러 참여 여부를 결정해 주시기 바랍니다.
#define LSID_AUTO004687							0x000012B8		// 족장의 은총
#define LSID_AUTO004688							0x000012B9		// 족장 은총
#define LSID_AUTO004689							0x000012BA		// %d 단계
#define LSID_AUTO004690							0x000012BB		// 결정타 확률 %.4f%% 증가
#define LSID_AUTO004691							0x000012BC		// 족장 인첸트 : 수수료가 부족합니다.
#define LSID_AUTO004692							0x000012BD		// 족장 인첸트 : 이전 진행된 게임이 아직 종료되지 않았습니다.
#define LSID_AUTO004693							0x000012BE		// 족장 인첸트 : 족장이 아니므로 시작할 수 없습니다.
#define LSID_AUTO004694							0x000012BF		// 족장 인첸트 : 게임 진행중 아닙니다.
#define LSID_AUTO004695							0x000012C0		// 족장 인첸트 : 잘못된 단계의 게임 요청
#define LSID_AUTO004696							0x000012C1		// 족장 인첸트 : 룰렛 추첨 실패
#define LSID_AUTO004697							0x000012C2		// 족장 인첸트 실패 : 알 수 없는 에러( %d )
#define LSID_AUTO004698							0x000012C3		// 치명타 확률
#define LSID_AUTO004699							0x000012C4		// 생산량
#define LSID_AUTO004700							0x000012C5		// 포션 제작
#define LSID_AUTO004701							0x000012C6		// 전쟁 정보
#define LSID_AUTO004702							0x000012C7		// 커뮤니티
#define LSID_AUTO004703							0x000012C8		// 인챈트
#define LSID_AUTO004704							0x000012C9		// 게임 시스템
#define LSID_AUTO004705							0x000012CA		// 제작
#define LSID_AUTO004706							0x000012CB		// 경작
#define LSID_AUTO004707							0x000012CC		// 채굴정보
#define LSID_AUTO004708							0x000012CD		// 탈릭 업그레이드
#define LSID_AUTO004709							0x000012CE		// 방어구 제작
#define LSID_AUTO004710							0x000012CF		// 발사물 제작
#define LSID_AUTO004711							0x000012D0		// 지역소유
#define LSID_AUTO004712							0x000012D1		// RF시간표
#define LSID_AUTO004713							0x000012D2		// 인챈트, 제작
#define LSID_AUTO004714							0x000012D3		// 랭크 업그레이드
#define LSID_AUTO004715							0x000012D4		// 족장의 은총
#define LSID_AUTO004716							0x000012D5		// 대박 아이템 획득 장소
#define LSID_AUTO004717							0x000012D6		// 잔여탄
#define LSID_AUTO004718							0x000012D7		// 진지타워 (공격형)
#define LSID_AUTO004719							0x000012D8		// 진지타워 (방어형)
#define LSID_AUTO004720							0x000012D9		// 발동탄 (1발)
#define LSID_AUTO004721							0x000012DA		// 발동탄 (100발)
#define LSID_AUTO004722							0x000012DB		// 소 ?모 ?품
#define LSID_AUTO004723							0x000012DC		// 소모품제작 숙련도
#define LSID_AUTO004724							0x000012DD		// 개인 정액 
#define LSID_AUTO004725							0x000012DE		// 포인트 및 기여도
#define LSID_AUTO004726							0x000012DF		// 우편
#define LSID_AUTO004727							0x000012E0		// 계급 
#define LSID_AUTO004728							0x000012E1		// 코스튬 상점
#define LSID_AUTO004729							0x000012E2		// 족장 단 체계
#define LSID_AUTO004730							0x000012E3		// 노바스 광장
#define LSID_AUTO004731							0x000012E4		// 노바스 현황
#define LSID_AUTO004732							0x000012E5		// 생산
#define LSID_AUTO004733							0x000012E6		// 개조
#define LSID_AUTO004734							0x000012E7		// 종족 특화 아이템
#define LSID_AUTO004735							0x000012E8		// PVP 특수 아이템
#define LSID_AUTO004736							0x000012E9		// 전투장비
#define LSID_AUTO004737							0x000012EA		// 강화장비
#define LSID_AUTO004738							0x000012EB		// 지원장비
#define LSID_AUTO004739							0x000012EC		// 몬스터 탑승장비
#define LSID_AUTO004740							0x000012ED		// 지존 아이템
#define LSID_AUTO004741							0x000012EE		// 캐시 샵
#define LSID_AUTO004742							0x000012EF		// 월드 정보
#define LSID_AUTO004743							0x000012F0		// 몬스터 정보
#define LSID_AUTO004744							0x000012F1		// 솔로게이트
#define LSID_AUTO004745							0x000012F2		// 군단 게이트
#define LSID_AUTO004746							0x000012F3		// 배틀 던전
#define LSID_AUTO004747							0x000012F4		// 카오스 홀
#define LSID_AUTO004748							0x000012F5		// 채굴 현황판
#define LSID_AUTO004749							0x000012F6		// 전체 채굴
#define LSID_AUTO004750							0x000012F7		// 지역 채굴
#define LSID_AUTO004751							0x000012F8		// 레벨 별 광산 채굴
#define LSID_AUTO004752							0x000012F9		// 대 광산 채굴
#define LSID_AUTO004753							0x000012FA		// 특수 채굴기
#define LSID_AUTO004754							0x000012FB		// 무한대전
#define LSID_AUTO004755							0x000012FC		// 대 광산 쟁
#define LSID_AUTO004756							0x000012FD		// 지역 소유
#define LSID_AUTO004757							0x000012FE		// 레벨 쟁
#define LSID_AUTO004758							0x000012FF		// 대 광산 소유
#define LSID_AUTO004759							0x00001300		// 노바스 진지 구축
#define LSID_AUTO004760							0x00001301		// 통합 서버
#define LSID_AUTO004761							0x00001302		// 단축키 정보
#define LSID_AUTO004762							0x00001303		// 신규 아이템 체계
#define LSID_AUTO004763							0x00001304		// 신규 맵 정보
#define LSID_AUTO004764							0x00001305		// 파티 경험치 개선
#define LSID_AUTO004765							0x00001306		// 봉인아이템
#define LSID_AUTO004766							0x00001307		// 잔여탄 
#define LSID_AUTO004767							0x00001308		// 드랍
#define LSID_AUTO004768							0x00001309		// 레벨 제한 퀘스트
#define LSID_AUTO004769							0x0000130A		// 개인계급
#define LSID_AUTO004770							0x0000130B		// 블러디 크로스
#define LSID_AUTO004771							0x0000130C		// 국가 계급
#define LSID_AUTO004772							0x0000130D		// 글래디에이터계약
#define LSID_AUTO004773							0x0000130E		// 군단 창
#define LSID_AUTO004774							0x0000130F		// 군단 관리인
#define LSID_AUTO004775							0x00001310		// 명예 군단
#define LSID_AUTO004776							0x00001311		// 공성전(성 소유)
#define LSID_AUTO004777							0x00001312		// 조계지 소유 군단
#define LSID_AUTO004778							0x00001313		// 종족 관리인
#define LSID_AUTO004779							0x00001314		// 종족 공지 사항
#define LSID_AUTO004780							0x00001315		// 족장 설명
#define LSID_AUTO004781							0x00001316		// 족장진 설명
#define LSID_AUTO004782							0x00001317		// 전쟁 사령관 설명
#define LSID_AUTO004783							0x00001318		// 종족 계급 예절
#define LSID_AUTO004784							0x00001319		// Q&A
#define LSID_AUTO004785							0x0000131A		// 서버 별 커뮤니티
#define LSID_AUTO004786							0x0000131B		// 지역 별 커뮤니티
#define LSID_AUTO004787							0x0000131C		// 자유 게시판
#define LSID_AUTO004788							0x0000131D		// 스크린 샷
#define LSID_AUTO004789							0x0000131E		// 종합 상황실
#define LSID_AUTO004790							0x0000131F		// 포션 제작
#define LSID_AUTO004791							0x00001320		// 단체 겜블 인첸트
#define LSID_AUTO004792							0x00001321		// 채굴기 인챈트
#define LSID_AUTO004793							0x00001322		// 자동업그레이드
#define LSID_AUTO004794							0x00001323		// 인챈트 내구도
#define LSID_AUTO004795							0x00001324		// 아이템 스코어 표시
#define LSID_AUTO004796							0x00001325		// 시즈모드
#define LSID_AUTO004797							0x00001326		// 기갑
#define LSID_AUTO004798							0x00001327		// 블러디 카운트
#define LSID_AUTO004799							0x00001328		// 블러드 피스트
#define LSID_AUTO004800							0x00001329		// 벙커
#define LSID_AUTO004801							0x0000132A		// 바리게이트
#define LSID_AUTO004802							0x0000132B		// 철갑탄(AP탄)
#define LSID_AUTO004803							0x0000132C		// 룬
#define LSID_AUTO004804							0x0000132D		// 제너레이터
#define LSID_AUTO004805							0x0000132E		// 참
#define LSID_AUTO004806							0x0000132F		// 정규 안정 드랍
#define LSID_AUTO004807							0x00001330		// 보너스 드랍
#define LSID_AUTO004808							0x00001331		// 깜짝 드랍
#define LSID_AUTO004809							0x00001332		// 드랍 치팅
#define LSID_AUTO004810							0x00001333		// 장비
#define LSID_AUTO004811							0x00001334		// 코스튬
#define LSID_AUTO004812							0x00001335		// 특수 드랍
#define LSID_AUTO004813							0x00001336		// 아이템 장착 실패: 사용할 수 없는 클래스 입니다. 
#define LSID_AUTO004814							0x00001337		// 족장의은총 참여 시 참가비<font color='#f2e514'> %s 달란트</font>가 소비됩니다.<br>참여 하시겠습니까?
#define LSID_AUTO004815							0x00001338		// 잠시후<font color='#f2e514'>족장의은총</font>이 시작됩니다.<br>참여 하시겠습니까?
#define LSID_AUTO004816							0x00001339		// %d 초후 행운의 슬롯 머신이 시작됩니다. 서둘러 참여 여부를 결정해 주시기 바랍니다.
#define LSID_AUTO004817							0x0000133A		// 통합메뉴 도움말 켜기
#define LSID_AUTO004818							0x0000133B		// 자기 자신에게 계약 요청을 할 수 없습니다.
#define LSID_AUTO004819							0x0000133C		// 글레디에이터 계약 요청에 성공했습니다. 상대방의 응답을 기다리고 있습니다.
#define LSID_AUTO004820							0x0000133D		// %s 님이 글래디에이터 계약을 신청하셨습니다. 수락하시겠습니까?
#define LSID_AUTO004821							0x0000133E		// %s 님이 글래디에이터 계약을 거절하셨습니다.
#define LSID_AUTO004822							0x0000133F		// %s 님과 글래디에이터 계약을 맺었습니다.
#define LSID_AUTO004823							0x00001340		// 글래디에이터 계약을 거절하였습니다.
#define LSID_AUTO004824							0x00001341		// 글래디에이터 계약을 맺었습니다.
#define LSID_AUTO004825							0x00001342		// 글래디에이터에게 낙인을 적용하였습니다.
#define LSID_AUTO004826							0x00001343		// 글래디에이터 계약을 파기하고 도망쳤습니다.
#define LSID_AUTO004827							0x00001344		// 글래디에이터를 해고 하였습니다.
#define LSID_AUTO004828							0x00001345		// 글래디에이터에게 퀘스트를 전달 하였습니다.
#define LSID_AUTO004829							0x00001346		// 상대방의 전투등급이 1단계 낮지 않습니다.
#define LSID_AUTO004830							0x00001347		// 본인 또는 상대방이 이미 다른 계약을 체결하고 있습니다.
#define LSID_AUTO004831							0x00001348		// 글래디에이터를 해고한지 3일이 지난 후 새로운 계약을 맺을 수 있습니다.
#define LSID_AUTO004832							0x00001349		// 글래디에이터 계약을 파기하고 도망친지 3일이 지난 후 새로운 계약을 맺을 수 있습니다.
#define LSID_AUTO004833							0x0000134A		// 글래디에이터 낙인에 실패했습니다.
#define LSID_AUTO004834							0x0000134B		// 계약 수가 너무 많아 계약에 실패했습니다.
#define LSID_AUTO004835							0x0000134C		// 계약자 수가 너무 많아 계약에 실패했습니다.
#define LSID_AUTO004836							0x0000134D		// 존재하지 않는 대상 입니다.
#define LSID_AUTO004837							0x0000134E		// 잘못된 대상 입니다.
#define LSID_AUTO004838							0x0000134F		// 상대방이 파티 중이어서 계약할 수 없습니다.
#define LSID_AUTO004839							0x00001350		// 상대방의 계약자 정보가 존재하지 않습니다.
#define LSID_AUTO004840							0x00001351		// 인스트럭터가 아닙니다.
#define LSID_AUTO004841							0x00001352		// 글래디에이터가 아닙니다.
#define LSID_AUTO004842							0x00001353		// 명령 위반이 한계치에 도달하지 않았습니다.
#define LSID_AUTO004843							0x00001354		// 인스트럭터가 제재 상태 입니다.
#define LSID_AUTO004844							0x00001355		// 글래디에이터가 제재 상태 입니다.
#define LSID_AUTO004845							0x00001356		// 상대방과 같은 종족이 아닙니다.
#define LSID_AUTO004846							0x00001357		// 글래디에이터 시스템 에러 : %d
#define LSID_AUTO004847							0x00001358		// 전달 가능한 퀘스트가 없습니다.
#define LSID_AUTO004848							0x00001359		// 계급 달성 선착순 보상 아이템을 소유할 수 없는 조건이 되어 삭제 되었습니다.
#define LSID_AUTO004849							0x0000135A		// 축하합니다! 선착순으로 계급을 달성하여, 다음의 아이템을 획득하였습니다.
#define LSID_AUTO004850							0x0000135B		// 축하합니다! 인스트럭터로 부터 상속 아이템을 물려 받았습니다.
#define LSID_AUTO004851							0x0000135C		// 현재 글래디에이터로 계약된 유저는 신청할 수 없습니다.
#define LSID_AUTO004852							0x0000135D		// 현재 계약 중인 글래디에이터가 있으므로 신청할 수 없습니다.
#define LSID_AUTO004853							0x0000135E		// 인스트럭터
#define LSID_AUTO004854							0x0000135F		// 글래디에이터
#define LSID_AUTO004855							0x00001360		// 계약 리스트
#define LSID_AUTO004856							0x00001361		// 보상 아이템
#define LSID_AUTO004857							0x00001362		// 전장 정보
#define LSID_AUTO004858							0x00001363		// 낙인하기
#define LSID_AUTO004859							0x00001364		// 해고하기
#define LSID_AUTO004860							0x00001365		// 도망가기
#define LSID_AUTO004861							0x00001366		// 전달하기
#define LSID_AUTO004862							0x00001367		// 번호
#define LSID_AUTO004863							0x00001368		// 퀘스트 목록
#define LSID_AUTO004864							0x00001369		// 글래디에이터를 해고할 경우 3일간 다른 유저와 다시 계약을 할 수 없으며,<br>선착순 계급 달성 보상 아이템을 받았을 경우 해당 아이템이 삭제됩니다.<br>글래디에이터를 해고 하시겠습니까?
#define LSID_AUTO004865							0x0000136A		// 계약을 파기하고 도망갈 경우 3일간 다른 유저와 다시 계약을 할 수 없으며,<br>인스트럭터가 선착순 계급 달성 보상 아이템을 받았을 경우 해당 아이템이 삭제됩니다.<br>글래디에이터 계약을 파기하고 도망가시겠습니까?
#define LSID_AUTO004866							0x0000136B		// 글래디에이터에게 퀘스트를 전달하시겠습니까?
#define LSID_AUTO004867							0x0000136C		// 주인님<br>   분부를
#define LSID_AUTO004868							0x0000136D		// 나없다고<br>   울지마
#define LSID_AUTO004869							0x0000136E		// 글레디에이터의 낙인을 입력하여 주십시오.
#define LSID_AUTO004870							0x0000136F		// 글래디에이터가 없습니다.
#define LSID_AUTO004871							0x00001370		// 인스트럭터의 전투 등급이 일치하지 않습니다.
#define LSID_AUTO004872							0x00001371		// 인스트럭터의 보상 아이템 소유 여부에 따라 전달할 수 없는 퀘스트 입니다.
#define LSID_AUTO004873							0x00001372		// 글래디에이터 퀘스트 전달 에러 : %d
#define LSID_AUTO004874							0x00001373		// 퀘스트를 전달할 조건 또는 자격이 부족합니다.
#define LSID_AUTO004875							0x00001374		// 구매가능등급
#define LSID_AUTO004876							0x00001375		// %s 이상
#define LSID_AUTO004877							0x00001376		// 계급이 맞지 않아 아이템을 구매할 수 없습니다.
#define LSID_AUTO004878							0x00001377		// 등급이 맞지 않아 아이템을 구매할 수 없습니다.
#define LSID_AUTO004879							0x00001378		// 낙인은 한글과 영문만 입력할 수 있습니다.
#define LSID_AUTO004880							0x00001379		// 낙인으로 사용할 수 없는 단어가 포함되어 있습니다.
#define LSID_AUTO004881							0x0000137A		// %s 님과의 글래디에이터 계약이 종료되었습니다.
#define LSID_AUTO004882							0x0000137B		// %d 레벨 %s - %s
#define LSID_AUTO004883							0x0000137C		// 대여중인 아이템은 인첸트가 불가능합니다.
#define LSID_AUTO004884							0x0000137D		// 장착중인 아이템은 인첸트가 불가능합니다.
#define LSID_AUTO004885							0x0000137E		// %s님이 참가를 거절 하였습니다.
#define LSID_AUTO004886							0x0000137F		// 인첸트 실패 : 딜러 정보를 알수 없습니다.
#define LSID_AUTO004887							0x00001380		// 인첸트 실패 : 족장이 아니면 딜러를 임명하지 못합니다.
#define LSID_AUTO004888							0x00001381		// 인첸트 실패 : 접속중인 캐릭터가 아닙니다.
#define LSID_AUTO004889							0x00001382		// 인첸트 실패 : 다른 종족의 캐릭터 입니다.
#define LSID_AUTO004890							0x00001383		// 인첸트 실패 : 현재 게임 진행중
#define LSID_AUTO004891							0x00001384		// 인첸트 실패 : 이미 딜러가 존재하고 있습니다.
#define LSID_AUTO004892							0x00001385		// 인첸트 실패 : 딜러가 없습니다.
#define LSID_AUTO004893							0x00001386		// 인첸트 실패 : 딜러가 될수 없는 등급입니다.
#define LSID_AUTO004894							0x00001387		// 인첸트 실패 : 딜러가 될수 없는 레벨입니다.
#define LSID_AUTO004895							0x00001388		// 인첸트 실패 : 딜러가 아니므로 시작할 수 없습니다.
#define LSID_AUTO004896							0x00001389		// 인첸트 실패 : 게임중에는 딜러 포기가 불가능합니다.
#define LSID_AUTO004897							0x0000138A		// 인첸트 실패 : 다른 인챈트 겜블에 참여중
#define LSID_AUTO004898							0x0000138B		// 인첸트 실패 : 모집 가능 시간 아닙니다.
#define LSID_AUTO004899							0x0000138C		// 인첸트 실패 : 모집하려는 참가자가 로그인상태아닙니다.
#define LSID_AUTO004900							0x0000138D		// 인첸트 실패 : 응답시간이 지났습니다.
#define LSID_AUTO004901							0x0000138E		// 인첸트 실패 : 모집한 유저가 아닙니다.
#define LSID_AUTO004902							0x0000138F		// 인첸트 실패 : 더이상 참가할 수 없습니다.
#define LSID_AUTO004903							0x00001390		// 인첸트 실패 : 이미 단체 인챈트에 참가 하고 있습니다.
#define LSID_AUTO004904							0x00001391		// 인첸트 실패 : 서로 다른 타입의 업그레이드 불가
#define LSID_AUTO004905							0x00001392		// 인첸트 실패 : 수수료가 부족합니다.
#define LSID_AUTO004906							0x00001393		// 인첸트 실패 : 해당아이템이 인벤에 없습니다.
#define LSID_AUTO004907							0x00001394		// 인첸트 실패 : 아이템 락상태
#define LSID_AUTO004908							0x00001395		// 인첸트 실패 : 배팅 상태가 아닙니다.
#define LSID_AUTO004909							0x00001396		// 인첸트 실패 : 잘못된 단계 진행
#define LSID_AUTO004910							0x00001397		// 인첸트 실패 : 게임에 참가 하고 있는 멤버가 아닙니다.
#define LSID_AUTO004911							0x00001398		// 인첸트 실패 : 배팅 가능한 최소인원이 모집되지 않았습니다.
#define LSID_AUTO004912							0x00001399		// 인첸트 실패 : 알 수 없는 에러( %d )
#define LSID_AUTO004913							0x0000139A		// 족장의 은총 [단체]
#define LSID_AUTO004914							0x0000139B		// 잠시 후 <font color='#4ae8ff'>겜블업그레이드</font>가 시작됩니다.<br>참여하시겠습니까?
#define LSID_AUTO004915							0x0000139C		// 겜블 업그레이드 참여시 참가비 <font color='#f2e514'>%d 달란트</font>가 소비됩니다.<br>시작 하시겠습니까?
#define LSID_AUTO004916							0x0000139D		// 겜블 업그레이드 첫번째 결과로 %s가 선택되었습니다.
#define LSID_AUTO004917							0x0000139E		// 겜블 업그레이드 두번째 결과로 %s가 선택되었습니다.
#define LSID_AUTO004918							0x0000139F		// 겜블 업그레이드 세번째 결과로 %s가 선택되었습니다.
#define LSID_AUTO004919							0x000013A0		// 실패!
#define LSID_AUTO004920							0x000013A1		// 성공!
#define LSID_AUTO004921							0x000013A2		// 겜블 종류는 %s
#define LSID_AUTO004922							0x000013A3		// 기준수는 %s
#define LSID_AUTO004923							0x000013A4		// %s 효과 적용
#define LSID_AUTO004924							0x000013A5		// 업그레이드에 실패 하였습니다.
#define LSID_AUTO004925							0x000013A6		// 업그레이드에 성공 하였습니다.
#define LSID_AUTO004926							0x000013A7		// 보상을 받을때까지 잠시만 기다려 주세요.
#define LSID_AUTO004927							0x000013A8		// 꽝
#define LSID_AUTO004928							0x000013A9		// %s님의 결과를 보시겠습니다.
#define LSID_AUTO004929							0x000013AA		// 나온 주사위값은 %d! 현재 합산은 %d입니다. %d을 넘으면 성공입니다!
#define LSID_AUTO004930							0x000013AB		// 나온 주사위값은 %d! 현재 합산은 %d입니다. %d을 넘지않으면 성공입니다!
#define LSID_AUTO004931							0x000013AC		// 주사위 최종단계 성공!
#define LSID_AUTO004932							0x000013AD		// 아쉽지만 다음에 다시 한번...
#define LSID_AUTO004933							0x000013AE		// 축하드립니다. 성공하셨습니다.
#define LSID_AUTO004934							0x000013AF		// 축하드립니다. 이벤트에 당첨되셨습니다!
#define LSID_AUTO004935							0x000013B0		// 축하드립니다. 잭팟에 당첨되셨습니다!
#define LSID_AUTO004936							0x000013B1		// 인챈트 성공!
#define LSID_AUTO004937							0x000013B2		// 인챈트 실패!
#define LSID_AUTO004938							0x000013B3		// 행운 슬롯 참여 가능 시간이 %d 초 남았습니다.
#define LSID_AUTO004939							0x000013B4		// PVP 전투력
#define LSID_AUTO004940							0x000013B5		// PVP 저항력
#define LSID_AUTO004941							0x000013B6		// PVE 전투력
#define LSID_AUTO004942							0x000013B7		// PVE 저항력
#define LSID_AUTO004943							0x000013B8		// %d 분 후 족장의 축복이 시작됩니다. 서둘러 참여 여부를 결정해 주시기 바랍니다.
#define LSID_AUTO004944							0x000013B9		// 업그레이드 설정
#define LSID_AUTO004945							0x000013BA		// 업그레이드 종류
#define LSID_AUTO004946							0x000013BB		// 아이콘 출력
#define LSID_AUTO004947							0x000013BC		// 국가 계급
#define LSID_AUTO004948							0x000013BD		// 종족 등급
#define LSID_AUTO004949							0x000013BE		// 국가 계급 보상 아이템
#define LSID_AUTO004950							0x000013BF		// 국가 계급 %d 등급 전용 아이템이 지급 되었습니다.
#define LSID_AUTO004951							0x000013C0		// 국가 계급에 의한 세금으로 %d %s 를 받았습니다.
#define LSID_AUTO004952							0x000013C1		// 업그레이드 대상
#define LSID_AUTO004953							0x000013C2		// 골드 교환소
#define LSID_AUTO004954							0x000013C3		// 수수료 안내
#define LSID_AUTO004955							0x000013C4		// %s -> %s
#define LSID_AUTO004956							0x000013C5		// 83
#define LSID_AUTO004957							0x000013C6		// 교환 수수료 5%
#define LSID_AUTO004958							0x000013C7		// 1
#define LSID_AUTO004959							0x000013C8		// 교환 수수료 바겐세일 무료
#define LSID_AUTO004960							0x000013C9		// 캐쉬 관련 : 캐쉬 잔액이 부족합니다. 
#define LSID_AUTO004961							0x000013CA		// 캐쉬 관련 : 다음캐쉬 이용 약관에 동의하지 않으셨습니다. 
#define LSID_AUTO004962							0x000013CB		// 캐쉬 관련 : 월 결제 한도 초과
#define LSID_AUTO004963							0x000013CC		// E-mail을 통한 계정 활성화 이후에 다시 로그인해 주십시오.
#define LSID_AUTO004964							0x000013CD		// 가드타워: 이미 설치된 가드타워입니다
#define LSID_AUTO004965							0x000013CE		// 자동 타겟팅 설정
#define LSID_AUTO004966							0x000013CF		// 캐릭터 기준 선택
#define LSID_AUTO004967							0x000013D0		// 마우스 기준 선택
#define LSID_AUTO004968							0x000013D1		// 현재 맵에는 %s 몬스터가 존재하지 않습니다.
#define LSID_AUTO004969							0x000013D2		// 메인터넌스 작업중입니다. 잠시후에 다시 접속해주십시요.
#define LSID_AUTO004970							0x000013D3		// CBT 유저가 아닙니다.
#define LSID_AUTO004971							0x000013D4		// 아이템 제작
#define LSID_AUTO004972							0x000013D5		// 제 작
#define LSID_AUTO004973							0x000013D6		// 제작조건 및 정보
#define LSID_AUTO004974							0x000013D7		// 제작 성공확률 : %d%%
#define LSID_AUTO004975							0x000013D8		// 제작 가능 요구 숙련도 %dPT / %dPT
#define LSID_AUTO004976							0x000013D9		// 소지수량 / 필요개수
#define LSID_AUTO004977							0x000013DA		// 재료/소모품
#define LSID_AUTO004978							0x000013DB		// 한손검류
#define LSID_AUTO004979							0x000013DC		// 양손검류
#define LSID_AUTO004980							0x000013DD		// 총류
#define LSID_AUTO004981							0x000013DE		// 부스터류
#define LSID_AUTO004982							0x000013DF		// 재료류
#define LSID_AUTO004983							0x000013E0		// 보석/제이드류
#define LSID_AUTO004984							0x000013E1		// 슈페리얼
#define LSID_AUTO004985							0x000013E2		// 렐릭
#define LSID_AUTO004986							0x000013E3		// 아이템 제작 실패 : 해당 아이템을 제작 가능한 종족이 아닙니다.
#define LSID_AUTO004987							0x000013E4		// 아이템 제작 실패 : 해당 아이템을 제작 가능한 클래스가 아닙니다.
#define LSID_AUTO004988							0x000013E5		// 아이템 제작 실패 : 아이템 제작에 필요한 돈이 부족합니다.
#define LSID_AUTO004989							0x000013E6		// 아이템 제작 실패 : 아이템 제작에 요구되는 숙련도가 부족합니다.
#define LSID_AUTO004990							0x000013E7		// %s달란트가 수리비로 필요합니다.<br>계속 하시겠습니까?
#define LSID_AUTO004991							0x000013E8		// %s달란트가 튜닝비로 필요합니다.<br>계속 하시겠습니까?
#define LSID_AUTO004992							0x000013E9		// 일
#define LSID_AUTO004993							0x000013EA		// 시
#define LSID_AUTO004994							0x000013EB		// 분
#define LSID_AUTO004995							0x000013EC		// %s후에 재가입이 가능합니다.
#define LSID_AUTO004996							0x000013ED		// 교감의 결정
#define LSID_AUTO004997							0x000013EE		// 기갑제너레이터[공격]
#define LSID_AUTO004998							0x000013EF		// 기갑제너레이터[방어]
#define LSID_AUTO004999							0x000013F0		// 명중
#define LSID_AUTO005000							0x000013F1		// 확률보석
#define LSID_AUTO005001							0x000013F2		// 인벤토리에 아이템이 없습니다.
#define LSID_AUTO005002							0x000013F3		// 인벤토리에 %s아이템이 없습니다.
#define LSID_AUTO005003							0x000013F4		// 슬롯에 넣을 적합한 아이템이 인벤토리에 아이템이 없습니다.
#define LSID_AUTO005004							0x000013F5		// 확률 증가 보석을 선택
#define LSID_AUTO005005							0x000013F6		// 안내문구 시스템메세지가 출력됩니다.
#define LSID_AUTO005006							0x000013F7		// 제작 아이템 리스트
#define LSID_AUTO005007							0x000013F8		// 확률 보석
#define LSID_AUTO005008							0x000013F9		// 제작 확률 및 숙련도
#define LSID_AUTO005009							0x000013FA		// 제작 수수료
#define LSID_AUTO005010							0x000013FB		// 아이템 찾기
#define LSID_AUTO005011							0x000013FC		// 제작 가능 레벨 : %d / %d
#define LSID_AUTO005012							0x000013FD		// %s
#define LSID_AUTO005013							0x000013FE		// 제작할 아이템을 선택해주세요.
#define LSID_AUTO005014							0x000013FF		// 보석을 통해 제작 확률을 높일 수 있습니다.
#define LSID_AUTO005015							0x00001400		// 인벤토리에 공간이 부족하여, 제작을 진행할수 없습니다.
#define LSID_AUTO005016							0x00001401		// 제작에 필요한 재료가 부족합니다.
#define LSID_AUTO005017							0x00001402		// 제작에 필요한 수수료가 부족합니다.
#define LSID_AUTO005018							0x00001403		// 제작에 필요한 재료와 수수료가 부족합니다.
#define LSID_AUTO005019							0x00001404		// 제작에 필요한 숙련도가 부족합니다.
#define LSID_AUTO005020							0x00001405		// 제작에 필요한 레벨이 부족합니다.
#define LSID_AUTO005021							0x00001406		// 제작에 필요한 필수 재료 선택이 되지 않았습니다.
#define LSID_AUTO005022							0x00001407		// 생산 수량은 최소 하나 이상이 되어야 합니다.
#define LSID_AUTO005023							0x00001408		// 제작을 진행하고 있습니다.
#define LSID_AUTO005024							0x00001409		// 축하합니다. 제작을 성공하였습니다.
#define LSID_AUTO005025							0x0000140A		// 아쉽습니다. 제작을 실패하였습니다.
#define LSID_AUTO005026							0x0000140B		// N등급
#define LSID_AUTO005027							0x0000140C		// A등급
#define LSID_AUTO005028							0x0000140D		// B등급
#define LSID_AUTO005029							0x0000140E		// C등급
#define LSID_AUTO005030							0x0000140F		// D등급
#define LSID_AUTO005031							0x00001410		// 폭죽
#define LSID_AUTO005032							0x00001411		// 숙련도 : %d / %d PT
#define LSID_AUTO005033							0x00001412		// 레벨 : %d / %d Lv
#define LSID_AUTO005034							0x00001413		// 제작목록
#define LSID_AUTO005035							0x00001414		// 조건
#define LSID_AUTO005036							0x00001415		// 확률
#define LSID_AUTO005037							0x00001416		// 기본정보
#define LSID_AUTO005038							0x00001417		// 기본 확률
#define LSID_AUTO005039							0x00001418		// 제작할 아이템의 기본확률을 의미합니다.
#define LSID_AUTO005040							0x00001419		// 스페셜리스트 보너스 확률
#define LSID_AUTO005041							0x0000141A		// 최종클래스가 스페셜리스트인 경우 10% 추가 성공확률이 발생합니다.
#define LSID_AUTO005042							0x0000141B		// 확률보석 보정 확률
#define LSID_AUTO005043							0x0000141C		// 사용된 확률 보석의 수치만큼 추가 성공확률이 발생합니다.
#define LSID_AUTO005044							0x0000141D		// 인챈트 주재료 패널티
#define LSID_AUTO005045							0x0000141E		// 주재료가 인챈트 된 장비일 경우 패널티 확률이 발생합니다.
#define LSID_AUTO005046							0x0000141F		// 사용할 아이템 선택하기
#define LSID_AUTO005047							0x00001420		// 선택된 아이템 제거하기
#define LSID_AUTO005048							0x00001421		// %s %s님이 %s %s 제작에 성공하셨습니다.
#define LSID_AUTO005049							0x00001422		// 제작 성공 확률
#define LSID_AUTO005050							0x00001423		// 최종 제작 성공확률을 의미합니다.
#define LSID_AUTO005051							0x00001424		// 코스튬 무기
#define LSID_AUTO005052							0x00001425		// 코스튬 투구
#define LSID_AUTO005053							0x00001426		// 코스튬 상의
#define LSID_AUTO005054							0x00001427		// 코스튬 하의
#define LSID_AUTO005055							0x00001428		// 코스튬 장갑
#define LSID_AUTO005056							0x00001429		// 코스튬 신발
#define LSID_AUTO005057							0x0000142A		// 코스튬 방패
#define LSID_AUTO005058							0x0000142B		// 코스튬 부스터
#define LSID_AUTO005059							0x0000142C		// 아이템 옵션 부여
#define LSID_AUTO005060							0x0000142D		// 마법 부여
#define LSID_AUTO005061							0x0000142E		// 기능 옵션 리스트
#define LSID_AUTO005062							0x0000142F		// 확정
#define LSID_AUTO005063							0x00001430		// 옵션 추가
#define LSID_AUTO005064							0x00001431		// 기존 옵션
#define LSID_AUTO005065							0x00001432		// 신규 옵션
#define LSID_AUTO005066							0x00001433		// 기존 옵션을 선택하겠습니까?
#define LSID_AUTO005067							0x00001434		// (신규 옵션은 삭제됩니다.)
#define LSID_AUTO005068							0x00001435		// SP 최대량 [%s%%] 증가
#define LSID_AUTO005069							0x00001436		// 스킬/포스 FP소모량 [%s%%] 감소
#define LSID_AUTO005070							0x00001437		// 일반 공격 명중 [%s] 증가
#define LSID_AUTO005071							0x00001438		// 일반 공격 회피 [%s] 증가
#define LSID_AUTO005072							0x00001439		// HP/FP 최대량 [%s%%] 증가
#define LSID_AUTO005073							0x0000143A		// 모든 공격력 [%s%%] 증가
#define LSID_AUTO005074							0x0000143B		// 방어력 [%s%%] 증가
#define LSID_AUTO005075							0x0000143C		// 스킬 레벨 [%s] 증가
#define LSID_AUTO005076							0x0000143D		// 스텔스
#define LSID_AUTO005077							0x0000143E		// 디텍트
#define LSID_AUTO005078							0x0000143F		// 지속피해 보조기술 해제
#define LSID_AUTO005079							0x00001440		// 이동속도 [%s] 증가
#define LSID_AUTO005080							0x00001441		// PC나 NPC의 약한 부위를 가르쳐줌
#define LSID_AUTO005081							0x00001442		// FP 회복량 [%s] 증가
#define LSID_AUTO005082							0x00001443		// 포스 공격력 [%s%%] 증가
#define LSID_AUTO005083							0x00001444		// FP 최대량 [%s%%] 증가
#define LSID_AUTO005084							0x00001445		// 공격 데미지 [%s%%]를 HP로 전환
#define LSID_AUTO005085							0x00001446		// 공격 데미지 [%s%%]를 FP로 전환
#define LSID_AUTO005086							0x00001447		// 크리티컬 [%s] 증가
#define LSID_AUTO005087							0x00001448		// 일반 사정거리 [%s] 증가
#define LSID_AUTO005088							0x00001449		// 방어력 [%s%%] 증가
#define LSID_AUTO005089							0x0000144A		// 디버프 시간 [%s%%] 단축
#define LSID_AUTO005090							0x0000144B		// HP 회복량 [%s%%] 증가
#define LSID_AUTO005091							0x0000144C		// 회피 [%s] 증가
#define LSID_AUTO005092							0x0000144D		// 런처 딜레이 [%s] 증가
#define LSID_AUTO005093							0x0000144E		// 포스 사정거리 [%s] 증가
#define LSID_AUTO005094							0x0000144F		// 크리티컬 피격 [%s] 감소
#define LSID_AUTO005095							0x00001450		// 방패 방어 성공률 [%s%%] 증가
#define LSID_AUTO005096							0x00001451		// 모든 내성 [%s] 증가
#define LSID_AUTO005097							0x00001452		// HP 최대량 [%s%%] 증가
#define LSID_AUTO005098							0x00001453		// 디버프 시간 [%s%%] 단축
#define LSID_AUTO005099							0x00001454		// 블록율 [%s] 증가
#define LSID_AUTO005100							0x00001455		// 디버프 시간 [%s%%] 단축
#define LSID_AUTO005101							0x00001456		// 주 재료를 삽입 해 주세요
#define LSID_AUTO005102							0x00001457		// 부 재료를 삽입 해 주세요
#define LSID_AUTO005103							0x00001458		// 하단 옵션을 선택하여 주세요
#define LSID_AUTO005104							0x00001459		// 장착중인 아이템은 마법부여가 불가능합니다.
#define LSID_AUTO005105							0x0000145A		// 대여중인 아이템은 마법부여가 불가능합니다.
#define LSID_AUTO005106							0x0000145B		// 무인상점에 등록된 아이템은 사용할수 없습니다.
#define LSID_AUTO005107							0x0000145C		// 마법부여가 불가능한 아이템입니다.
#define LSID_AUTO005108							0x0000145D		// 싱글
#define LSID_AUTO005109							0x0000145E		// 듀얼
#define LSID_AUTO005110							0x0000145F		// 트리플
#define LSID_AUTO005111							0x00001460		// 쿼드
#define LSID_AUTO005112							0x00001461		// 펜타
#define LSID_AUTO005113							0x00001462		// 헥사
#define LSID_AUTO005114							0x00001463		// 햅타
#define LSID_AUTO005115							0x00001464		// 옥타
#define LSID_AUTO005116							0x00001465		// 노나
#define LSID_AUTO005117							0x00001466		// 부여 가능 옵션
#define LSID_AUTO005118							0x00001467		// 마법부여 실패 : 현재 마법부여가 불가능한 상태입니다.
#define LSID_AUTO005119							0x00001468		// 마법부여 실패 : 마법부여에 필요한 재료가 없습니다.
#define LSID_AUTO005120							0x00001469		// 마법부여 실패 : 마법부여의 재료가 아닙니다.
#define LSID_AUTO005121							0x0000146A		// 마법부여 실패 : 마법부여 데이터에 오류가 있습니다.
#define LSID_AUTO005122							0x0000146B		// 마법부여 실패 : 알수없는 에러
#define LSID_AUTO005123							0x0000146C		// 마법부여 중에는 창을 종료할 수 없습니다.
#define LSID_AUTO005124							0x0000146D		// 아이템에 마법부여가 진행 중 입니다.
#define LSID_AUTO005125							0x0000146E		// 마법부여를 실행할 수 있습니다.
#define LSID_AUTO005126							0x0000146F		// 탈릭을 삽입해주십시요
#define LSID_AUTO005127							0x00001470		// 보석을 삽입해주십시요.
#define LSID_AUTO005128							0x00001471		// 보호석을 삽입해주십시요.
#define LSID_AUTO005129							0x00001472		// 강화 결과
#define LSID_AUTO005130							0x00001473		// 강화할 장비를 삽입해 주세요.
#define LSID_AUTO005131							0x00001474		// 탈릭 또는 소켓 익스텐더를 삽입해 주세요.
#define LSID_AUTO005132							0x00001475		// 강화 준비가 완료 되었습니다.
#define LSID_AUTO005133							0x00001476		// 아이템에 강화가 진행중입니다.
#define LSID_AUTO005134							0x00001477		// 강화가 성공하였습니다.
#define LSID_AUTO005135							0x00001478		// 강화가 실패하였습니다.
#define LSID_AUTO005136							0x00001479		// 탈릭 인챈트 확률
#define LSID_AUTO005137							0x0000147A		// 보석 추가 확률
#define LSID_AUTO005138							0x0000147B		// 실패 보정 확률
#define LSID_AUTO005139							0x0000147C		// 공격력 %d%% -> %d%% 증가
#define LSID_AUTO005140							0x0000147D		// 데미지의%d%% -> %d%% HP로흡수
#define LSID_AUTO005141							0x0000147E		// 상대블럭%d -> %d 확률무시
#define LSID_AUTO005142							0x0000147F		// 크리티컬피격%d -> %d 확률
#define LSID_AUTO005143							0x00001480		// 일반공격크리티컬공격%d -> %d 확률
#define LSID_AUTO005144							0x00001481		// 공격사정거리%d -> %d 증가
#define LSID_AUTO005145							0x00001482		// 방어력%d%% -> %d%% 증가
#define LSID_AUTO005146							0x00001483		// 지속버프스킬캔슬%d -> %d 확률
#define LSID_AUTO005147							0x00001484		// 불속성으로 변환
#define LSID_AUTO005148							0x00001485		// 불내성%d -> %d 증가
#define LSID_AUTO005149							0x00001486		// 물속성으로 변환
#define LSID_AUTO005150							0x00001487		// 물내성%d -> %d 증가
#define LSID_AUTO005151							0x00001488		// 땅속성으로 변환
#define LSID_AUTO005152							0x00001489		// 땅내성%d -> %d 증가
#define LSID_AUTO005153							0x0000148A		// 바람속성으로 변환
#define LSID_AUTO005154							0x0000148B		// 바람내성%d -> %d 증가
#define LSID_AUTO005155							0x0000148C		// 명중률%d -> %d 증가
#define LSID_AUTO005156							0x0000148D		// 회피율%d -> %d 증가
#define LSID_AUTO005157							0x0000148E		// 인챈트 아이템
#define LSID_AUTO005158							0x0000148F		// 탈릭
#define LSID_AUTO005159							0x00001490		// 확률
#define LSID_AUTO005160							0x00001491		// 강화 실패 시 아이템이 파괴 됩니다.<br>계속 하시겠습니까?
#define LSID_AUTO005161							0x00001492		// 아이템 제작
#define LSID_AUTO005162							0x00001493		// 아이템 강화
#define LSID_AUTO005163							0x00001494		// 아이템 마법부여
#define LSID_AUTO005164							0x00001495		// 데일리 보상
#define LSID_AUTO005165							0x00001496		// 보급 상자
#define LSID_AUTO005166							0x00001497		// 프리미엄 보급 상자
#define LSID_AUTO005167							0x00001498		// 남은 보상 시간
#define LSID_AUTO005168							0x00001499		// 보상 EXP
#define LSID_AUTO005169							0x0000149A		// 보상 게임머니
#define LSID_AUTO005170							0x0000149B		// 보상 아이템
#define LSID_AUTO005171							0x0000149C		// %d 시간
#define LSID_AUTO005172							0x0000149D		// %d 분
#define LSID_AUTO005173							0x0000149E		// %d 초
#define LSID_AUTO005174							0x0000149F		// 채굴 완료
#define LSID_AUTO005175							0x000014A0		// 30분 미만
#define LSID_AUTO005176							0x000014A1		// 보상받기
#define LSID_AUTO005177							0x000014A2		// 출석체크는?00시를 기준으로 변경 됩니다.
#define LSID_AUTO005178							0x000014A3		// 그라비티스톤
#define LSID_AUTO005179							0x000014A4		// 무인채굴기
#define LSID_AUTO005180							0x000014A5		// 라이선스
#define LSID_AUTO005181							0x000014A6		// 행성유닛키
#define LSID_AUTO005182							0x000014A7		// 축구공
#define LSID_AUTO005183							0x000014A8		// 호출기
#define LSID_AUTO005184							0x000014A9		// 쿠폰
#define LSID_AUTO005185							0x000014AA		// 필요아이템
#define LSID_AUTO005186							0x000014AB		// 기갑의영광[공격]
#define LSID_AUTO005187							0x000014AC		// 기갑의영광[방어]
#define LSID_AUTO005188							0x000014AD		// 제작확률보석
#define LSID_AUTO005189							0x000014AE		// 마법부여재료
#define LSID_AUTO005190							0x000014AF		// 보호석
#define LSID_AUTO005191							0x000014B0		// 특수재료
#define LSID_AUTO005192							0x000014B1		// 자동 사냥
#define LSID_AUTO005193							0x000014B2		// 자동 사냥 설정
#define LSID_AUTO005194							0x000014B3		// 자동획득설정
#define LSID_AUTO005195							0x000014B4		// 자동 포션 설정
#define LSID_AUTO005196							0x000014B5		// 자동 행위 설정
#define LSID_AUTO005197							0x000014B6		// 자동 채팅 설정
#define LSID_AUTO005198							0x000014B7		// 사냥방식
#define LSID_AUTO005199							0x000014B8		// 제자리
#define LSID_AUTO005200							0x000014B9		// 자유이동
#define LSID_AUTO005201							0x000014BA		// 범위반경
#define LSID_AUTO005202							0x000014BB		// 스킬설정
#define LSID_AUTO005203							0x000014BC		// 초 마다 사용
#define LSID_AUTO005204							0x000014BD		// 우선순위
#define LSID_AUTO005205							0x000014BE		// 생존우선
#define LSID_AUTO005206							0x000014BF		// 획득우선
#define LSID_AUTO005207							0x000014C0		// 획득대상
#define LSID_AUTO005208							0x000014C1		// 모든아이템
#define LSID_AUTO005209							0x000014C2		// 무기
#define LSID_AUTO005210							0x000014C3		// 방어구
#define LSID_AUTO005211							0x000014C4		// 장신구
#define LSID_AUTO005212							0x000014C5		// 발사물
#define LSID_AUTO005213							0x000014C6		// 포션
#define LSID_AUTO005214							0x000014C7		// 박스
#define LSID_AUTO005215							0x000014C8		// 고급재료
#define LSID_AUTO005216							0x000014C9		// 일반재료
#define LSID_AUTO005217							0x000014CA		// 그 외
#define LSID_AUTO005218							0x000014CB		// %을 초기화 하시겠습니까?
#define LSID_AUTO005219							0x000014CC		// 점핑 아이템 사용시 로그아웃 됩니다.<br> 계속 하시겠습니까?
#define LSID_AUTO005220							0x000014CD		// 대여중인 아이템은 인첸트가 불가능합니다.
#define LSID_AUTO005221							0x000014CE		// 장착중인 아이템은 인첸트가 불가능합니다.
#define LSID_AUTO005222							0x000014CF		// 아이템 채굴 정보
#define LSID_AUTO005223							0x000014D0		// 마법부여
#define LSID_AUTO005224							0x000014D1		// 거래 금지
#define LSID_AUTO005225							0x000014D2		// 거래 불가 제재로 인하여 거래 기능이 차단되었습니다.
#define LSID_AUTO005226							0x000014D3		// 거래 불가 제재로 인하여 NPC 기능을 이용할 수 없습니다.
#define LSID_AUTO005227							0x000014D4		// 제재 투표
#define LSID_AUTO005228							0x000014D5		// 채팅 금지 관리
#define LSID_AUTO005229							0x000014D6		// 현상범 관리
#define LSID_AUTO005230							0x000014D7		// 파티 플레이 금지 관리
#define LSID_AUTO005231							0x000014D8		// 거래 금지 관리
#define LSID_AUTO005232							0x000014D9		// 채팅 금지 제재
#define LSID_AUTO005233							0x000014DA		// 현상범 제재
#define LSID_AUTO005234							0x000014DB		// 파티 플레이 금지 제재
#define LSID_AUTO005235							0x000014DC		// 거래 금지 제재
#define LSID_AUTO005236							0x000014DD		// 한 개인에 대해 3일간 채팅 금지 조치를 취한다.
#define LSID_AUTO005237							0x000014DE		// 한 개인에 대해 3일간 현상범 조치를 취한다.
#define LSID_AUTO005238							0x000014DF		// 한 개인에 대해 3일간 파티 플레이를 금지한다.
#define LSID_AUTO005239							0x000014E0		// 한 개인에 대해 3일간 거래 금지를 취한다.
#define LSID_AUTO005240							0x000014E1		// %s 투표를 발의합니다.<br> 계속 하시겠습니까?
#define LSID_AUTO005241							0x000014E2		// 채팅 금지 리스트
#define LSID_AUTO005242							0x000014E3		// 현상범 리스트
#define LSID_AUTO005243							0x000014E4		// 파티 플레이 금지 리스트
#define LSID_AUTO005244							0x000014E5		// 거래 금지 리스트
#define LSID_AUTO005245							0x000014E6		// 제재 해제
#define LSID_AUTO005246							0x000014E7		// %s의 %s 제재해제 투표를 발의합니다.<br> 계속 하시겠습니까?
#define LSID_AUTO005247							0x000014E8		// %s 님의 %s를 <br>해제 하려고 합니다.
#define LSID_AUTO005248							0x000014E9		// 가드 몬스터 강화
#define LSID_AUTO005249							0x000014EA		// 일정시간 가드 몬스터를 강화 시킬 수 있다.<br>최대 210%% / 2시간 지속
#define LSID_AUTO005250							0x000014EB		// 버프 LV :
#define LSID_AUTO005251							0x000014EC		// 필요 금액 :
#define LSID_AUTO005252							0x000014ED		// 최대 강화 단계 입니다.
#define LSID_AUTO005253							0x000014EE		// 최소 강화 단계 입니다.
#define LSID_AUTO005254							0x000014EF		// 남은 버프 시간 :
#define LSID_AUTO005255							0x000014F0		// 강화버프없음
#define LSID_AUTO005256							0x000014F1		// 공격력 강화
#define LSID_AUTO005257							0x000014F2		// 방어력 강화
#define LSID_AUTO005258							0x000014F3		// HP강화
#define LSID_AUTO005259							0x000014F4		// 이동속도 강화
#define LSID_AUTO005260							0x000014F5		// 스턴 확률 강화
#define LSID_AUTO005261							0x000014F6		// 가드 몬스터를 강화 할 경우 게임머니가 소모되며 이전 버프효과는 지워집니다. <br>계속 하시겠습니까?
#define LSID_AUTO005262							0x000014F7		// 제제사유
#define LSID_AUTO005263							0x000014F8		// 사용여부
#define LSID_AUTO005264							0x000014F9		// 일간미션
#define LSID_AUTO005265							0x000014FA		// 주간미션
#define LSID_AUTO005266							0x000014FB		// 업적
#define LSID_AUTO005267							0x000014FC		// 택1 받기
#define LSID_AUTO005268							0x000014FD		// 모두 받기
#define LSID_AUTO005269							0x000014FE		// 보상이 선택되어있지 않습니다.
#define LSID_AUTO005270							0x000014FF		// %/%/%
#define LSID_AUTO005271							0x00001500		// %s을 완료 하였습니다.
#define LSID_AUTO005272							0x00001501		// 자동사냥이 시작되었습니다.
#define LSID_AUTO005273							0x00001502		// 자동사냥이 종료되었습니다.
#define LSID_AUTO005274							0x00001503		// 자동획득이 시작되었습니다.
#define LSID_AUTO005275							0x00001504		// 자동획득이 종료되었습니다.
#define LSID_AUTO005276							0x00001505		// 시작
#define LSID_AUTO005277							0x00001506		// 일시정지
#define LSID_AUTO005278							0x00001507		// 사냥방식 : 제자리
#define LSID_AUTO005279							0x00001508		// 사냥방식 : 자유이동
#define LSID_AUTO005280							0x00001509		// 사냥방식 : 범위반경
#define LSID_AUTO005281							0x0000150A		// 환경설정
#define LSID_AUTO005282							0x0000150B		// 보급 상자 선택
#define LSID_AUTO005283							0x0000150C		// (현재 레벨 %s%%)
#define LSID_AUTO005284							0x0000150D		// 보급 상자 전송
#define LSID_AUTO005285							0x0000150E		// 보급 상자 수령
#define LSID_AUTO005286							0x0000150F		// 전송 진행중
#define LSID_AUTO005287							0x00001510		// 보급 상자를 수령하였습니다.
#define LSID_AUTO005288							0x00001511		// 보급 상자의 수령이 불가능한 상태입니다.
#define LSID_AUTO005289							0x00001512		// 보상을 수령할 수 있는 시간이 되지 않았습니다.
#define LSID_AUTO005290							0x00001513		// 마법부여 실패 : 대상 아이템이 없습니다.
#define LSID_AUTO005291							0x00001514		// 마법부여 실패 : 업그레이드 불가 아이템 입니다.
#define LSID_AUTO005292							0x00001515		// 마법부여 실패 : 잠금 설정 되어 있는 아이템 입니다.
#define LSID_AUTO005293							0x00001516		// 버프 리스트
#define LSID_AUTO005294							0x00001517		// 확인
#define LSID_AUTO005295							0x00001518		// 금액
#define LSID_AUTO005296							0x00001519		// %s (Lv %d)
#define LSID_AUTO005297							0x0000151A		// 화폐가 부족합니다.
#define LSID_AUTO005298							0x0000151B		// %스킬/포스의 남은 시간이 10% 이하로 남아있어야만 버프 재시전이 가능합니다.
#define LSID_AUTO005299							0x0000151C		// 버프 최대 개수(8개)를 초과하였습니다. 대체할 버프를 우클릭하여 삭제하세요.   
#define LSID_AUTO005300							0x0000151D		// 대상의 버프 최대 개수(8개)가 초과해 버프 부여에 실패하였습니다.
#define LSID_AUTO005301							0x0000151E		// 특수재료
#define LSID_AUTO005302							0x0000151F		// 일반재료
#define LSID_AUTO005303							0x00001520		// 희귀재료
#define LSID_AUTO005304							0x00001521		// 고대재료
#define LSID_AUTO005305							0x00001522		// 유물재료
#define LSID_AUTO005306							0x00001523		// 영웅재료
#define LSID_AUTO005307							0x00001524		// 장엄재료
#define LSID_AUTO005308							0x00001525		// 일간미션
#define LSID_AUTO005309							0x00001526		// 주간미션
#define LSID_AUTO005310							0x00001527		// 업적
#define LSID_AUTO005311							0x00001528		// 모든타입
#define LSID_AUTO005312							0x00001529		// 사냥타입
#define LSID_AUTO005313							0x0000152A		// 학살타입
#define LSID_AUTO005314							0x0000152B		// 전쟁타입
#define LSID_AUTO005315							0x0000152C		// 오름차순정렬
#define LSID_AUTO005316							0x0000152D		// 내림차순정렬
#define LSID_AUTO005317							0x0000152E		// 전체
#define LSID_AUTO005318							0x0000152F		// 진행완료
#define LSID_AUTO005319							0x00001530		// 진행 중
#define LSID_AUTO005320							0x00001531		// 진행 전
#define LSID_AUTO005321							0x00001532		// 참전하기
#define LSID_AUTO005322							0x00001533		// 광산전쟁 시간이 아닙니다.
#define LSID_AUTO005323							0x00001534		// 진행시간
#define LSID_AUTO005324							0x00001535		// 광산전쟁 남은시간
#define LSID_AUTO005325							0x00001536		// 광산전쟁 진행시간
#define LSID_AUTO005326							0x00001537		// 관전하기/나가기
#define LSID_AUTO005327							0x00001538		// 워리어 타입 파워슈트
#define LSID_AUTO005328							0x00001539		// 코만도 타입 파워슈트
#define LSID_AUTO005329							0x0000153A		// 마일러 타입 파워슈트
#define LSID_AUTO005330							0x0000153B		// 버서커 타입 파워슈트
#define LSID_AUTO005331							0x0000153C		// 암즈맨 타입 파워슈트
#define LSID_AUTO005332							0x0000153D		// 쉴드마일러 타입 파워슈트
#define LSID_AUTO005333							0x0000153E		// 모든 공격력 증가
#define LSID_AUTO005334							0x0000153F		// 방어력 증가
#define LSID_AUTO005335							0x00001540		// -1
#define LSID_AUTO005336							0x00001541		// -1
#define LSID_AUTO005337							0x00001542		// 아바타가 사용할 수 없는 아이템입니다. 아바타의 레벨이 사용 가능 레벨보다 높습니다.
#define LSID_AUTO005338							0x00001543		// -1
#define LSID_AUTO005339							0x00001544		// 인벤토리에 빈 공간 %d칸이 부족합니다.
#define LSID_AUTO005340							0x00001545		// 당신은 죽었습니다.
#define LSID_AUTO005341							0x00001546		// 지금 바로 부활하시겠습니까?
#define LSID_AUTO005342							0x00001547		// 레인저 타입 파워슈트
#define LSID_AUTO005343							0x00001548		// 데스페라도 타입 파워슈트
#define LSID_AUTO005344							0x00001549		// 스나이퍼 타입 파워슈트
#define LSID_AUTO005345							0x0000154A		// 히든솔져 타입 파워슈트
#define LSID_AUTO005346							0x0000154B		// 센티넬 타입 파워슈트
#define LSID_AUTO005347							0x0000154C		// 인필트레이터 타입 파워슈트
#define LSID_AUTO005348							0x0000154D		// -1
#define LSID_AUTO005349							0x0000154E		// -1
#define LSID_AUTO005350							0x0000154F		// -1
#define LSID_AUTO005351							0x00001550		// -1
#define LSID_AUTO005352							0x00001551		// -1
#define LSID_AUTO005353							0x00001552		// -1
#define LSID_AUTO005354							0x00001553		// -1
#define LSID_AUTO005355							0x00001554		// -1
#define LSID_AUTO005356							0x00001555		// -1
#define LSID_AUTO005357							0x00001556		// 스피리츄어리스트 타입 파워슈트
#define LSID_AUTO005358							0x00001557		// 싸이퍼 타입 파워슈트
#define LSID_AUTO005359							0x00001558		// 찬드라 타입 파워슈트
#define LSID_AUTO005360							0x00001559		// 위저드 타입 파워슈트
#define LSID_AUTO005361							0x0000155A		// 아스트랄러 타입 파워슈트
#define LSID_AUTO005362							0x0000155B		// 홀리찬드라 타입 파워슈트
#define LSID_AUTO005363							0x0000155C		// -1
#define LSID_AUTO005364							0x0000155D		// -1
#define LSID_AUTO005365							0x0000155E		// -1
#define LSID_AUTO005366							0x0000155F		// -1
#define LSID_AUTO005367							0x00001560		// -1
#define LSID_AUTO005368							0x00001561		// -1
#define LSID_AUTO005369							0x00001562		// -1
#define LSID_AUTO005370							0x00001563		// -1
#define LSID_AUTO005371							0x00001564		// -1
#define LSID_AUTO005372							0x00001565		// 스페셜리스트 타입 파워슈트
#define LSID_AUTO005373							0x00001566		// 크래프트맨(B) 타입 파워슈트
#define LSID_AUTO005374							0x00001567		// 드라이버 타입 파워슈트
#define LSID_AUTO005375							0x00001568		// 멘탈스미스 타입 파워슈트
#define LSID_AUTO005376							0x00001569		// 아머라이더 타입 파워슈트
#define LSID_AUTO005377							0x0000156A		// -1
#define LSID_AUTO005378							0x0000156B		// -1
#define LSID_AUTO005379							0x0000156C		// -1
#define LSID_AUTO005380							0x0000156D		// -1
#define LSID_AUTO005381							0x0000156E		// -1
#define LSID_AUTO005382							0x0000156F		// -1
#define LSID_AUTO005383							0x00001570		// -1
#define LSID_AUTO005384							0x00001571		// -1
#define LSID_AUTO005385							0x00001572		// -1
#define LSID_AUTO005386							0x00001573		// -1
#define LSID_AUTO005387							0x00001574		// 워리어 타입 파워슈트
#define LSID_AUTO005388							0x00001575		// 챔피온 타입 파워슈트
#define LSID_AUTO005389							0x00001576		// 나이츠 타입 파워슈트
#define LSID_AUTO005390							0x00001577		// 템플러 타입 파워슈트
#define LSID_AUTO005391							0x00001578		// 가디언 타입 파워슈트
#define LSID_AUTO005392							0x00001579		// 블랙나이츠 타입 파워슈트
#define LSID_AUTO005393							0x0000157A		// -1
#define LSID_AUTO005394							0x0000157B		// -1
#define LSID_AUTO005395							0x0000157C		// -1
#define LSID_AUTO005396							0x0000157D		// -1
#define LSID_AUTO005397							0x0000157E		// -1
#define LSID_AUTO005398							0x0000157F		// -1
#define LSID_AUTO005399							0x00001580		// -1
#define LSID_AUTO005400							0x00001581		// -1
#define LSID_AUTO005401							0x00001582		// -1
#define LSID_AUTO005402							0x00001583		// 레인저 타입 파워슈트
#define LSID_AUTO005403							0x00001584		// 아처 타입 파워슈트
#define LSID_AUTO005404							0x00001585		// 헌터 타입 파워슈트
#define LSID_AUTO005405							0x00001586		// 어드벤츄러 타입 파워슈트
#define LSID_AUTO005406							0x00001587		// 스틸러 타입 파워슈트
#define LSID_AUTO005407							0x00001588		// 어쎄신 타입 파워슈트
#define LSID_AUTO005408							0x00001589		// -1
#define LSID_AUTO005409							0x0000158A		// -1
#define LSID_AUTO005410							0x0000158B		// -1
#define LSID_AUTO005411							0x0000158C		// -1
#define LSID_AUTO005412							0x0000158D		// -1
#define LSID_AUTO005413							0x0000158E		// -1
#define LSID_AUTO005414							0x0000158F		// -1
#define LSID_AUTO005415							0x00001590		// -1
#define LSID_AUTO005416							0x00001591		// -1
#define LSID_AUTO005417							0x00001592		// 스피리츄어리스트 타입 파워슈트
#define LSID_AUTO005418							0x00001593		// 캐스터 타입 파워슈트
#define LSID_AUTO005419							0x00001594		// 서머너 타입 파워슈트
#define LSID_AUTO005420							0x00001595		// 워락 타입 파워슈트
#define LSID_AUTO005421							0x00001596		// 다크프리스트 타입 파워슈트
#define LSID_AUTO005422							0x00001597		// 그레이저 타입 파워슈트
#define LSID_AUTO005423							0x00001598		// -1
#define LSID_AUTO005424							0x00001599		// -1
#define LSID_AUTO005425							0x0000159A		// -1
#define LSID_AUTO005426							0x0000159B		// -1
#define LSID_AUTO005427							0x0000159C		// -1
#define LSID_AUTO005428							0x0000159D		// -1
#define LSID_AUTO005429							0x0000159E		// -1
#define LSID_AUTO005430							0x0000159F		// -1
#define LSID_AUTO005431							0x000015A0		// -1
#define LSID_AUTO005432							0x000015A1		// 스페셜리스트 타입 파워슈트
#define LSID_AUTO005433							0x000015A2		// 크래프트맨(C) 타입 파워슈트
#define LSID_AUTO005434							0x000015A3		// -1
#define LSID_AUTO005435							0x000015A4		// 아티스트 타입 파워슈트
#define LSID_AUTO005436							0x000015A5		// -1
#define LSID_AUTO005437							0x000015A6		// -1
#define LSID_AUTO005438							0x000015A7		// -1
#define LSID_AUTO005439							0x000015A8		// -1
#define LSID_AUTO005440							0x000015A9		// -1
#define LSID_AUTO005441							0x000015AA		// -1
#define LSID_AUTO005442							0x000015AB		// -1
#define LSID_AUTO005443							0x000015AC		// -1
#define LSID_AUTO005444							0x000015AD		// %s 소지 한도를 초과해 무인거래기 판매금을 수령할 수 없습니다.<br><br>합계 %s %s<br><br>%s 소지 한도를 확인하시고 재접속 해주시길 부탁드립니다.<br>
#define LSID_AUTO005445							0x000015AE		// 등록된 탈릭과 맞지 않는 아이템입니다. 등록된 탈릭을 확인해 주십시오.
#define LSID_AUTO005446							0x000015AF		// -1
#define LSID_AUTO005447							0x000015B0		// 워리어 타입 파워슈트
#define LSID_AUTO005448							0x000015B1		// 디스트로이어 타입 파워슈트
#define LSID_AUTO005449							0x000015B2		// 글라디우스 타입 파워슈트
#define LSID_AUTO005450							0x000015B3		// 퍼니셔 타입 파워슈트
#define LSID_AUTO005451							0x000015B4		// 어썰터 타입 파워슈트
#define LSID_AUTO005452							0x000015B5		// 머셔너리 타입 파워슈트
#define LSID_AUTO005453							0x000015B6		// -1
#define LSID_AUTO005454							0x000015B7		// -1
#define LSID_AUTO005455							0x000015B8		// %s '%s'님이 '%s'을(를) 제작하였습니다.
#define LSID_AUTO005456							0x000015B9		// %s '%s'님이 '%s'을(를) '%s'에서 획득하였습니다.
#define LSID_AUTO005457							0x000015BA		// %s '%s'님이 '+%d %s'을(를) '%s'에서 획득하였습니다.
#define LSID_AUTO005458							0x000015BB		// %s '%s'님이 '%s' +%d 강화에 성공하였습니다.
#define LSID_AUTO005459							0x000015BC		// %s '%s'님이 '%s' +%d 강화에 실패하였습니다.
#define LSID_AUTO005460							0x000015BD		// -1
#define LSID_AUTO005461							0x000015BE		// -1
#define LSID_AUTO005462							0x000015BF		// 레인저 타입 파워슈트
#define LSID_AUTO005463							0x000015C0		// 거너 타입 파워슈트
#define LSID_AUTO005464							0x000015C1		// 스카우터 타입 파워슈트
#define LSID_AUTO005465							0x000015C2		// 스트라이커 타입 파워슈트
#define LSID_AUTO005466							0x000015C3		// 디멘터 타입 파워슈트
#define LSID_AUTO005467							0x000015C4		// 팬텀쉐도우 타입 파워슈트
#define LSID_AUTO005468							0x000015C5		// -1
#define LSID_AUTO005469							0x000015C6		// -1
#define LSID_AUTO005470							0x000015C7		// 프리미엄 혜택
#define LSID_AUTO005471							0x000015C8		// 경험치 획득량
#define LSID_AUTO005472							0x000015C9		// 에니머스 경험치 획득량
#define LSID_AUTO005473							0x000015CA		// 숙련도 획득량
#define LSID_AUTO005474							0x000015CB		// 포스 숙련도 획득량
#define LSID_AUTO005475							0x000015CC		// 아이템 드랍률
#define LSID_AUTO005476							0x000015CD		// 오어 채굴속도
#define LSID_AUTO005477							0x000015CE		// 스페셜리스트 타입 파워슈트
#define LSID_AUTO005478							0x000015CF		// 엔지니어 타입 파워슈트
#define LSID_AUTO005479							0x000015D0		// -1
#define LSID_AUTO005480							0x000015D1		// 싸이언티스트 타입 파워슈트
#define LSID_AUTO005481							0x000015D2		// 배틀리더 타입 파워슈트
#define LSID_AUTO005482							0x000015D3		// 제한 시간 뒤에 부활지점으로 자동이동 됩니다.
#define LSID_AUTO005483							0x000015D4		// -1
#define LSID_AUTO005484							0x000015D5		// 창고 확장시 %s %d개가 필요합니다. 창고를 확상하시겠습니까?
#define LSID_AUTO005485							0x000015D6		// 창고 확장시 %s %d개가 필요합니다.
#define LSID_AUTO005486							0x000015D7		// 영웅 NPC의 조합을 통해 창고 열쇠 아이템으로 교환 후 창고를 확장할 수 있습니다.
#define LSID_AUTO005487							0x000015D8		// [%s]세력이 [%s]지역에서 [%s]을/를 처치하였습니다.
#define LSID_AUTO005488							0x000015D9		// 시간쿠폰 최대 보유 수를 초과해 획득할 수 없습니다.
#define LSID_AUTO005489							0x000015DA		// 중복 구매를 할 수 없는 아이템입니다.
#define LSID_AUTO005490							0x000015DB		// 프리미엄 상품 교환권
#define LSID_AUTO005491							0x000015DC		// 겜블 업그레이드
#define LSID_AUTO005492							0x000015DD		// 입장
#define LSID_AUTO005493							0x000015DE		// 나가기
#define LSID_AUTO005494							0x000015DF		// 전투상태에서는 입장이 불가능합니다.
#define LSID_AUTO005495							0x000015E0		// 전투상태에서는 이탈이 불가능합니다.
#define LSID_AUTO005496							0x000015E1		// 금일 출석체크가 진행 되었습니다.
#define LSID_AUTO005497							0x000015E2		// 경험치 획득률 : %
#define LSID_AUTO005498							0x000015E3		// [%]에 의해 죽었습니다
#define LSID_AUTO005499							0x000015E4		// 마지막 일격 : [%] %(%%)
#define LSID_AUTO005500							0x000015E5		// 뒤에 부활지점으로 자동이동 됩니다.
#define LSID_AUTO005501							0x000015E6		// 제자리 부활
#define LSID_AUTO005502							0x000015E7		// %d / %d개
#define LSID_AUTO005503							0x000015E8		// 해당 아이템을 소지하고 있지 않습니다.
#define LSID_AUTO005504							0x000015E9		// 레벨
#define LSID_AUTO005505							0x000015EA		// 생명력(HP)
#define LSID_AUTO005506							0x000015EB		// 포스력(FP)
#define LSID_AUTO005507							0x000015EC		// 스테미너(SP)
#define LSID_AUTO005508							0x000015ED		// 생명력 게이지 ON<br>(클릭 시 on/off 전환)
#define LSID_AUTO005509							0x000015EE		// 포스력 게이지 ON<br>(클릭 시 on/off 전환)
#define LSID_AUTO005510							0x000015EF		// 스테미너 게이지 ON<br>(클릭 시 on/off 전환)
#define LSID_AUTO005511							0x000015F0		// 생명력 게이지 OFF<br>(클릭 시 on/off 전환)
#define LSID_AUTO005512							0x000015F1		// 포스력 게이지 OFF<br>(클릭 시 on/off 전환)
#define LSID_AUTO005513							0x000015F2		// 스테미너 게이지 OFF<br>(클릭 시 on/off 전환)
#define LSID_AUTO005514							0x000015F3		// 레이더 확대
#define LSID_AUTO005515							0x000015F4		// 레이더 축소
#define LSID_AUTO005516							0x000015F5		// 우편함
#define LSID_AUTO005517							0x000015F6		// X,Y좌표
#define LSID_AUTO005518							0x000015F7		// 미니맵
#define LSID_AUTO005519							0x000015F8		// 레이더 최소화
#define LSID_AUTO005520							0x000015F9		// 레이더 최대화
#define LSID_AUTO005521							0x000015FA		// 채팅모드 활성화
#define LSID_AUTO005522							0x000015FB		// 채팅모드 종료
#define LSID_AUTO005523							0x000015FC		// 채팅창 사이즈 조절바<br>(클릭 앤 드래그)
#define LSID_AUTO005524							0x000015FD		// 전체채팅 옵션
#define LSID_AUTO005525							0x000015FE		// 2차 비밀번호 재설정
#define LSID_AUTO005526							0x000015FF		// 경험치
#define LSID_AUTO005527							0x00001600		// 단축슬롯 순서변경(+)<br>단축키 : `
#define LSID_AUTO005528							0x00001601		// 단축슬롯 순서변경(-)
#define LSID_AUTO005529							0x00001602		// 단축슬롯 모두 보이기
#define LSID_AUTO005530							0x00001603		// 단축슬롯 모두 숨기기
#define LSID_AUTO005531							0x00001604		// 단축슬롯 모두 열기
#define LSID_AUTO005532							0x00001605		// 단축슬롯 닫기
#define LSID_AUTO005533							0x00001606		// 하나의 인벤토리 사용
#define LSID_AUTO005534							0x00001607		// 복수의 인벤토리 사용
#define LSID_AUTO005535							0x00001608		// 아이템 공방
#define LSID_AUTO005536							0x00001609		// 자동사냥 설정이 초기화 되었습니다.
#define LSID_AUTO005537							0x0000160A		// 아이템 자동획득 설정이 초기화 되었습니다.
#define LSID_AUTO005538							0x0000160B		// 아이템 자동획득 설정이 적용 되었습니다.
#define LSID_AUTO005539							0x0000160C		// 구입
#define LSID_AUTO005540							0x0000160D		// 데일리 킬 포인트
#define LSID_AUTO005541							0x0000160E		// 누적 킬 포인트
#define LSID_AUTO005542							0x0000160F		// %d위
#define LSID_AUTO005543							0x00001610		// 순위 없음
#define LSID_AUTO005544							0x00001611		// 사냥포인트
#define LSID_AUTO005545							0x00001612		// 사냥포인트는 몬스터 처치 시 획득 됩니다. 몬스터 난이도에 따라 획득량이 증가합니다.
#define LSID_AUTO005546							0x00001613		// 사냥포인트로 제작 재료가 판매된다.
#define LSID_AUTO005547							0x00001614		// 학살포인트
#define LSID_AUTO005548							0x00001615		// 학살포인트는 타 종족 유저 처치 시 획득됩니다. 당일 획득한 포인트는 임시포인트로 보관되며, 00시를 기준으로 학살 포인트로 정산됩니다.
#define LSID_AUTO005549							0x00001616		// 학살포인트로 인챈트 재료가 판매된다.
#define LSID_AUTO005550							0x00001617		// 전쟁포인트
#define LSID_AUTO005551							0x00001618		// 전쟁포인트는 쟁에 참여하여 공로로 인정되는 행위시 획득됩니다. 통제장치 파괴 시 많은 량을 획득 할 수 있습니다.
#define LSID_AUTO005552							0x00001619		// 전쟁포인트로 인챈트 재료가 판매된다.
#define LSID_AUTO005553							0x0000161A		// [대표적 판매 상품]
#define LSID_AUTO005554							0x0000161B		// 일간 미션
#define LSID_AUTO005555							0x0000161C		// 주간 미션
#define LSID_AUTO005556							0x0000161D		// 업적
#define LSID_AUTO005557							0x0000161E		// 택 1 받기
#define LSID_AUTO005558							0x0000161F		// 모두 받기
#define LSID_AUTO005559							0x00001620		// 보상이 선택되어있지 않습니다.
#define LSID_AUTO005560							0x00001621		// %s를 완료 하였습니다.
#define LSID_AUTO005561							0x00001622		// 모든타입
#define LSID_AUTO005562							0x00001623		// 사냥타입
#define LSID_AUTO005563							0x00001624		// 학살타입
#define LSID_AUTO005564							0x00001625		// 전쟁타입
#define LSID_AUTO005565							0x00001626		// 오름차순정렬
#define LSID_AUTO005566							0x00001627		// 내림차순정렬
#define LSID_AUTO005567							0x00001628		// 전체
#define LSID_AUTO005568							0x00001629		// 진행 완료
#define LSID_AUTO005569							0x0000162A		// 진행 중
#define LSID_AUTO005570							0x0000162B		// 진행 전
#define LSID_AUTO005571							0x0000162C		// 보상 수령을 실패하였습니다.
#define LSID_AUTO005572							0x0000162D		// %d레벨 목표
#define LSID_AUTO005573							0x0000162E		// 미션/업적 UI
#define LSID_AUTO005574							0x0000162F		// 분해 대상 아이템이 존재하지 않습니다.
#define LSID_AUTO005575							0x00001630		// 인벤토리의 개수가 %d개 부족하여 분해에 실패 했습니다.
#define LSID_AUTO005576							0x00001631		// 해당 아이템은 분해가 불가능한 아이템입니다.
#define LSID_AUTO005577							0x00001632		// 현재 분해가 불가능한 상태입니다.
#define LSID_AUTO005578							0x00001633		// 락이 걸린 아이템은 분해할 수 없습니다.
#define LSID_AUTO005579							0x00001634		// 분해 데이터에 오류가 있습니다.
#define LSID_AUTO005580							0x00001635		// 아이템 분해
#define LSID_AUTO005581							0x00001636		// 아이템을 제작 재료로 분해
#define LSID_AUTO005582							0x00001637		// 분해하려는 아이템을 클릭하십시요.
#define LSID_AUTO005583							0x00001638		// 분해 결과
#define LSID_AUTO005584							0x00001639		// 분해 결과 예상
#define LSID_AUTO005585							0x0000163A		// %s 최대 %d개
#define LSID_AUTO005586							0x0000163B		// 목록
#define LSID_AUTO005587							0x0000163C		// 아이템 분해시 대상 아이템들은 소멸됩니다.<br> 계속 진행하시겠습니까?
#define LSID_AUTO005588							0x0000163D		// %s 미션의 보상으로 %s를 받았습니다.
#define LSID_AUTO005589							0x0000163E		// %s 미션의 보상으로 %s, %s를 받았습니다.
#define LSID_AUTO005590							0x0000163F		// %d %s를 지불하셨습니다. 당신에게  [%s]가 부여됩니다.
#define LSID_AUTO005591							0x00001640		// 유저리스트
#define LSID_AUTO005592							0x00001641		// LV
#define LSID_AUTO005593							0x00001642		// 검색 조건에 만족하는 캐릭터가 없습니다.
#define LSID_AUTO005594							0x00001643		// 검색 대상 리스트가 너무 많습니다. 검색자를 변경하여 재검색하세요.
#define LSID_AUTO005595							0x00001644		// 보급상자
#define LSID_AUTO005596							0x00001645		// 파워슈트 착용 상태에서는 해당 아이템을 사용할 수 없습니다.
#define LSID_AUTO005597							0x00001646		// 파워슈트 착용 상태에서는 아이템을 버릴 수 없습니다.
#define LSID_AUTO005598							0x00001647		// 장착된 파워슈트 아이템은 해제하거나 변경할 수 없습니다.
#define LSID_AUTO005599							0x00001648		// 파워슈트 착용 상태에서는 이동할 수 없습니다.
#define LSID_AUTO005600							0x00001649		// 파워슈트 장비는 해제할 수 없습니다.
#define LSID_AUTO005601							0x0000164A		// 조작 난이도
#define LSID_AUTO005602							0x0000164B		// 쉬움
#define LSID_AUTO005603							0x0000164C		// 보통
#define LSID_AUTO005604							0x0000164D		// 어려움
#define LSID_AUTO005605							0x0000164E		// 해당 클래스의 이용 가능 횟수가 %d회 남았습니다.
#define LSID_AUTO005606							0x0000164F		// 해당 클래스의 이용 가능 횟수가 모두 소진되었습니다. 이용 가능 횟수는 다음 전쟁에 회복됩니다.
#define LSID_AUTO005607							0x00001650		// 장엄 마력주입
#define LSID_AUTO005608							0x00001651		// 장엄 아이템을 삽입해 주세요.
#define LSID_AUTO005609							0x00001652		// 마력주입 단계
#define LSID_AUTO005610							0x00001653		// 성능 비교
#define LSID_AUTO005611							0x00001654		// 이전 값
#define LSID_AUTO005612							0x00001655		// 이후 값
#define LSID_AUTO005613							0x00001656		// 필요 포인트
#define LSID_AUTO005614							0x00001657		// 현재 보유 포인트
#define LSID_AUTO005615							0x00001658		// 마력 주입
#define LSID_AUTO005616							0x00001659		// 장엄 등급 아이템이 아닙니다.
#define LSID_AUTO005617							0x0000165A		// 선택된 포인트가 부족합니다.
#define LSID_AUTO005618							0x0000165B		// 마력을 주입해 주세요.
#define LSID_AUTO005619							0x0000165C		// 마력부여가 불가능한 아이템입니다.
#define LSID_AUTO005620							0x0000165D		// 크리티컬 피격 감소
#define LSID_AUTO005621							0x0000165E		// ? - ?
#define LSID_AUTO005622							0x0000165F		// %d - %d
#define LSID_AUTO005623							0x00001660		// %d
#define LSID_AUTO005624							0x00001661		// -
#define LSID_AUTO005625							0x00001662		// %d%%(+%d%%)
#define LSID_AUTO005626							0x00001663		// %d%%(-%d%%)
#define LSID_AUTO005627							0x00001664		// 강대한 마력이 아이템을 밝게 비춥니다.
#define LSID_AUTO005628							0x00001665		// 맹렬한 마력이 아이템을 손상시켰습니다.
#define LSID_AUTO005629							0x00001666		// 모여든 마력이 아이템을 겉돕니다.
#define LSID_AUTO005630							0x00001667		// 이미 최대 마력이 주입된 아이템입니다.
#define LSID_AUTO005631							0x00001668		// 전투정보 UI 열기
#define LSID_AUTO005632							0x00001669		// 전투정보 UI 닫기
#define LSID_AUTO005633							0x0000166A		// 진행시간 내 승패가 결정되지 않았습니다. 안전을 위해 %d초 후 HQ로 강제 이동되오니 원치 않는 분은 참전UI의 [나가기]버튼을 클릭해 입장 전 위치로 이동해 주시기 바랍니다.
#define LSID_AUTO005634							0x0000166B		// 홀리스톤 키퍼가 %s 종족 %s 유저에 의해 처치되어 승패가 무효처리 되었습니다. (매장량은 다음 전쟁으로 이월됩니다.) 안전을 위해 %d초 후 HQ로 강제 이동되오니 원치 않는 분은 참전UI의 [나가기]버튼을 클릭해 주시기 바랍니다.
#define LSID_AUTO005635							0x0000166C		// %s가 승리종족으로 확정되었습니다. 안전을 위해 %d초 후 HQ로 강제 이동되오니 원치 않는 분은 참전UI의 [나가기]버튼을 클릭해 주시기 바랍니다.
#define LSID_AUTO005636							0x0000166D		// 적대적 키퍼가 잠시 후 출현합니다. 안전을 위해 %d초 후 HQ로 강제 이동되오니 원치 않는 분은 참전UI의 [나가기]버튼을 클릭해 주시기 바랍니다.
#define LSID_AUTO005637							0x0000166E		// 자동 사냥 동작 중에는 파티에 가입할 수 없습니다.
#define LSID_AUTO005638							0x0000166F		// 파티 상태에서는 자동 사냥을 시작할 수 없습니다.
#define LSID_AUTO005639							0x00001670		// [핏보스/이벤트]등급 몬스터 보상은 자동 획득 되지 않습니다. 직접 루팅 하십시오.
#define LSID_AUTO005640							0x00001671		// 네트워크 환경이 불안정하여 연결을 종료 합니다.
#define LSID_AUTO005641							0x00001672		// %d Kill
#define LSID_AUTO005642							0x00001673		// %d Point
#define LSID_AUTO005643							0x00001674		// 참여 중...
#define LSID_AUTO005644							0x00001675		// 쟁 결과
#define LSID_AUTO005645							0x00001676		// %02dh %02dm
#define LSID_AUTO005646							0x00001677		// 실제 획득 정보와 차이가 있을 수 있습니다.
#define LSID_AUTO005647							0x00001678		// %s 족장진
#define LSID_AUTO005648							0x00001679		// 승리
#define LSID_AUTO005649							0x0000167A		// 무승부
#define LSID_AUTO005650							0x0000167B		// 패배
#define LSID_AUTO005651							0x0000167C		// 몬스터
#define LSID_AUTO005652							0x0000167D		// 키퍼 슬레이어
#define LSID_AUTO005653							0x0000167E		// 키퍼 슬레이어(어시스트)
#define LSID_AUTO005654							0x0000167F		// 통제장치 칩 획득
#define LSID_AUTO005655							0x00001680		// 통제장치 칩 획득(어시스트)
#define LSID_AUTO005656							0x00001681		// 칩 운반자 킬러
#define LSID_AUTO005657							0x00001682		// 칩 운반자 킬러(어시스트)
#define LSID_AUTO005658							0x00001683		// 통제장치 칩 운반
#define LSID_AUTO005659							0x00001684		// 통제장치 칩 운반(어시스트)
#define LSID_AUTO005660							0x00001685		// 참여시간
#define LSID_AUTO005661							0x00001686		// %02d : %02d
#define LSID_AUTO005662							0x00001687		// 파워슈트는 해당 행위를 할 수 없습니다.
#define LSID_AUTO005663							0x00001688		// 활성화 소켓
#define LSID_AUTO005664							0x00001689		// %d개
#define LSID_AUTO005665							0x0000168A		// 활성화 소켓 1개 추가
#define LSID_AUTO005666							0x0000168B		// 소켓을 더 이상 확장할 수 없습니다.
#define LSID_AUTO005667							0x0000168C		// 귀속
#define LSID_AUTO005668							0x0000168D		// 비귀속
#define LSID_AUTO005669							0x0000168E		// 포인트 상점
#define LSID_AUTO005670							0x0000168F		// 2차 비밀번호 재설정을 위해, 클라이언트를 재시작 해주시기 바랍니다.
#define LSID_AUTO005671							0x00001690		// 아이템 상태
#define LSID_AUTO005672							0x00001691		// 전쟁 포인트 %d 를 획득하였습니다.
#define LSID_AUTO005673							0x00001692		// 총 필요 포인트
#define LSID_AUTO005674							0x00001693		// 이전 획득 포인트
#define LSID_AUTO005675							0x00001694		// 교환 횟수에 의한 탈릭 포인트는 차감 획득 됩니다.
#define LSID_AUTO005676							0x00001695		// 교환 횟수 초기화까지 남은 시간
#define LSID_AUTO005677							0x00001696		// 재료/소모품 제작
#define LSID_AUTO005678							0x00001697		// 코스튬 제작
#define LSID_AUTO005679							0x00001698		// 월간 미션
#define LSID_AUTO005680							0x00001699		// 공격자 장비 보기
#define LSID_AUTO005681							0x0000169A		// 제자리 부활
#define LSID_AUTO005682							0x0000169B		// 부활지점으로 이동
#define LSID_AUTO005683							0x0000169C		// 종족HQ로 이동
#define LSID_AUTO005684							0x0000169D		// [%s]
#define LSID_AUTO005685							0x0000169E		// 일반 공격
#define LSID_AUTO005686							0x0000169F		// 학살포인트:
#define LSID_AUTO005687							0x000016A0		// 전쟁포인트:
#define LSID_AUTO005688							0x000016A1		// 사냥 포인트 상점
#define LSID_AUTO005689							0x000016A2		// 학살 포인트 상점
#define LSID_AUTO005690							0x000016A3		// 전쟁 포인트 상점
#define LSID_AUTO005691							0x000016A4		// 포인트 교환
#define LSID_AUTO005692							0x000016A5		// %d/%d
#define LSID_AUTO005693							0x000016A6		// [%s] 지역에서 [%s]이/가 출현하였습니다.
#define LSID_AUTO005694							0x000016A7		// [%s] 지역에서 [%s]이/가 처치되었습니다.
#define LSID_AUTO005695							0x000016A8		// 보급 상자 전송 불가
#define LSID_AUTO005696							0x000016A9		// 일일 사냥 포인트 획득
#define LSID_AUTO005697							0x000016AA		// 일일 학살 포인트 획득
#define LSID_AUTO005698							0x000016AB		// 일일 전쟁 포인트 획득
#define LSID_AUTO005699							0x000016AC		// 보석의 개수가 부족하여, 제작을 진행할 수 없습니다.
#define LSID_AUTO005700							0x000016AD		// [제작 결과]
#define LSID_AUTO005701							0x000016AE		// SET등급
#define LSID_AUTO005702							0x000016AF		// 이대로 진행할 경우 불필요하게 보석이 소모됩니다.<br>계속 하시겠습니까?
#define LSID_AUTO005703							0x000016B0		// 포인트 최대 보유 한도를 초과해 추가 획득을 할 수 없습니다.
#define LSID_AUTO005704							0x000016B1		// 제재하기
#define LSID_AUTO005705							0x000016B2		// %s (-%s%%) 달란트가 수리비로 필요합니다.<br>계속 하시겠습니까?
#define LSID_AUTO005706							0x000016B3		// [스크림블 신청 중] 길드 보유 골드를(%s) 넘길 수 없습니다
#define LSID_AUTO005707							0x000016B4		// 길드의 보유 골드가 (%s)을 넘어서 신청할 수 없습니다.
#define LSID_AUTO005708							0x000016B5		// 상대방 길드의 보유 골드가 (%s)을 넘어서 신청할 수 없습니다
#define LSID_AUTO005709							0x000016B6		// 기갑 수리비를 할인 받습니다.
#define LSID_AUTO005710							0x000016B7		// %s%d. %s ( %d개 ) : %s %s, %s %s<br>
#define LSID_AUTO005711							0x000016B8		// %s<br>%s : %s %s, %s %s<br><br>위 아이템을 구입하시겠습니까?
#define LSID_AUTO005712							0x000016B9		// KILL: %s
#define LSID_AUTO005713							0x000016BA		// DEATH: %s
#define LSID_AUTO005714							0x000016BB		// 기여도: %s
#define LSID_AUTO005715							0x000016BC		// 기여도 %d시즌
#define LSID_AUTO005716							0x000016BD		// 시즌 종료
#define LSID_AUTO005717							0x000016BE		// 보상 받는 기간이 아닙니다
#define LSID_AUTO005718							0x000016BF		// 이미 받은 보상입니다
#define LSID_AUTO005719							0x000016C0		// 길드원이 아니므로 보상 받을 수 없습니다
#define LSID_AUTO005720							0x000016C1		// 보상 받을 수 있는 유저 랭킹이 아닙니다
#define LSID_AUTO005721							0x000016C2		// 보상 받을 수 있는 길드 랭킹이 아닙니다
#define LSID_AUTO005722							0x000016C3		// 보상 받을 수 있는 종족 랭킹이 아닙니다
#define LSID_AUTO005723							0x000016C4		// 보상 테이블 오류입니다
#define LSID_AUTO005724							0x000016C5		// 보상 오류입니다
#define LSID_AUTO005725							0x000016C6		// 보상을 정상적으로 받았습니다
#define LSID_AUTO005726							0x000016C7		// 보상
#define LSID_AUTO005727							0x000016C8		// 내 등급
#define LSID_AUTO005728							0x000016C9		// 시즌 종료까지 %d일 %d시간 %d분 남음
#define LSID_AUTO005729							0x000016CA		// %d%s
#define LSID_AUTO005730							0x000016CB		// Grade %d
#define LSID_AUTO005731							0x000016CC		// "당신은 전체 종족 %d%%에 속하는 실력자 입니다"
#define LSID_AUTO005732							0x000016CD		// "당신은 전체 종족 %d%%
#define LSID_AUTO005733							0x000016CE		// "당신은 전체 종족
#define LSID_AUTO005734							0x000016CF		// 종합 기여도 랭킹
#define LSID_AUTO005735							0x000016D0		// 등급 보상
#define LSID_AUTO005736							0x000016D1		// 시즌 동안 기여도를 획득하여 등급을 달성하며, 시즌 종료시 등급에 따라 보상을 획득 합니다.
#define LSID_AUTO005737							0x000016D2		// 새 시즌이 시작되면 보상이 초기화 됩니다.
#define LSID_AUTO005738							0x000016D3		// NOVIS
#define LSID_AUTO005739							0x000016D4		// BRONZE
#define LSID_AUTO005740							0x000016D5		// SILVER
#define LSID_AUTO005741							0x000016D6		// GOLD
#define LSID_AUTO005742							0x000016D7		// PLATINUM
#define LSID_AUTO005743							0x000016D8		// DIAMOND
#define LSID_AUTO005744							0x000016D9		// MASTER
#define LSID_AUTO005745							0x000016DA		// CHALLENGE
#define LSID_AUTO005746							0x000016DB		// %dea
#define LSID_AUTO005747							0x000016DC		// 순위 보상
#define LSID_AUTO005748							0x000016DD		// 시즌 종료시 종족별 개인 랭킹 1위부터 5위에게 지급되는 보상입니다
#define LSID_AUTO005749							0x000016DE		// 종족의 최고 유저를 상징하는 효과를 보상으로 획득 할 수 있습니다
#define LSID_AUTO005750							0x000016DF		// 종족의 최고 유저를 상징하는
#define LSID_AUTO005751							0x000016E0		// 순위 보상은 시즌 종료후 적용 됩니다
#define LSID_AUTO005752							0x000016E1		// 기여도 시즌 별 종족 개인 랭킹 1위부터 5위까지 유저에게 부여되는 이펙트이며, 다음 시즌 종료시 까지 유지됩니다
#define LSID_AUTO005753							0x000016E2		// 길드 등급
#define LSID_AUTO005754							0x000016E3		// 달성 보상
#define LSID_AUTO005755							0x000016E4		// 시즌 동안 기여도를 획득하여 등급을 달성하며, 시즌 종료시 등급에 따라 보상을 획득 합니다.
#define LSID_AUTO005756							0x000016E5		// 새 시즌이 시작되면 보상이 초기화 됩니다.
#define LSID_AUTO005757							0x000016E6		// %s%s 
#define LSID_AUTO005758							0x000016E7		// 시즌 종료시 종족별 길드 랭킹 1위부터 5위에게 지급되는 보상입니다
#define LSID_AUTO005759							0x000016E8		// 길드 랭킹 1위 ~ 2위 : 초계지 채굴 권리 / 명예 길드 칭호 
#define LSID_AUTO005760							0x000016E9		// 길드 랭킹 1위 ~ 2위 : 
#define LSID_AUTO005761							0x000016EA		// 길드 랭킹 3위 ~ 5위 : 명예 길드 칭호 
#define LSID_AUTO005762							0x000016EB		// 길드 랭킹 3위 ~ 5위 : 
#define LSID_AUTO005763							0x000016EC		// 순위 보상은 시즌 종료후 적용 됩니다
#define LSID_AUTO005764							0x000016ED		// 서버 이름 : %s
#define LSID_AUTO005765							0x000016EE		// 서버 이름 :
#define LSID_AUTO005766							0x000016EF		// 서버 : %s
#define LSID_AUTO005767							0x000016F0		// 서버 :
#define LSID_AUTO005768							0x000016F1		// 시즌 우승 횟수 :
#define LSID_AUTO005769							0x000016F2		// %d회 
#define LSID_AUTO005770							0x000016F3		// %d
#define LSID_AUTO005771							0x000016F4		// 현재 %s 종족 순위는 
#define LSID_AUTO005772							0x000016F5		// %d위 입니다
#define LSID_AUTO005773							0x000016F6		// %d위
#define LSID_AUTO005774							0x000016F7		// 시즌 동안 기여도를 획득하여 등급을 달성하며, 시즌 종료시 등급에 따라 보상을 획득 합니다.
#define LSID_AUTO005775							0x000016F8		// 새 시즌이 시작되면 보상이 초기화 됩니다.
#define LSID_AUTO005776							0x000016F9		// Lv
#define LSID_AUTO005777							0x000016FA		// 순위 보상
#define LSID_AUTO005778							0x000016FB		// 시즌 종료시 종족 기여도 순위 1위를 달성하면
#define LSID_AUTO005779							0x000016FC		// 승자의 전리품 효과를 보상으로 획득 할 수 있습니다
#define LSID_AUTO005780							0x000016FD		// 순위 보상은 시즌 종료후 적용 됩니다
#define LSID_AUTO005781							0x000016FE		// 승자의 전리품
#define LSID_AUTO005782							0x000016FF		// 기여도 시즌마다 1위 종족에게 부여되는 버프로 시즌 종료시 적용됩니다. 사냥시 경험치 추가 획득 효과를 받는다.
#define LSID_AUTO005783							0x00001700		// 현재 시즌
#define LSID_AUTO005784							0x00001701		// 시즌 종료 안내
#define LSID_AUTO005785							0x00001702		// 기여도 시즌이 종료 되었습니다.
#define LSID_AUTO005786							0x00001703		// 시즌 %d
#define LSID_AUTO005787							0x00001704		// 종족 기여도 기여에 열정을 보여준 노력에 대한 보상을
#define LSID_AUTO005788							0x00001705		// 지급합니다. 수고하셨습니다
#define LSID_AUTO005789							0x00001706		// 개인 기여도 부분 : %s %s
#define LSID_AUTO005790							0x00001707		// 개인
#define LSID_AUTO005791							0x00001708		// 길드 기여도 부분 : %s %s
#define LSID_AUTO005792							0x00001709		// 길드
#define LSID_AUTO005793							0x0000170A		// 길드 없음
#define LSID_AUTO005794							0x0000170B		// 종족 기여도 부문 : %s %s
#define LSID_AUTO005795							0x0000170C		// 종족
#define LSID_AUTO005796							0x0000170D		// 다음 시즌까지 %d일 %d시간 %d분  남음
#define LSID_AUTO005797							0x0000170E		// 우승 종족 : %s
#define LSID_AUTO005798							0x0000170F		// 우승 종족
#define LSID_AUTO005799							0x00001710		// [기여도 등급 보상 박스]
#define LSID_AUTO005800							0x00001711		// 잘못된 패킷 입니다
#define LSID_AUTO005801							0x00001712		// 잘못된 보상 타입 입니다
#define LSID_AUTO005802							0x00001713		// 보상 받는 기간이 아닙니다
#define LSID_AUTO005803							0x00001714		// 보상 받을 수 있는 조건이 안됩니다
#define LSID_AUTO005804							0x00001715		// 이미 받은 보상입니다
#define LSID_AUTO005805							0x00001716		// 길드원이 아니므로 보상 받을 수 없습니다
#define LSID_AUTO005806							0x00001717		// 보상 받을 수 있는 유저 랭킹이 아닙니다
#define LSID_AUTO005807							0x00001718		// 보상 받을 수 있는 길드 랭킹이 아닙니다
#define LSID_AUTO005808							0x00001719		// 보상 받을 수 있는 종족 랭킹이 아닙니다
#define LSID_AUTO005809							0x0000171A		// 보상 테이블 오류 입니다
#define LSID_AUTO005810							0x0000171B		// 보상 오류 입니다
#define LSID_AUTO005811							0x0000171C		// 시즌 State 오류 입니다
#define LSID_AUTO005812							0x0000171D		// 시즌 정산중, 잠시후 이용하세요
#define LSID_AUTO005813							0x0000171E		// 서버 내부 페이지 오류
#define LSID_AUTO005814							0x0000171F		// 마지막 페이지 입니다. 
#define LSID_AUTO005815							0x00001720		// 최근 해당캐릭에 죽어서 기여도를 잃지 않습니다
#define LSID_AUTO005816							0x00001721		// 최근 해당캐릭을 죽여서 기여도를 얻지 못합니다
#define LSID_AUTO005817							0x00001722		// 기여도를 획득할 수 없는 지역입니다
#define LSID_AUTO005818							0x00001723		// 기여도를 획득할 수 없는 조건입니다 (2차전직이상 40Lv 이상)
#define LSID_AUTO005819							0x00001724		// 포인트를 획득할 수 없는 조건입니다 (2차전직이상 40Lv 이상)
#define LSID_AUTO005820							0x00001725		// 당신은 해당 등급에 소속되지 않았습니다
#define LSID_AUTO005821							0x00001726		// gr
#define LSID_AUTO005822							0x00001727		// gr
#define LSID_AUTO005823							0x00001728		// 당신은 전체 종족 %d위에 속하는 실력자 입니다
#define LSID_AUTO005824							0x00001729		// 당신은 전체 종족 %d
#define LSID_AUTO005825							0x0000172A		// 당신은 전체 종족
#define LSID_AUTO005826							0x0000172B		// 길드 기여도 <font color=#FFBD1F>%d점</font>은 순위에 포함 되지 않습니다
#define LSID_AUTO005827							0x0000172C		// 길드 기여도 <font color=#FFBD1F>%d점</font>
#define LSID_AUTO005828							0x0000172D		// 길드 기여도
#define LSID_AUTO005829							0x0000172E		// 개인 기여도 %d점 이하는 순위에 포함 되지 않습니다
#define LSID_AUTO005830							0x0000172F		// 개인 기여도 %d점
#define LSID_AUTO005831							0x00001730		// 개인 기여도
#define LSID_AUTO005832							0x00001731		// 당신의 길드는 전체 종족 <font color=#FFBD1F>%d위</font> 길드 입니다
#define LSID_AUTO005833							0x00001732		// 당신의 길드는 전체 종족 <font color=#FFBD1F>%d%%</font>에 속하는 길드 입니다
#define LSID_AUTO005834							0x00001733		// 전체 %d위
#define LSID_AUTO005835							0x00001734		// 누적 기여도:
#define LSID_AUTO005836							0x00001735		// 임시포인트: %s
#define LSID_AUTO005837							0x00001736		// 확정포인트: %s
#define LSID_AUTO005838							0x00001737		// 이전 시즌
#define LSID_AUTO005839							0x00001738		// 종족 등급
#define LSID_AUTO005840							0x00001739		// 잠시후 던젼 게이트가 종료됩니다.
#define LSID_AUTO005841							0x0000173A		// 던젼 게이트를 나가시겠습니까?
#define LSID_AUTO005842							0x0000173B		// 효과 딜레이
#define LSID_AUTO005843							0x0000173C		// 부 공격력
#define LSID_AUTO005844							0x0000173D		// %s 님이 HP %d 을 회복 해주었습니다. (%s)
#define LSID_AUTO005845							0x0000173E		// 언어 설정
#define LSID_AUTO005846							0x0000173F		// 언어 설정
#define LSID_AUTO005847							0x00001740		// 한국어
#define LSID_AUTO005848							0x00001741		// Portugues do Brasil
#define LSID_AUTO005849							0x00001742		// ??中文 (Simplified Chinese)
#define LSID_AUTO005850							0x00001743		// English (Europe)
#define LSID_AUTO005851							0x00001744		// English (Indonesia)
#define LSID_AUTO005852							0x00001745		// 日本語
#define LSID_AUTO005853							0x00001746		// English (Philippines)
#define LSID_AUTO005854							0x00001747		// Россия
#define LSID_AUTO005855							0x00001748		// 繁體中文 (Traditional Chinese)
#define LSID_AUTO005856							0x00001749		// English (North America)
#define LSID_AUTO005857							0x0000174A		// ???????
#define LSID_AUTO005858							0x0000174B		// 변경 할 언어를 선택해주세요.
#define LSID_AUTO005859							0x0000174C		// 확인
#define LSID_AUTO005860							0x0000174D		// 언어 설정이 변경되었습니다. 재접속 시 변경된 언어 설정이 적용됩니다.
#define LSID_AUTO005861							0x0000174E		// 현재의 언어 설정과 같습니다. 언어 설정이 유지됩니다.
#define LSID_AUTO005862							0x0000174F		// %d-%d%s 전용 기능입니다.
#define LSID_AUTO005863							0x00001750		// %s 등급 이상 전용 기능입니다.
#define LSID_AUTO005864							0x00001751		// %s 전용 기능입니다.
#define LSID_AUTO005865							0x00001752		// %d-%d%s, %s 등급 이상 전용 기능입니다.
#define LSID_AUTO005866							0x00001753		// %d-%d%s, %s 등급 이상, %s 전용 기능입니다.
#define LSID_AUTO005867							0x00001754		// 프리미엄 이용자
#define LSID_AUTO005868							0x00001755		// 싱글즈
#define LSID_AUTO005869							0x00001756		// 더블즈
#define LSID_AUTO005870							0x00001757		// 마이너
#define LSID_AUTO005871							0x00001758		// 메이저
#define LSID_AUTO005872							0x00001759		// 카터스
#define LSID_AUTO005873							0x0000175A		// 로얄
#define LSID_AUTO005874							0x0000175B		// 싱크
#define LSID_AUTO005875							0x0000175C		// 맥시머스
#define LSID_AUTO005876							0x0000175D		// 1결
#define LSID_AUTO005877							0x0000175E		// 2결
#define LSID_AUTO005878							0x0000175F		// 3결
#define LSID_AUTO005879							0x00001760		// 4결
#define LSID_AUTO005880							0x00001761		// 5결
#define LSID_AUTO005881							0x00001762		// 6결
#define LSID_AUTO005882							0x00001763		// 7결
#define LSID_AUTO005883							0x00001764		// 8결
#define LSID_AUTO005884							0x00001765		// 하스타티
#define LSID_AUTO005885							0x00001766		// 프린서프
#define LSID_AUTO005886							0x00001767		// 트리아리
#define LSID_AUTO005887							0x00001768		// 켄투리오
#define LSID_AUTO005888							0x00001769		// 마니펠
#define LSID_AUTO005889							0x0000176A		// 팰랭크스
#define LSID_AUTO005890							0x0000176B		// 코호르트
#define LSID_AUTO005891							0x0000176C		// 레젼
#define LSID_AUTO005892							0x0000176D		// 노비스
#define LSID_AUTO005893							0x0000176E		// 브론즈
#define LSID_AUTO005894							0x0000176F		// 실버
#define LSID_AUTO005895							0x00001770		// 골드
#define LSID_AUTO005896							0x00001771		// 플래티넘
#define LSID_AUTO005897							0x00001772		// 다이아
#define LSID_AUTO005898							0x00001773		// 마스터
#define LSID_AUTO005899							0x00001774		// 첼린지
#define LSID_AUTO005900							0x00001775		// 등급
#define LSID_AUTO005901							0x00001776		// 등급 이상
#define LSID_AUTO005902							0x00001777		// 등급 이상,
#define LSID_AUTO005903							0x00001778		// 이상
#define LSID_AUTO005904							0x00001779		// 이상,
#define LSID_AUTO005905							0x0000177A		// 전용 기능입니다.
#define LSID_AUTO005906							0x0000177B		// 레벨,
#define LSID_AUTO005907							0x0000177C		// ,
#define LSID_AUTO005908							0x0000177D		// 프리미엄 이용권을 사용시간이 만료되어 HQ로 이동되었습니다.
#define LSID_AUTO005909							0x0000177E		// 프리미엄 이용권을 사용시간이 만료되어 바인딩 위치가 HQ로 초기화되었습니다.
#define LSID_AUTO005910							0x0000177F		// 피소환자가 프리미엄 이용권을 소지하지 않아 소환할 수 없습니다.
#define LSID_AUTO005911							0x00001780		// 대상자가 프리미엄 채널에 있습니다. 프리미엄 이용권을 소지하지 않아 이동할 수 없습니다.
#define LSID_AUTO005912							0x00001781		// 1채널로 이동 [게이트1]
#define LSID_AUTO005913							0x00001782		// 1채널로 이동 [게이트1]
#define LSID_AUTO005914							0x00001783		// 1채널로 이동 [게이트1]
#define LSID_AUTO005915							0x00001784		// 1채널로 이동 [게이트2]
#define LSID_AUTO005916							0x00001785		// 2채널로 이동 [게이트1]
#define LSID_AUTO005917							0x00001786		// 2채널로 이동 [게이트1]
#define LSID_AUTO005918							0x00001787		// 2채널로 이동 [게이트1]
#define LSID_AUTO005919							0x00001788		// 2채널로 이동 [게이트2]
#define LSID_AUTO005920							0x00001789		// 3채널로 이동 [게이트1]
#define LSID_AUTO005921							0x0000178A		// 3채널로 이동 [게이트1]
#define LSID_AUTO005922							0x0000178B		// 3채널로 이동 [게이트1]
#define LSID_AUTO005923							0x0000178C		// 3채널로 이동 [게이트2]
#define LSID_AUTO005924							0x0000178D		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005925							0x0000178E		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005926							0x0000178F		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005927							0x00001790		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO005928							0x00001791		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005929							0x00001792		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005930							0x00001793		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005931							0x00001794		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO005932							0x00001795		// 1채널로 이동 [게이트1]
#define LSID_AUTO005933							0x00001796		// 1채널로 이동 [게이트1]
#define LSID_AUTO005934							0x00001797		// 1채널로 이동 [게이트1]
#define LSID_AUTO005935							0x00001798		// 1채널로 이동 [게이트2]
#define LSID_AUTO005936							0x00001799		// 2채널로 이동 [게이트1]
#define LSID_AUTO005937							0x0000179A		// 2채널로 이동 [게이트1]
#define LSID_AUTO005938							0x0000179B		// 2채널로 이동 [게이트1]
#define LSID_AUTO005939							0x0000179C		// 2채널로 이동 [게이트2]
#define LSID_AUTO005940							0x0000179D		// 3채널로 이동 [게이트1]
#define LSID_AUTO005941							0x0000179E		// 3채널로 이동 [게이트1]
#define LSID_AUTO005942							0x0000179F		// 3채널로 이동 [게이트1]
#define LSID_AUTO005943							0x000017A0		// 3채널로 이동 [게이트2]
#define LSID_AUTO005944							0x000017A1		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005945							0x000017A2		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005946							0x000017A3		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005947							0x000017A4		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO005948							0x000017A5		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005949							0x000017A6		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005950							0x000017A7		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005951							0x000017A8		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO005952							0x000017A9		// 1채널로 이동 [게이트1]
#define LSID_AUTO005953							0x000017AA		// 1채널로 이동 [게이트2]
#define LSID_AUTO005954							0x000017AB		// 1채널로 이동 [게이트3]
#define LSID_AUTO005955							0x000017AC		// 2채널로 이동 [게이트1]
#define LSID_AUTO005956							0x000017AD		// 2채널로 이동 [게이트2]
#define LSID_AUTO005957							0x000017AE		// 2채널로 이동 [게이트3]
#define LSID_AUTO005958							0x000017AF		// 3채널로 이동 [게이트1]
#define LSID_AUTO005959							0x000017B0		// 3채널로 이동 [게이트2]
#define LSID_AUTO005960							0x000017B1		// 3채널로 이동 [게이트3]
#define LSID_AUTO005961							0x000017B2		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005962							0x000017B3		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO005963							0x000017B4		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO005964							0x000017B5		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005965							0x000017B6		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO005966							0x000017B7		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO005967							0x000017B8		// 1채널로 이동 [게이트1]
#define LSID_AUTO005968							0x000017B9		// 1채널로 이동 [게이트2]
#define LSID_AUTO005969							0x000017BA		// 1채널로 이동 [게이트3]
#define LSID_AUTO005970							0x000017BB		// 2채널로 이동 [게이트1]
#define LSID_AUTO005971							0x000017BC		// 2채널로 이동 [게이트2]
#define LSID_AUTO005972							0x000017BD		// 2채널로 이동 [게이트3]
#define LSID_AUTO005973							0x000017BE		// 3채널로 이동 [게이트1]
#define LSID_AUTO005974							0x000017BF		// 3채널로 이동 [게이트2]
#define LSID_AUTO005975							0x000017C0		// 3채널로 이동 [게이트3]
#define LSID_AUTO005976							0x000017C1		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005977							0x000017C2		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO005978							0x000017C3		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO005979							0x000017C4		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005980							0x000017C5		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO005981							0x000017C6		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO005982							0x000017C7		// 1채널로 이동 [게이트1]
#define LSID_AUTO005983							0x000017C8		// 1채널로 이동 [게이트2]
#define LSID_AUTO005984							0x000017C9		// 1채널로 이동 [게이트3]
#define LSID_AUTO005985							0x000017CA		// 1채널로 이동 [게이트4]
#define LSID_AUTO005986							0x000017CB		// 2채널로 이동 [게이트1]
#define LSID_AUTO005987							0x000017CC		// 2채널로 이동 [게이트2]
#define LSID_AUTO005988							0x000017CD		// 2채널로 이동 [게이트3]
#define LSID_AUTO005989							0x000017CE		// 2채널로 이동 [게이트4]
#define LSID_AUTO005990							0x000017CF		// 3채널로 이동 [게이트1]
#define LSID_AUTO005991							0x000017D0		// 3채널로 이동 [게이트2]
#define LSID_AUTO005992							0x000017D1		// 3채널로 이동 [게이트3]
#define LSID_AUTO005993							0x000017D2		// 3채널로 이동 [게이트4]
#define LSID_AUTO005994							0x000017D3		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO005995							0x000017D4		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO005996							0x000017D5		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO005997							0x000017D6		// 프리미엄 1채널로 이동 [게이트4]
#define LSID_AUTO005998							0x000017D7		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO005999							0x000017D8		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006000							0x000017D9		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006001							0x000017DA		// 프리미엄 2채널로 이동 [게이트4]
#define LSID_AUTO006002							0x000017DB		// 1채널로 이동 [게이트1]
#define LSID_AUTO006003							0x000017DC		// 1채널로 이동 [게이트2]
#define LSID_AUTO006004							0x000017DD		// 1채널로 이동 [게이트3]
#define LSID_AUTO006005							0x000017DE		// 2채널로 이동 [게이트1]
#define LSID_AUTO006006							0x000017DF		// 2채널로 이동 [게이트2]
#define LSID_AUTO006007							0x000017E0		// 2채널로 이동 [게이트3]
#define LSID_AUTO006008							0x000017E1		// 3채널로 이동 [게이트1]
#define LSID_AUTO006009							0x000017E2		// 3채널로 이동 [게이트2]
#define LSID_AUTO006010							0x000017E3		// 3채널로 이동 [게이트3]
#define LSID_AUTO006011							0x000017E4		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006012							0x000017E5		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006013							0x000017E6		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006014							0x000017E7		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006015							0x000017E8		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006016							0x000017E9		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006017							0x000017EA		// 1채널로 이동 [게이트1]
#define LSID_AUTO006018							0x000017EB		// 1채널로 이동 [게이트2]
#define LSID_AUTO006019							0x000017EC		// 1채널로 이동 [게이트3]
#define LSID_AUTO006020							0x000017ED		// 2채널로 이동 [게이트1]
#define LSID_AUTO006021							0x000017EE		// 2채널로 이동 [게이트2]
#define LSID_AUTO006022							0x000017EF		// 2채널로 이동 [게이트3]
#define LSID_AUTO006023							0x000017F0		// 3채널로 이동 [게이트1]
#define LSID_AUTO006024							0x000017F1		// 3채널로 이동 [게이트2]
#define LSID_AUTO006025							0x000017F2		// 3채널로 이동 [게이트3]
#define LSID_AUTO006026							0x000017F3		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006027							0x000017F4		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006028							0x000017F5		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006029							0x000017F6		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006030							0x000017F7		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006031							0x000017F8		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006032							0x000017F9		// 1채널로 이동 [게이트1]
#define LSID_AUTO006033							0x000017FA		// 1채널로 이동 [게이트2]
#define LSID_AUTO006034							0x000017FB		// 1채널로 이동 [게이트3]
#define LSID_AUTO006035							0x000017FC		// 2채널로 이동 [게이트1]
#define LSID_AUTO006036							0x000017FD		// 2채널로 이동 [게이트2]
#define LSID_AUTO006037							0x000017FE		// 2채널로 이동 [게이트3]
#define LSID_AUTO006038							0x000017FF		// 3채널로 이동 [게이트1]
#define LSID_AUTO006039							0x00001800		// 3채널로 이동 [게이트2]
#define LSID_AUTO006040							0x00001801		// 3채널로 이동 [게이트3]
#define LSID_AUTO006041							0x00001802		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006042							0x00001803		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006043							0x00001804		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006044							0x00001805		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006045							0x00001806		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006046							0x00001807		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006047							0x00001808		// 1채널로 이동 [게이트1]
#define LSID_AUTO006048							0x00001809		// 1채널로 이동 [게이트2]
#define LSID_AUTO006049							0x0000180A		// 1채널로 이동 [게이트3]
#define LSID_AUTO006050							0x0000180B		// 1채널로 이동 [게이트4]
#define LSID_AUTO006051							0x0000180C		// 1채널로 이동 [게이트5]
#define LSID_AUTO006052							0x0000180D		// 2채널로 이동 [게이트1]
#define LSID_AUTO006053							0x0000180E		// 2채널로 이동 [게이트2]
#define LSID_AUTO006054							0x0000180F		// 2채널로 이동 [게이트3]
#define LSID_AUTO006055							0x00001810		// 2채널로 이동 [게이트4]
#define LSID_AUTO006056							0x00001811		// 2채널로 이동 [게이트5]
#define LSID_AUTO006057							0x00001812		// 3채널로 이동 [게이트1]
#define LSID_AUTO006058							0x00001813		// 3채널로 이동 [게이트2]
#define LSID_AUTO006059							0x00001814		// 3채널로 이동 [게이트3]
#define LSID_AUTO006060							0x00001815		// 3채널로 이동 [게이트4]
#define LSID_AUTO006061							0x00001816		// 3채널로 이동 [게이트5]
#define LSID_AUTO006062							0x00001817		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006063							0x00001818		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006064							0x00001819		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006065							0x0000181A		// 프리미엄 1채널로 이동 [게이트4]
#define LSID_AUTO006066							0x0000181B		// 프리미엄 1채널로 이동 [게이트5]
#define LSID_AUTO006067							0x0000181C		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006068							0x0000181D		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006069							0x0000181E		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006070							0x0000181F		// 프리미엄 2채널로 이동 [게이트4]
#define LSID_AUTO006071							0x00001820		// 프리미엄 2채널로 이동 [게이트5]
#define LSID_AUTO006072							0x00001821		// 1채널로 이동 [게이트1]
#define LSID_AUTO006073							0x00001822		// 1채널로 이동 [게이트2]
#define LSID_AUTO006074							0x00001823		// 2채널로 이동 [게이트1]
#define LSID_AUTO006075							0x00001824		// 2채널로 이동 [게이트2]
#define LSID_AUTO006076							0x00001825		// 3채널로 이동 [게이트1]
#define LSID_AUTO006077							0x00001826		// 3채널로 이동 [게이트2]
#define LSID_AUTO006078							0x00001827		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006079							0x00001828		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006080							0x00001829		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006081							0x0000182A		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006082							0x0000182B		// 1채널로 이동 [게이트1]
#define LSID_AUTO006083							0x0000182C		// 1채널로 이동 [게이트2]
#define LSID_AUTO006084							0x0000182D		// 2채널로 이동 [게이트1]
#define LSID_AUTO006085							0x0000182E		// 2채널로 이동 [게이트2]
#define LSID_AUTO006086							0x0000182F		// 3채널로 이동 [게이트1]
#define LSID_AUTO006087							0x00001830		// 3채널로 이동 [게이트2]
#define LSID_AUTO006088							0x00001831		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006089							0x00001832		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006090							0x00001833		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006091							0x00001834		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006092							0x00001835		// 1채널로 이동 [게이트1]
#define LSID_AUTO006093							0x00001836		// 1채널로 이동 [게이트2]
#define LSID_AUTO006094							0x00001837		// 2채널로 이동 [게이트1]
#define LSID_AUTO006095							0x00001838		// 2채널로 이동 [게이트2]
#define LSID_AUTO006096							0x00001839		// 3채널로 이동 [게이트1]
#define LSID_AUTO006097							0x0000183A		// 3채널로 이동 [게이트2]
#define LSID_AUTO006098							0x0000183B		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006099							0x0000183C		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006100							0x0000183D		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006101							0x0000183E		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006102							0x0000183F		// 1채널로 이동 [게이트1]
#define LSID_AUTO006103							0x00001840		// 1채널로 이동 [게이트2]
#define LSID_AUTO006104							0x00001841		// 1채널로 이동 [게이트3]
#define LSID_AUTO006105							0x00001842		// 1채널로 이동 [게이트4]
#define LSID_AUTO006106							0x00001843		// 1채널로 이동 [게이트5]
#define LSID_AUTO006107							0x00001844		// 2채널로 이동 [게이트1]
#define LSID_AUTO006108							0x00001845		// 2채널로 이동 [게이트2]
#define LSID_AUTO006109							0x00001846		// 2채널로 이동 [게이트3]
#define LSID_AUTO006110							0x00001847		// 2채널로 이동 [게이트4]
#define LSID_AUTO006111							0x00001848		// 2채널로 이동 [게이트5]
#define LSID_AUTO006112							0x00001849		// 3채널로 이동 [게이트1]
#define LSID_AUTO006113							0x0000184A		// 3채널로 이동 [게이트2]
#define LSID_AUTO006114							0x0000184B		// 3채널로 이동 [게이트3]
#define LSID_AUTO006115							0x0000184C		// 3채널로 이동 [게이트4]
#define LSID_AUTO006116							0x0000184D		// 3채널로 이동 [게이트5]
#define LSID_AUTO006117							0x0000184E		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006118							0x0000184F		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006119							0x00001850		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006120							0x00001851		// 프리미엄 1채널로 이동 [게이트4]
#define LSID_AUTO006121							0x00001852		// 프리미엄 1채널로 이동 [게이트5]
#define LSID_AUTO006122							0x00001853		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006123							0x00001854		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006124							0x00001855		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006125							0x00001856		// 프리미엄 2채널로 이동 [게이트4]
#define LSID_AUTO006126							0x00001857		// 프리미엄 2채널로 이동 [게이트5]
#define LSID_AUTO006127							0x00001858		// 1채널로 이동 [게이트1]
#define LSID_AUTO006128							0x00001859		// 1채널로 이동 [게이트1]
#define LSID_AUTO006129							0x0000185A		// 1채널로 이동 [게이트1]
#define LSID_AUTO006130							0x0000185B		// 1채널로 이동 [게이트2]
#define LSID_AUTO006131							0x0000185C		// 1채널로 이동 [게이트1]
#define LSID_AUTO006132							0x0000185D		// 1채널로 이동 [게이트1]
#define LSID_AUTO006133							0x0000185E		// 1채널로 이동 [게이트1]
#define LSID_AUTO006134							0x0000185F		// 1채널로 이동 [게이트2]
#define LSID_AUTO006135							0x00001860		// 1채널로 이동 [게이트1]
#define LSID_AUTO006136							0x00001861		// 1채널로 이동 [게이트1]
#define LSID_AUTO006137							0x00001862		// 1채널로 이동 [게이트1]
#define LSID_AUTO006138							0x00001863		// 1채널로 이동 [게이트2]
#define LSID_AUTO006139							0x00001864		// 2채널로 이동 [게이트1]
#define LSID_AUTO006140							0x00001865		// 2채널로 이동 [게이트1]
#define LSID_AUTO006141							0x00001866		// 2채널로 이동 [게이트1]
#define LSID_AUTO006142							0x00001867		// 2채널로 이동 [게이트2]
#define LSID_AUTO006143							0x00001868		// 2채널로 이동 [게이트1]
#define LSID_AUTO006144							0x00001869		// 2채널로 이동 [게이트1]
#define LSID_AUTO006145							0x0000186A		// 2채널로 이동 [게이트1]
#define LSID_AUTO006146							0x0000186B		// 2채널로 이동 [게이트2]
#define LSID_AUTO006147							0x0000186C		// 2채널로 이동 [게이트1]
#define LSID_AUTO006148							0x0000186D		// 2채널로 이동 [게이트1]
#define LSID_AUTO006149							0x0000186E		// 2채널로 이동 [게이트1]
#define LSID_AUTO006150							0x0000186F		// 2채널로 이동 [게이트2]
#define LSID_AUTO006151							0x00001870		// 3채널로 이동 [게이트1]
#define LSID_AUTO006152							0x00001871		// 3채널로 이동 [게이트1]
#define LSID_AUTO006153							0x00001872		// 3채널로 이동 [게이트1]
#define LSID_AUTO006154							0x00001873		// 3채널로 이동 [게이트2]
#define LSID_AUTO006155							0x00001874		// 3채널로 이동 [게이트1]
#define LSID_AUTO006156							0x00001875		// 3채널로 이동 [게이트1]
#define LSID_AUTO006157							0x00001876		// 3채널로 이동 [게이트1]
#define LSID_AUTO006158							0x00001877		// 3채널로 이동 [게이트2]
#define LSID_AUTO006159							0x00001878		// 3채널로 이동 [게이트1]
#define LSID_AUTO006160							0x00001879		// 3채널로 이동 [게이트1]
#define LSID_AUTO006161							0x0000187A		// 3채널로 이동 [게이트1]
#define LSID_AUTO006162							0x0000187B		// 3채널로 이동 [게이트2]
#define LSID_AUTO006163							0x0000187C		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006164							0x0000187D		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006165							0x0000187E		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006166							0x0000187F		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006167							0x00001880		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006168							0x00001881		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006169							0x00001882		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006170							0x00001883		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006171							0x00001884		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006172							0x00001885		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006173							0x00001886		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006174							0x00001887		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006175							0x00001888		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006176							0x00001889		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006177							0x0000188A		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006178							0x0000188B		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006179							0x0000188C		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006180							0x0000188D		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006181							0x0000188E		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006182							0x0000188F		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006183							0x00001890		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006184							0x00001891		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006185							0x00001892		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006186							0x00001893		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006187							0x00001894		// 1채널로 이동 [게이트1]
#define LSID_AUTO006188							0x00001895		// 1채널로 이동 [게이트2]
#define LSID_AUTO006189							0x00001896		// 1채널로 이동 [게이트3]
#define LSID_AUTO006190							0x00001897		// 1채널로 이동 [게이트4]
#define LSID_AUTO006191							0x00001898		// 2채널로 이동 [게이트1]
#define LSID_AUTO006192							0x00001899		// 2채널로 이동 [게이트2]
#define LSID_AUTO006193							0x0000189A		// 2채널로 이동 [게이트3]
#define LSID_AUTO006194							0x0000189B		// 2채널로 이동 [게이트4]
#define LSID_AUTO006195							0x0000189C		// 3채널로 이동 [게이트1]
#define LSID_AUTO006196							0x0000189D		// 3채널로 이동 [게이트2]
#define LSID_AUTO006197							0x0000189E		// 3채널로 이동 [게이트3]
#define LSID_AUTO006198							0x0000189F		// 3채널로 이동 [게이트4]
#define LSID_AUTO006199							0x000018A0		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006200							0x000018A1		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006201							0x000018A2		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006202							0x000018A3		// 프리미엄 1채널로 이동 [게이트4]
#define LSID_AUTO006203							0x000018A4		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006204							0x000018A5		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006205							0x000018A6		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006206							0x000018A7		// 프리미엄 2채널로 이동 [게이트4]
#define LSID_AUTO006207							0x000018A8		// 무력화 키퍼
#define LSID_AUTO006208							0x000018A9		// 우호적 키퍼
#define LSID_AUTO006209							0x000018AA		// 적대적 키퍼
#define LSID_AUTO006210							0x000018AB		// 채굴 시간
#define LSID_AUTO006211							0x000018AC		// 준비시간
#define LSID_AUTO006212							0x000018AD		// 이벤트 타이머 On / Off
#define LSID_AUTO006213							0x000018AE		// 현재 타이머 기능을 사용하는 이벤트가 없습니다.
#define LSID_AUTO006214							0x000018AF		// 프리미엄 채널은 프리미엄 이용권을 소지해야만 입장할 수 있습니다.
#define LSID_AUTO006215							0x000018B0		// 총 데미지
#define LSID_AUTO006216							0x000018B1		// 일반 공격
#define LSID_AUTO006217							0x000018B2		// 전투 시간
#define LSID_AUTO006218							0x000018B3		// 데미지 미터기를 실행할 수 없는 상태입니다.
#define LSID_AUTO006219							0x000018B4		// 파티 가입 시 데미지 미터기 기록 정보가 소멸됩니다.
#define LSID_AUTO006220							0x000018B5		// 탈것은 평화 상태에서만 탑승할 수 있습니다.
#define LSID_AUTO006221							0x000018B6		// 탈것 탑승 상태에선 공격, 스킬/포스 사용, 아이템 사용을 할 수 없습니다.
#define LSID_AUTO006222							0x000018B7		// 탈것 속도
#define LSID_AUTO006223							0x000018B8		// 탑승자의 방어력의 일정량을 기갑장비의 공격력에 반영한다.
#define LSID_AUTO006224							0x000018B9		// 숙련도 획득량이 증가한다.
#define LSID_AUTO006225							0x000018BA		// 아이템 드랍률이 증가한다.
#define LSID_AUTO006226							0x000018BB		// 경험치, 숙련도, 채굴량이 증가한다.
#define LSID_AUTO006227							0x000018BC		// 경험치, 숙련도 획득, 공격력, 방어력이 증가한다.
#define LSID_AUTO006228							0x000018BD		// 경험치, 숙련도 획득량이 증가한다.
#define LSID_AUTO006229							0x000018BE		// 경험치, 숙련도 획득, 아이템 드랍, 채굴량, 공격력, 방어력이 증가한다.
#define LSID_AUTO006230							0x000018BF		// 드랍된 아이템 중 루팅권한을 가진 아이템을 자동으로 획득한다.
#define LSID_AUTO006231							0x000018C0		// 해당 직업 %d차 전직 시 해금
#define LSID_AUTO006232							0x000018C1		// %d분 후 잠금 해제 가능합니다.
#define LSID_AUTO006233							0x000018C2		// %d초 후 잠금 해제 가능합니다.
#define LSID_AUTO006234							0x000018C3		// 이속, 회피, 블럭, 기본 HP, 기본 공격력이 감소합니다.
#define LSID_AUTO006235							0x000018C4		// 잠금 해제 후 재시도 바랍니다.
#define LSID_AUTO006236							0x000018C5		// 공격력, 방어력, HP 회복, 이속이 증가하고, 디버프 시간이 감소합니다.
#define LSID_AUTO006237							0x000018C6		// HP, FP, SP, 공격력, 방어력이 감소합니다.
#define LSID_AUTO006238							0x000018C7		// 공격력과 방어력이 증가한다.
#define LSID_AUTO006239							0x000018C8		// 아이템을 잠금 해제 하시겠습니까?<br>잠금 해제 시간 : %2d:%2d:%2d
#define LSID_AUTO006240							0x000018C9		// 아이템을 잠금 처리 하시겠습니까?<br>잠금 해제 시간 : %2d:%2d:%2d
#define LSID_AUTO006241							0x000018CA		// 잠금
#define LSID_AUTO006242							0x000018CB		// 해제
#define LSID_AUTO006243							0x000018CC		// 아이템 잠금을 하시겠습니까?<br><br>아이템 잠금 시 거래, 강화 , 소모 , 드랍등<br>아이템 상태에 영향을 주는 모든 행위가 제한됩니다.<br><br>잠금 해제는 1시간 뒤에 가능합니다.
#define LSID_AUTO006244							0x000018CD		// 잠금 해제 하시겠습니까?
#define LSID_AUTO006245							0x000018CE		// 잠금을 해제할 수 없습니다.<br><br>[잠금 해제 가능 시간]<br>%s
#define LSID_AUTO006246							0x000018CF		// 중지
#define LSID_AUTO006247							0x000018D0		// 3분 타이머
#define LSID_AUTO006248							0x000018D1		// 이전 크기로 복원
#define LSID_AUTO006249							0x000018D2		// 미사용
#define LSID_AUTO006250							0x000018D3		// 경험치 획득률 : %d%%
#define LSID_AUTO006251							0x000018D4		// 그래비티 스톤을 소지한 상태에서는 탈것을 사용하실 수 없습니다.
#define LSID_AUTO006252							0x000018D5		// 탈것류
#define LSID_AUTO006253							0x000018D6		// 탈것
#define LSID_AUTO006254							0x000018D7		// 데미지 미터기
#define LSID_AUTO006255							0x000018D8		// 일반 공격 명중 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006256							0x000018D9		// 일반 공격 회피 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006257							0x000018DA		// HP/FP 최대량 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006258							0x000018DB		// 모든 공격력 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006259							0x000018DC		// 방어력 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006260							0x000018DD		// 스킬 레벨 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006261							0x000018DE		// 스텔스
#define LSID_AUTO006262							0x000018DF		// 디텍트
#define LSID_AUTO006263							0x000018E0		// 지속피해 보조기술 해제
#define LSID_AUTO006264							0x000018E1		// 이동속도 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006265							0x000018E2		// PC나 NPC의 약한 부위를 가르쳐줌
#define LSID_AUTO006266							0x000018E3		// FP 회복량 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006267							0x000018E4		// 포스 공격력 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006268							0x000018E5		// FP 최대량 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006269							0x000018E6		// 공격 데미지 <font color='#4ae8ff'>%s%%</font>를 HP로 전환
#define LSID_AUTO006270							0x000018E7		// 공격 데미지 <font color='#4ae8ff'>%s%%</font>를 FP로 전환
#define LSID_AUTO006271							0x000018E8		// 크리티컬 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006272							0x000018E9		// 일반 사정거리 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006273							0x000018EA		// 방어력 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006274							0x000018EB		// 디버프 시간 <font color='#4ae8ff'>%s%%</font> 단축
#define LSID_AUTO006275							0x000018EC		// HP 회복량 <font color='#4ae8ff'>%s%%</font> 증가
#define LSID_AUTO006276							0x000018ED		// 회피 <font color='#4ae8ff'>%s</font> 증가
#define LSID_AUTO006277							0x000018EE		// 키 입력 설정
#define LSID_AUTO006278							0x000018EF		// NONE
#define LSID_AUTO006279							0x000018F0		// 현재 변경 된 키 입력이 존재 합니다. <br> 창을 닫으시겠습니까?
#define LSID_AUTO006280							0x000018F1		// 어빌리티를 재설정 합니다.
#define LSID_AUTO006281							0x000018F2		// 남은 개수 : %d개
#define LSID_AUTO006282							0x000018F3		// 선택
#define LSID_AUTO006283							0x000018F4		// BEFORE
#define LSID_AUTO006284							0x000018F5		// AFTER
#define LSID_AUTO006285							0x000018F6		// RESULT
#define LSID_AUTO006286							0x000018F7		// 어빌리티%d
#define LSID_AUTO006287							0x000018F8		// 어빌리티 강화 가능
#define LSID_AUTO006288							0x000018F9		// 슬롯 해금 가능?
#define LSID_AUTO006289							0x000018FA		// 해당 장비 어빌리티 등급에 사용 할 수 없는 부재료 입니다.
#define LSID_AUTO006290							0x000018FB		// 해당 장비에 소켓 확장을 사용 할 수 없는 부재료 입니다.
#define LSID_AUTO006291							0x000018FC		// 해당 장비의 마법 부여 개수가 최대에 도달하였습니다.
#define LSID_AUTO006292							0x000018FD		// 소켓 확장 실패 하였습니다.
#define LSID_AUTO006293							0x000018FE		// 게임 내 언어를 변경 하시겠습니까?
#define LSID_AUTO006294							0x000018FF		// 해당 탈릭은 교환이 불가능합니다.
#define LSID_AUTO006295							0x00001900		// 속성 탈릭의 교환이 완료되었습니다.
#define LSID_AUTO006296							0x00001901		// 안전구역에서 사용이 제한된 스킬입니다.
#define LSID_AUTO006297							0x00001902		// 안전구역에서 사용이 제한된 아이템입니다.
#define LSID_AUTO006298							0x00001903		// 보유한 탈릭이 부족합니다.
#define LSID_AUTO006299							0x00001904		// 공격력 증가
#define LSID_AUTO006300							0x00001905		// 공격 데미지를 HP로 흡수
#define LSID_AUTO006301							0x00001906		// 상대 방패 블록확률 감소
#define LSID_AUTO006302							0x00001907		// 스턴 확률 증가
#define LSID_AUTO006303							0x00001908		// 사정거리 증가
#define LSID_AUTO006304							0x00001909		// 방어력 증가
#define LSID_AUTO006305							0x0000190A		// 버프 캔슬확률 감소
#define LSID_AUTO006306							0x0000190B		// 명중률 증가
#define LSID_AUTO006307							0x0000190C		// 회피율 증가
#define LSID_AUTO006308							0x0000190D		// 업그레이드 된 탈릭 제거
#define LSID_AUTO006309							0x0000190E		// 해당 보호석을 사용할 수 없습니다.
#define LSID_AUTO006310							0x0000190F		// 보호석을 사용할 수 있습니다.
#define LSID_AUTO006311							0x00001910		// 보호석을 사용할 수 없습니다.
#define LSID_AUTO006312							0x00001911		// 탈릭 업그레이드
#define LSID_AUTO006313							0x00001912		// [업그레이드 정보]
#define LSID_AUTO006314							0x00001913		// [%s] +%d
#define LSID_AUTO006315							0x00001914		// [현재 +%d]
#define LSID_AUTO006316							0x00001915		// [성공시 +%d]
#define LSID_AUTO006317							0x00001916		// [탈릭 선택]
#define LSID_AUTO006318							0x00001917		// [%s]
#define LSID_AUTO006319							0x00001918		// [강화보석]
#define LSID_AUTO006320							0x00001919		// %d/%d
#define LSID_AUTO006321							0x0000191A		// [업그레이드 확률]
#define LSID_AUTO006322							0x0000191B		// 성공:
#define LSID_AUTO006323							0x0000191C		// 파괴:
#define LSID_AUTO006324							0x0000191D		// 초기화:
#define LSID_AUTO006325							0x0000191E		// 무변화:
#define LSID_AUTO006326							0x0000191F		// %.1f%
#define LSID_AUTO006327							0x00001920		// [MAX %.1f%%]
#define LSID_AUTO006328							0x00001921		// [업그레이드 보호석]
#define LSID_AUTO006329							0x00001922		// [업그레이드]
#define LSID_AUTO006330							0x00001923		// %d / %d 슬롯
#define LSID_AUTO006331							0x00001924		// [%s] X%d개
#define LSID_AUTO006332							0x00001925		// 탈릭 업그레이드를 할 수 없습니다.
#define LSID_AUTO006333							0x00001926		// 업그레이드 결과
#define LSID_AUTO006334							0x00001927		// 탈릭 교환
#define LSID_AUTO006335							0x00001928		// [교환 수량]
#define LSID_AUTO006336							0x00001929		// 탈릭 교환 결과
#define LSID_AUTO006337							0x0000192A		// [교환전 탈릭]
#define LSID_AUTO006338							0x0000192B		// [교환후 탈릭]
#define LSID_AUTO006339							0x0000192C		// 분해 / 합성할 탈릭을 선택해주세요.
#define LSID_AUTO006340							0x0000192D		// 탈릭 분해 및 합성
#define LSID_AUTO006341							0x0000192E		// [대상 탈릭]
#define LSID_AUTO006342							0x0000192F		// [남은 수량]
#define LSID_AUTO006343							0x00001930		// %d ▶ %d
#define LSID_AUTO006344							0x00001931		// 탈릭 분해
#define LSID_AUTO006345							0x00001932		// [분해 비율] 1:2
#define LSID_AUTO006346							0x00001933		// [분해 비율] 1:4
#define LSID_AUTO006347							0x00001934		// [분해 비율] 1:8
#define LSID_AUTO006348							0x00001935		// [분해 비율] 1:16
#define LSID_AUTO006349							0x00001936		// [합성 비율] 2:1
#define LSID_AUTO006350							0x00001937		// [합성 비율] 4:1
#define LSID_AUTO006351							0x00001938		// [합성 비율] 8:1
#define LSID_AUTO006352							0x00001939		// [합성 비율] 16:1
#define LSID_AUTO006353							0x0000193A		// 탈릭 합성
#define LSID_AUTO006354							0x0000193B		// 탈릭 분해 결과
#define LSID_AUTO006355							0x0000193C		// 탈릭 합성 결과
#define LSID_AUTO006356							0x0000193D		// 분해전 탈릭
#define LSID_AUTO006357							0x0000193E		// 합성전 탈릭
#define LSID_AUTO006358							0x0000193F		// 분해후 탈릭
#define LSID_AUTO006359							0x00001940		// 합성후 탈릭
#define LSID_AUTO006360							0x00001941		// 인벤토리상 익스텐더 보유수량이 부족합니다.
#define LSID_AUTO006361							0x00001942		// 소켓 익스텐더 사용
#define LSID_AUTO006362							0x00001943		// [대상 아이템]
#define LSID_AUTO006363							0x00001944		// [현재 소켓 상태]
#define LSID_AUTO006364							0x00001945		// +%d/%d
#define LSID_AUTO006365							0x00001946		// [익스텐더 아이템]
#define LSID_AUTO006366							0x00001947		// [최대 소켓 확장]
#define LSID_AUTO006367							0x00001948		// +%d/%d -> +%d/%d
#define LSID_AUTO006368							0x00001949		// [익스텐더 사용]
#define LSID_AUTO006369							0x0000194A		// 소켓 익스텐더 결과
#define LSID_AUTO006370							0x0000194B		// %d개의 소켓이 부족하여 해당 소켓 익스텐더를 사용할 수 없습니다.
#define LSID_AUTO006371							0x0000194C		// 장비 아이템을 선택해주세요.
#define LSID_AUTO006372							0x0000194D		// 업그레이더
#define LSID_AUTO006373							0x0000194E		// [업그레이더 아이템]
#define LSID_AUTO006374							0x0000194F		// [최소 여유 소켓]
#define LSID_AUTO006375							0x00001950		// 여유 소켓 %d 이상 필요
#define LSID_AUTO006376							0x00001951		// [예상 업그레이더 효과]
#define LSID_AUTO006377							0x00001952		// %s %d~%d
#define LSID_AUTO006378							0x00001953		// [소켓 상태]
#define LSID_AUTO006379							0x00001954		// [업그레이드 효과]
#define LSID_AUTO006380							0x00001955		// [업그레이더 확률]
#define LSID_AUTO006381							0x00001956		// ▶%.2f%
#define LSID_AUTO006382							0x00001957		// [아이템 파괴]
#define LSID_AUTO006383							0x00001958		// [업그레이더 사용]
#define LSID_AUTO006384							0x00001959		// [%s +%d]
#define LSID_AUTO006385							0x0000195A		// 업그레이더 사용 결과
#define LSID_AUTO006386							0x0000195B		// [사용 전]
#define LSID_AUTO006387							0x0000195C		// [사용 후]
#define LSID_AUTO006388							0x0000195D		// 악세서리 아이템을 선택해주세요
#define LSID_AUTO006389							0x0000195E		// 악세서리 업그레이더
#define LSID_AUTO006390							0x0000195F		// [필요 아이템]
#define LSID_AUTO006391							0x00001960		// [내성]
#define LSID_AUTO006392							0x00001961		// [아이템 옵션]
#define LSID_AUTO006393							0x00001962		// %s %d
#define LSID_AUTO006394							0x00001963		// 소켓 확장
#define LSID_AUTO006395							0x00001964		// 업그레이더 사용
#define LSID_AUTO006396							0x00001965		// 성공 : <font color='46cf4d'>%.1f%%</font> [MAX %.1f]
#define LSID_AUTO006397							0x00001966		// 파괴 : <font color='46cf4d'>%.1f%%</font> [MAX %.1f]
#define LSID_AUTO006398							0x00001967		// 초기화 : <font color='46cf4d'>%.1f%%</font> [MAX %.1f]
#define LSID_AUTO006399							0x00001968		// 무변화 : <font color='46cf4d'>%.1f%%</font> [MAX %.1f]
#define LSID_AUTO006400							0x00001969		// [분해 비율] %d : %d
#define LSID_AUTO006401							0x0000196A		// 탈릭 아이템을 선택해주세요
#define LSID_AUTO006402							0x0000196B		// 탈릭 교환이 불가능한 아이템입니다.
#define LSID_AUTO006403							0x0000196C		// 미구현
#define LSID_AUTO006404							0x0000196D		// 1채널로 이동 [게이트1]
#define LSID_AUTO006405							0x0000196E		// 1채널로 이동 [게이트2]
#define LSID_AUTO006406							0x0000196F		// 1채널로 이동 [게이트3]
#define LSID_AUTO006407							0x00001970		// 1채널로 이동 [게이트4]
#define LSID_AUTO006408							0x00001971		// 2채널로 이동 [게이트1]
#define LSID_AUTO006409							0x00001972		// 2채널로 이동 [게이트2]
#define LSID_AUTO006410							0x00001973		// 2채널로 이동 [게이트3]
#define LSID_AUTO006411							0x00001974		// 2채널로 이동 [게이트4]
#define LSID_AUTO006412							0x00001975		// 3채널로 이동 [게이트1]
#define LSID_AUTO006413							0x00001976		// 3채널로 이동 [게이트2]
#define LSID_AUTO006414							0x00001977		// 3채널로 이동 [게이트3]
#define LSID_AUTO006415							0x00001978		// 3채널로 이동 [게이트4]
#define LSID_AUTO006416							0x00001979		// 프리미엄 1채널로 이동 [게이트1]
#define LSID_AUTO006417							0x0000197A		// 프리미엄 1채널로 이동 [게이트2]
#define LSID_AUTO006418							0x0000197B		// 프리미엄 1채널로 이동 [게이트3]
#define LSID_AUTO006419							0x0000197C		// 프리미엄 1채널로 이동 [게이트4]
#define LSID_AUTO006420							0x0000197D		// 프리미엄 2채널로 이동 [게이트1]
#define LSID_AUTO006421							0x0000197E		// 프리미엄 2채널로 이동 [게이트2]
#define LSID_AUTO006422							0x0000197F		// 프리미엄 2채널로 이동 [게이트3]
#define LSID_AUTO006423							0x00001980		// 프리미엄 2채널로 이동 [게이트4]
#define LSID_AUTO006424							0x00001981		// [레벨 보너스 효과]
#define LSID_AUTO006425							0x00001982		// [적용 중인 보너스 효과 - Lv.%d]
#define LSID_AUTO006426							0x00001983		// 일반 공격력 %d(%d) - %d(%d)
#define LSID_AUTO006427							0x00001984		// 포스 공격력 %d(%d) - %d(%d)
#define LSID_AUTO006428							0x00001985		// 방어력 %d(%d)
#define LSID_AUTO006429							0x00001986		// 상대방어력 %d
#define LSID_AUTO006430							0x00001987		// 방어디펜스 게이지 %d
#define LSID_AUTO006431							0x00001988		// 공격력 %d%%
#define LSID_AUTO006432							0x00001989		// 방어력 %d%%
#define LSID_AUTO006433							0x0000198A		// 최대 HP/FP량 %d%%
#define LSID_AUTO006434							0x0000198B		// 회피율 %d
#define LSID_AUTO006435							0x0000198C		// 지속 피해 보조 시간 감소 %d%%
#define LSID_AUTO006436							0x0000198D		// 크리티컬 확률 %d
#define LSID_AUTO006437							0x0000198E		// 이동속도 %.2f
#define LSID_AUTO006438							0x0000198F		// 크리티컬 공격 받을 확률 감소 %d%%
#define LSID_AUTO006439							0x00001990		// %d
#define LSID_AUTO006440							0x00001991		// 다음 레벨
#define LSID_AUTO006441							0x00001992		// 최대 레벨
#define LSID_AUTO006442							0x00001993		// 아이템 졸업
#define LSID_AUTO006443							0x00001994		// 졸업 결과
#define LSID_AUTO006444							0x00001995		// 졸업이 완료되었습니다.
#define LSID_AUTO006445							0x00001996		// 확인 버튼을 누르면 완료됩니다.
#define LSID_AUTO006446							0x00001997		// 졸업 조건 미 달성 상태 아이템입니다.
#define LSID_AUTO006447							0x00001998		// [성장형 아이템]
#define LSID_AUTO006448							0x00001999		// [결과 아이템]
#define LSID_AUTO006449							0x0000199A		// 선택된 탈릭이 없습니다.
#define LSID_AUTO006450							0x0000199B		// 교환할 갯수가 부족합니다.
#define LSID_AUTO006451							0x0000199C		// 분해,합성 모드 중 하나 선택 해주세요.
#define LSID_AUTO006452							0x0000199D		// 교환 실패
#define LSID_AUTO006453							0x0000199E		// 선택된 탈릭이 없습니다.
#define LSID_AUTO006454							0x0000199F		// [업그레이드 아이템]
#define LSID_AUTO006455							0x000019A0		// 인벤토리에 존재하지 않는 아이템입니다.
#define LSID_AUTO006456							0x000019A1		// 인벤토리의 보유 수량 보다 선택한 수량이 더 많습니다.
#define LSID_AUTO006457							0x000019A2		// [업그레이드 전]
#define LSID_AUTO006458							0x000019A3		// [업그레이드 후]
#define LSID_AUTO006459							0x000019A4		// 불 %d , 물 %d , 흙 %d , 바람 %d
#define LSID_AUTO006460							0x000019A5		// 불 %d<br>물 %d<br>흙 %d<br>바람 %d
#define LSID_AUTO006461							0x000019A6		// [합성 비율] %d:%d
#define LSID_AUTO006462							0x000019A7		// [합성]
#define LSID_AUTO006463							0x000019A8		// [분해]
#define LSID_AUTO006464							0x000019A9		// 업그레이드 메뉴
#define LSID_AUTO006465							0x000019AA		// 탈릭 교환 목록
#define LSID_AUTO006466							0x000019AB		// 현재 열려 있는 업그레이드 거래 관련 창을 닫으신 후에 다시 사용하시기 바랍니다.
#define LSID_AUTO006467							0x000019AC		// 크리티컬 공격 받을 확률 감소
#define LSID_AUTO006468							0x000019AD		// %d / %d 슬롯
#define LSID_AUTO006469							0x000019AE		// <font color='a0b4d5'>[분해 비율]</font> %d:%d
#define LSID_AUTO006470							0x000019AF		// <font color='a0b4d5'>[합성 비율]</font> %d:%d
#define LSID_AUTO006471							0x000019B0		// 공격력 %d%% 증가
#define LSID_AUTO006472							0x000019B1		// 공격 데미지 %.2f%%를 HP로 흡수
#define LSID_AUTO006473							0x000019B2		// 스턴 확률 %d%% 증가
#define LSID_AUTO006474							0x000019B3		// 성공 : %.1f%% [MAX %.1f]
#define LSID_AUTO006475							0x000019B4		// 파괴 : %.1f%% [MAX %.1f]
#define LSID_AUTO006476							0x000019B5		// 초기화 : %.1f%% [MAX %.1f]
#define LSID_AUTO006477							0x000019B6		// 무변화 : %.1f%% [MAX %.1f]
#define LSID_AUTO006478							0x000019B7		// %s %d 달성 패키지
#define LSID_AUTO006479							0x000019B8		// %s %d 달성 기념 한정 판매 패키지를 특별한 가격에 캐시샵에서 만나보세요!
#define LSID_AUTO006480							0x000019B9		// %s - %d원
#define LSID_AUTO006481							0x000019BA		// 특가 패키지 구성 안내
#define LSID_AUTO006482							0x000019BB		// 구매하기
#define LSID_AUTO006483							0x000019BC		// %d일 %d시간 %d분 후 판매 종료
#define LSID_AUTO006484							0x000019BD		// %d시간 %d분 후 판매 종료
#define LSID_AUTO006485							0x000019BE		// %d분 후 판매 종료
#define LSID_AUTO006486							0x000019BF		// 판매 종료 : %d년 %d월 %d시 %d분
#define LSID_AUTO006487							0x000019C0		// 구매 제한 횟수 : %d회
#define LSID_AUTO006488							0x000019C1		// 판매 유형 : 패키지 - %d단계
#define LSID_AUTO006489							0x000019C2		// %s X %d개
#define LSID_AUTO006490							0x000019C3		// 획득 확률 : %.3f%%
#define LSID_AUTO006491							0x000019C4		// 판매 종료 : %d.%d.%d
#define LSID_AUTO006492							0x000019C5		// %d%
#define LSID_AUTO006493							0x000019C6		// 퀘스트 지역으로 <font color='ffca82'>이동</font>하시겠습니까?
#define LSID_AUTO006494							0x000019C7		// 지불 금액 
#define LSID_AUTO006495							0x000019C8		// 순간 이동을 지원하지 않는 퀘스트입니다.
#define LSID_AUTO006496							0x000019C9		// 전투 상태에서는 이동할 수 없습니다.
#define LSID_AUTO006497							0x000019CA		// 퀘스트 데이터 에러
#define LSID_AUTO006498							0x000019CB		// 현재 퀘스트 이동 진행 중입니다.
#define LSID_AUTO006499							0x000019CC		// 기갑 탑승 중에는 이동할 수 없습니다.
#define LSID_AUTO006500							0x000019CD		// 플레이어가 앉은 상태에서는 이동할 수 없습니다.
#define LSID_AUTO006501							0x000019CE		// 거래 중에는 이동할 수 없습니다.
#define LSID_AUTO006502							0x000019CF		// 시즈 모드 상태에서는 이동할 수 없습니다.
#define LSID_AUTO006503							0x000019D0		// 플레이어가 죽은 상태에서는 이동할 수 없습니다.
#define LSID_AUTO006504							0x000019D1		// 배 탑승 중에는 이동할 수 없습니다.
#define LSID_AUTO006505							0x000019D2		// 길드전 중에는 이동할 수 없습니다.
#define LSID_AUTO006506							0x000019D3		// 석화 상태에서는 이동할 수 없습니다.
#define LSID_AUTO006507							0x000019D4		// 전투 상태에서는 채널 이동을 할 수 없습니다.
#define LSID_AUTO006508							0x000019D5		// 채널 이동 재사용 대기 시간 중입니다 (%d초)
#define LSID_AUTO006509							0x000019D6		// %s %d%%~%d%%
#define LSID_AUTO006510							0x000019D7		// 시작시간
#define LSID_AUTO006511							0x000019D8		// 만료시간
#define LSID_AUTO006512							0x000019D9		// 성장형 아이템 관련 : 데이터 오류
#define LSID_AUTO006513							0x000019DA		// 아이템 졸업에 필요한 레벨보다 낮습니다.
#define LSID_AUTO006514							0x000019DB		// 운영팀에서 지급된 아이템입니다.
#define LSID_AUTO006515							0x000019DC		// 서버 통합 시 이전된 아이템입니다.
#define LSID_AUTO006516							0x000019DD		// 캐릭터 이전 시 이전된 아이템입니다.
#define LSID_AUTO006517							0x000019DE		// 탈릭 인챈트 초기화 보상입니다.
#define LSID_AUTO006518							0x000019DF		// 탈릭 인챈트 파괴 시 보상입니다.
#define LSID_AUTO006519							0x000019E0		// 퀘스트 지역으로 이동하시겠습니까?
#define LSID_AUTO006520							0x000019E1		// [다음 레벨 보너스 효과 - Lv.%d]
#define LSID_AUTO006521							0x000019E2		// [적용 중인 보너스 효과 - 없음]
#define LSID_AUTO006522							0x000019E3		// 재사용 대기 시간 중입니다.
#define LSID_AUTO006523							0x000019E4		// 보유 금액
#define LSID_AUTO006524							0x000019E5		// 초
#define LSID_AUTO006525							0x000019E6		// 지급 대기 아이템
#define LSID_AUTO006526							0x000019E7		// 아이템 이름
#define LSID_AUTO006527							0x000019E8		// 지급 정보
#define LSID_AUTO006528							0x000019E9		// 지급 날짜
#define LSID_AUTO006529							0x000019EA		// 수령 가능한 미지급 아이템입니다.
#define LSID_AUTO006530							0x000019EB		// 미수령 아이템이 존재합니다. 수령하시겠습니까?
#define LSID_AUTO006531							0x000019EC		// [비활성화]
#define LSID_AUTO006532							0x000019ED		// [활성화]
#define LSID_AUTO006533							0x000019EE		// 마그네틱 제이드를 소지하지 않았습니다.
#define LSID_AUTO006534							0x000019EF		// 금일 무료 이용 시간이 모두 소진되었습니다.
#define LSID_AUTO006535							0x000019F0		// 복원
#define LSID_AUTO006536							0x000019F1		// [자동 사냥 설정]을 초기화하시겠습니까?
#define LSID_AUTO006537							0x000019F2		// [이전 설정]으로 복원하시겠습니까?
#define LSID_AUTO006538							0x000019F3		// 자동 사냥 설정이 초기화되었습니다.
#define LSID_AUTO006539							0x000019F4		// 자동 사냥 설정이 복원되었습니다.
#define LSID_AUTO006540							0x000019F5		// 결과를 확인하시려면 빛덩이를 클릭해주세요.
#define LSID_AUTO006541							0x000019F6		// 최대 소켓을 20이상 확장할 경우 현재 업그레이드 되어있는 탈릭의 개수보다 5개를 초과할 수 없습니다.
#define LSID_AUTO006542							0x000019F7		// 탈것 탑승 상태에선 자동 사냥을 시작할 수 없습니다.
#define LSID_AUTO006543							0x000019F8		// 레벨 %d 달성 패키지
#define LSID_AUTO006544							0x000019F9		// 기여도 %d 달성 패키지
#define LSID_AUTO006545							0x000019FA		// 계급 %s 달성 패키지
#define LSID_AUTO006546							0x000019FB		// 한정 상품을 구매할 수 있는 수량이 초과되었습니다.
#define LSID_AUTO006547							0x000019FC		// 판매 기간 : ~%d년 %d월 %d일 %d시 %d분 까지<br>
#define LSID_AUTO006548							0x000019FD		// 구매 횟수(계정) : %d / %d<br>
#define LSID_AUTO006549							0x000019FE		// 구매 횟수(캐릭터) : %d / %d<br>
#define LSID_AUTO006550							0x000019FF		// 패키지 단계 : %d<br>
#define LSID_AUTO006551							0x00001A00		// %d일 %d시간 %d분 이후 판매 종료
#define LSID_AUTO006552							0x00001A01		// 특가 패키지 구성 안내
#define LSID_AUTO006553							0x00001A02		// 레벨 %d 달성 기념 한정 판매 패키지를 특별한 가격에 캐시샵에서 만나보세요!
#define LSID_AUTO006554							0x00001A03		// 기여도 %d 달성 기념 한정 판매 패키지를 특별한 가격에 캐시샵에서 만나보세요!
#define LSID_AUTO006555							0x00001A04		// 계급 %s 달성 기념 한정 판매 패키지를 특별한 가격에 캐시샵에서 만나보세요!
#define LSID_AUTO006556							0x00001A05		// 최대 구매 횟수 소진
#define LSID_AUTO006557							0x00001A06		// 이전 단계 상품 구매 시 해금
#define LSID_AUTO006558							0x00001A07		// 기본
#define LSID_AUTO006559							0x00001A08		// 할인 상품
#define LSID_AUTO006560							0x00001A09		// 획득 확률 : %.3f%%
#define LSID_AUTO006561							0x00001A0A		// 아이템 구매하기
#define LSID_AUTO006562							0x00001A0B		// %d / %d
#define LSID_AUTO006563							0x00001A0C		// 탈것 탑승 상태에선 자동 사냥을 시작할 수 없습니다.
#define LSID_AUTO006564							0x00001A0D		// 애니머스의 경험치의 획득량이 증가한다.
#define LSID_AUTO006565							0x00001A0E		// 일반 공격력 %d<font color = '00ff00'>(%d)</font> - %d<font color = '00ff00'>(%d)</font>
#define LSID_AUTO006566							0x00001A0F		// 포스 공격력 %d<font color = '00ff00'>(%d)</font> - %d<font color = '00ff00'>(%d)</font>
#define LSID_AUTO006567							0x00001A10		// 방어력 %d<font color = '00ff00'>(%d)</font>
#define LSID_AUTO006568							0x00001A11		// <font color = 'a6a6a6'>일반 공격력 %d</font><font color = '92d050'>(%d)</font><font color = 'a6a6a6'> - %d</font><font color = '92d050'>(%d)</font>
#define LSID_AUTO006569							0x00001A12		// <font color = 'a6a6a6'>포스 공격력 %d</font><font color = '92d050'>(%d)</font><font color = 'a6a6a6'> - %d</font><font color = '92d050'>(%d)</font>
#define LSID_AUTO006570							0x00001A13		// <font color = 'a6a6a6'>방어력 %d</font><font color = '92d050'>(%d)</font>
#define LSID_AUTO006571							0x00001A14		// 받는 캐릭터
#define LSID_AUTO006572							0x00001A15		// 주는 캐릭터
#define LSID_AUTO006573							0x00001A16		// 합산 결과
#define LSID_AUTO006574							0x00001A17		// 합산
#define LSID_AUTO006575							0x00001A18		// 합산을 통해 증가할 수 있는 최대 레벨 및 경험치는 Lv.%d(0%) 입니다.
#define LSID_AUTO006576							0x00001A19		// 합산된 경험치가 최대치 이상을 넘어갈 경우 모두 손실 처리됩니다.
#define LSID_AUTO006577							0x00001A1A		// 경험치 합산 이용 시 [경험치를 주는 캐릭터]가 보유한 경험치의 80%가 이전되며 20%의 경험치는 손실됩니다.
#define LSID_AUTO006578							0x00001A1B		// 경험치를 제공하는 캐릭터의 정보는 모두 유지되며, 제공 후에는 Lv.1이 됩니다.
#define LSID_AUTO006579							0x00001A1C		// 합산이 완료되면 이전 상태로 되돌릴 수 없습니다.
#define LSID_AUTO006580							0x00001A1D		// 합산 완료 시 되돌릴 수 없습니다.
#define LSID_AUTO006581							0x00001A1E		// 전투 상태에서는 사용하실 수 없습니다.
#define LSID_AUTO006582							0x00001A1F		// 파티 상태에서는 사용하실 수 없습니다.
#define LSID_AUTO006583							0x00001A20		// 캐릭터 레벨이 맞지 않습니다. 포션 사용 레벨을 확인하십시오.
#define LSID_AUTO006584							0x00001A21		// 계속하시겠습니까?
#define LSID_AUTO006585							0x00001A22		// 구매하시겠습니까?
#define LSID_AUTO006586							0x00001A23		// %s
#define LSID_AUTO006587							0x00001A24		// [구매 제한]
#define LSID_AUTO006588							0x00001A25		// 계정 당 %d회 (%d/%d)
#define LSID_AUTO006589							0x00001A26		// 캐릭터 당 %d회 (%d/%d)
#define LSID_AUTO006590							0x00001A27		// 구매 개수 :
#define LSID_AUTO006591							0x00001A28		// 총 구매 가격 : %d Cash
#define LSID_AUTO006592							0x00001A29		// 보유 캐시 : %d Cash
#define LSID_AUTO006593							0x00001A2A		// 보유 캐시 : <font color = 'c93a3a'>%d Cash</font>
#define LSID_AUTO006594							0x00001A2B		// 구매
#define LSID_AUTO006595							0x00001A2C		// 완료
#define LSID_AUTO006596							0x00001A2D		// 구매하시겠습니까?
#define LSID_AUTO006597							0x00001A2E		// [구매 제한]
#define LSID_AUTO006598							0x00001A2F		// 구매 개수 :
#define LSID_AUTO006599							0x00001A30		// 구매
#define LSID_AUTO006600							0x00001A31		// 총 구매 가격 : %s Cash
#define LSID_AUTO006601							0x00001A32		// 보유 캐시 : <font color = 'ff0000'>%s Cash</font>
#define LSID_AUTO006602							0x00001A33		// 보유 캐시 : %s Cash
#define LSID_AUTO006603							0x00001A34		// 캐릭터당 %d회 : (%d/%d)
#define LSID_AUTO006604							0x00001A35		// 계정당 %d회 : (%d/%d)
#define LSID_AUTO006605							0x00001A36		// %s - <font color='ffd732'>%d Cash</font>
#define LSID_AUTO006606							0x00001A37		// %s - %d Cash
#define LSID_AUTO006607							0x00001A38		// 반복 실행 중..
#define LSID_AUTO006608							0x00001A39		// 성공 : %d회
#define LSID_AUTO006609							0x00001A3A		// 실패 : %d회
#define LSID_AUTO006610							0x00001A3B		// <font color='5b9bd5'>성공 :</font> %d회
#define LSID_AUTO006611							0x00001A3C		// <font color='ff0000'>실패 :</font> %d회
#define LSID_AUTO006612							0x00001A3D		// 서버 혜택
#define LSID_AUTO006613							0x00001A3E		// 마우스 클릭 시 서버 혜택을 확인하실 수 있습니다.
#define LSID_AUTO006614							0x00001A3F		// 다음 광산쟁 시작 시 해당 퀘스트가 초기화됩니다. 완료 시 즉시 보상을 수령해 주세요.
#define LSID_AUTO006615							0x00001A40		// [업그레이드 상세정보]
#define LSID_AUTO006616							0x00001A41		// <font color='8dacff'>강화 단계</font> %d
#define LSID_AUTO006617							0x00001A42		// 강화 단계 %d
#define LSID_AUTO006618							0x00001A43		// <font color='8dacff'>잔여 소켓</font> %d
#define LSID_AUTO006619							0x00001A44		// 잔여 소켓 %d
#define LSID_AUTO006620							0x00001A45		// <Ctrl> 업그레이드 상세정보
#define LSID_AUTO006621							0x00001A46		// 방어력 <font color = 'd8b42e'>%d</font>
#define LSID_AUTO006622							0x00001A47		// 포스 공격력 <font color = 'd8b42e'>%d</font> <font color = 'ffffff'>-</font> <font color = 'd8b42e'>%d</font>
#define LSID_AUTO006623							0x00001A48		// 일반 공격력 <font color = 'd8b42e'>%d</font> <font color = 'ffffff'>-</font> <font color = 'd8b42e'>%d</font>
#define LSID_AUTO006624							0x00001A49		// 성장형 아이템
#define LSID_AUTO006625							0x00001A4A		// 졸업 아이템
#define LSID_AUTO006626							0x00001A4B		// [성장형 아이템 상세 정보]
#define LSID_AUTO006627							0x00001A4C		// [성장 단계]
#define LSID_AUTO006628							0x00001A4D		// [활성화 효과]
#define LSID_AUTO006629							0x00001A4E		// [다음 효과]
#define LSID_AUTO006630							0x00001A4F		// 상대방어력
#define LSID_AUTO006631							0x00001A50		// %d 레벨이 되면 '영웅' NPC를 통해 아이템을 졸업할 수 있습니다.
#define LSID_AUTO006632							0x00001A51		// 상대방어력 <font color = 'd8b42e'>%d</font>
#define LSID_AUTO006633							0x00001A52		// 상대방어력 <font color = 'e2c865'>%d</font>
#define LSID_AUTO006634							0x00001A53		// 방어력 <font color = 'e2c865'>%d</font>
#define LSID_AUTO006635							0x00001A54		// 방어력 %d
#define LSID_AUTO006636							0x00001A55		// 포스 공격력 <font color = 'e2c865'>%d</font> <font color = 'ffffff'>-</font> <font color = 'e2c865'>%d</font>
#define LSID_AUTO006637							0x00001A56		// 포스 공격력 %d - %d
#define LSID_AUTO006638							0x00001A57		// 일반 공격력 <font color = 'e2c865'>%d</font> <font color = 'ffffff'>-</font> <font color = 'e2c865'>%d</font>
#define LSID_AUTO006639							0x00001A58		// 일반 공격력 %d - %d
#define LSID_AUTO006640							0x00001A59		// 졸업 결과로 획득하는 실제 장비는 업그레이드 정보가 계승됩니다.
#define LSID_AUTO006641							0x00001A5A		// 성장형 아이템이 아닙니다.
#define LSID_AUTO006642							0x00001A5B		// %d레벨부터 효과가 활성화됩니다.
#define LSID_AUTO006643							0x00001A5C		// 탐색 중
#define LSID_AUTO006644							0x00001A5D		// 이동 중
#define LSID_AUTO006645							0x00001A5E		// 처치 중
#define LSID_AUTO006646							0x00001A5F		// %d : %d : %d
#define LSID_AUTO006647							0x00001A60		// 프리미엄
#define LSID_AUTO006648							0x00001A61		// 기본
#define LSID_AUTO006649							0x00001A62		// [자동 사냥 등급 안내]
#define LSID_AUTO006650							0x00001A63		// <font color = 'FFD966'>[프리미엄]</font> 등급의 경우 일 %s, [기본] 등급의 경우 일 %s의 자동 사냥 이용 시간이 제공됩니다. 이용 잔여 시간은 매일 자정 12시에 초기화됩니다.
#define LSID_AUTO006651							0x00001A64		// [캐릭터 등급]
#define LSID_AUTO006652							0x00001A65		// [자동 사냥 이용 잔여 시간]
#define LSID_AUTO006653							0x00001A66		// %d시간 %d분 %d초
#define LSID_AUTO006654							0x00001A67		// 사냥 설정
#define LSID_AUTO006655							0x00001A68		// 자동 사냥 모드 설정
#define LSID_AUTO006656							0x00001A69		// 자유 이동 사냥
#define LSID_AUTO006657							0x00001A6A		// 범위 사냥
#define LSID_AUTO006658							0x00001A6B		// 좁음
#define LSID_AUTO006659							0x00001A6C		// 넓음
#define LSID_AUTO006660							0x00001A6D		// 우선 탐색 순위 설정
#define LSID_AUTO006661							0x00001A6E		// 1순위
#define LSID_AUTO006662							0x00001A6F		// 2순위
#define LSID_AUTO006663							0x00001A70		// 3순위
#define LSID_AUTO006664							0x00001A71		// 4순위
#define LSID_AUTO006665							0x00001A72		// 자동 획득
#define LSID_AUTO006666							0x00001A73		// 자동 획득 설정
#define LSID_AUTO006667							0x00001A74		// [활성화]
#define LSID_AUTO006668							0x00001A75		// [비활성화]
#define LSID_AUTO006669							0x00001A76		// 마그네틱 제이드 소지 시 활성화됩니다.
#define LSID_AUTO006670							0x00001A77		// %s
#define LSID_AUTO006671							0x00001A78		// 전체
#define LSID_AUTO006672							0x00001A79		// 장비
#define LSID_AUTO006673							0x00001A7A		// 소모품
#define LSID_AUTO006674							0x00001A7B		// 박스
#define LSID_AUTO006675							0x00001A7C		// 재료, 전리품
#define LSID_AUTO006676							0x00001A7D		// 기타
#define LSID_AUTO006677							0x00001A7E		// 자동 스킬
#define LSID_AUTO006678							0x00001A7F		// 자동 스킬 설정
#define LSID_AUTO006679							0x00001A80		// 시전 주기
#define LSID_AUTO006680							0x00001A81		// 초
#define LSID_AUTO006681							0x00001A82		// 자동 사냥을 중지했습니다. 자동 사냥 진행 결과를 확인하시겠습니까?
#define LSID_AUTO006682							0x00001A83		// 에 의해 사망했습니다. 자동 사냥 진행 결과를 확인하시겠습니까?
#define LSID_AUTO006683							0x00001A84		// 에 의해 사망했습니다. 자동 사냥 진행 결과를 확인하시겠습니까?
#define LSID_AUTO006684							0x00001A85		// 공격 불가 상태가되어 자동 사냥이 중지되었습니다. 자동 사냥 진행 결과를 확인하시겠습니까?
#define LSID_AUTO006685							0x00001A86		// 이용 잔여 시간이 소진되어 자동 사냥을 종료했습니다. 자동 사냥 진행 결과를 확인하시겠습니까?
#define LSID_AUTO006686							0x00001A87		// [자동 사냥 종료]
#define LSID_AUTO006687							0x00001A88		// [자동 사냥 진행 결과]
#define LSID_AUTO006688							0x00001A89		// [총 진행 시간]
#define LSID_AUTO006689							0x00001A8A		// [진행 전]
#define LSID_AUTO006690							0x00001A8B		// %d레벨 - %.4f%%
#define LSID_AUTO006691							0x00001A8C		// [진행 결과]
#define LSID_AUTO006692							0x00001A8D		// 최대 %s 소지 한도 초과
#define LSID_AUTO006693							0x00001A8E		// 교환 수수료
#define LSID_AUTO006694							0x00001A8F		// ∞
#define LSID_AUTO006695							0x00001A90		// %d개
#define LSID_AUTO006696							0x00001A91		// [획득 재화]
#define LSID_AUTO006697							0x00001A92		// [획득 재화 상세]
#define LSID_AUTO006698							0x00001A93		// 버프 포션 설정 1
#define LSID_AUTO006699							0x00001A94		// 버프 포션 설정 2
#define LSID_AUTO006700							0x00001A95		// 전투 시 사용
#define LSID_AUTO006701							0x00001A96		// 상시 사용
#define LSID_AUTO006702							0x00001A97		// [사용 포션명]
#define LSID_AUTO006703							0x00001A98		// 비활성화
#define LSID_AUTO006704							0x00001A99		// 나를 공격하는 플레이어 캐릭터
#define LSID_AUTO006705							0x00001A9A		// 나를 공격하는 몬스터
#define LSID_AUTO006706							0x00001A9B		// 퀘스트 몬스터
#define LSID_AUTO006707							0x00001A9C		// 선공 몬스터
#define LSID_AUTO006708							0x00001A9D		// 없음
#define LSID_AUTO006709							0x00001A9E		// [버프 포션 슬롯 사용 경고]
#define LSID_AUTO006710							0x00001A9F		// 중복되는 효과의 포션입니다. 계속 진행하는 경우 기존 포션 효과를 무시하고 사용 될 수 있습니다.
#define LSID_AUTO006711							0x00001AA0		// 족장 제재로 인해 일부 채팅 이용이 제한되었습니다.
#define LSID_AUTO006712							0x00001AA1		// 지급 실패(소지금 초과)
#define LSID_AUTO006713							0x00001AA2		// 무인거래기 수수료 지급
#define LSID_AUTO006714							0x00001AA3		// 길드명을 입력해주세요.
#define LSID_AUTO006715							0x00001AA4		// 이외 %d종 아이템(%d개)
#define LSID_AUTO006716							0x00001AA5		// 버프 포션이 아닙니다.
#define LSID_AUTO006717							0x00001AA6		// 중복된 효과를 가진 버프 포션을 함께 등록할 수 없습니다.
#define LSID_AUTO006718							0x00001AA7		// [포션 버프 확장 캡슐] 사용 시 활성화 됩니다.
#define LSID_AUTO006719							0x00001AA8		// 무제한
#define LSID_AUTO006720							0x00001AA9		// 시간
#define LSID_AUTO006721							0x00001AAA		// 탑승자의 레벨에 따라 [%s]의 내구도가 %d 증가하였습니다.<br><br>[내구도 : %d -> %d]
#define LSID_AUTO006722							0x00001AAB		// 이벤트
#define LSID_AUTO006723							0x00001AAC		// 강화
#define LSID_AUTO006724							0x00001AAD		// 지속 보조
#define LSID_AUTO006725							0x00001AAE		// 채굴
#define LSID_AUTO006726							0x00001AAF		// 익스텐더
#define LSID_AUTO006727							0x00001AB0		// 전투
#define LSID_AUTO006728							0x00001AB1		// 성장
#define LSID_AUTO006729							0x00001AB2		// 재화
#define LSID_AUTO006730							0x00001AB3		// 회복
#define LSID_AUTO006731							0x00001AB4		// 상태 이상 회복
#define LSID_AUTO006732							0x00001AB5		// 버프
#define LSID_AUTO006733							0x00001AB6		// 특수
#define LSID_AUTO006734							0x00001AB7		// 애로우
#define LSID_AUTO006735							0x00001AB8		// 볼트
#define LSID_AUTO006736							0x00001AB9		// 빔셀
#define LSID_AUTO006737							0x00001ABA		// 매거진
#define LSID_AUTO006738							0x00001ABB		// 에너지 매거진
#define LSID_AUTO006739							0x00001ABC		// 리퀴드 퓰
#define LSID_AUTO006740							0x00001ABD		// 벌컨 매거진
#define LSID_AUTO006741							0x00001ABE		// 그리네이드
#define LSID_AUTO006742							0x00001ABF		// 발동탄
#define LSID_AUTO006743							0x00001AC0		// 강화 보석은 최대 4개를 초과할 수 없습니다.
#define LSID_AUTO006744							0x00001AC1		// 업그레이드 확률이 100%입니다.
#define LSID_AUTO006745							0x00001AC2		// 아이템 잠금을 하시겠습니까?<br><br>아이템 잠금 시 거래, 강화 , 드랍등<br>아이템 상태에 영향을 주는 행위가 제한됩니다.<br><br>잠금 해제는 1시간 뒤에 가능합니다.
#endif // __LANG_ID_H__