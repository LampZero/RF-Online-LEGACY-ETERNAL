# COMENTARIO_ZECA | # XXH64 seed=0 reimplementado para bater com o manifgen.exe oficial do cliente.
# -*- coding: utf-8 -*-
"""XXH64 seed=0 em Python puro (mesmo algoritmo do manifgen.exe)."""
import struct

P1 = 11400714785074694791
P2 = 14029467366897019727
P3 = 1609587929392839161
P4 = 9650029242287828579
P5 = 2870177450012600261
MASK = (1 << 64) - 1


def _rotl(x, n):
    return ((x << n) | (x >> (64 - n))) & MASK


def _round(acc, inp):
    acc = (acc + inp * P2) & MASK
    acc = _rotl(acc, 31)
    return (acc * P1) & MASK


def _merge(acc, val):
    val = _round(0, val)
    acc ^= val
    return (acc * P1 + P4) & MASK


def digest(data):
    n = len(data)
    i = 0
    if n >= 32:
        v1 = (P1 + P2) & MASK
        v2 = P2
        v3 = 0
        v4 = (-P1) & MASK
        lim = n - 32
        while i <= lim:
            v1 = _round(v1, struct.unpack_from("<Q", data, i)[0]); i += 8
            v2 = _round(v2, struct.unpack_from("<Q", data, i)[0]); i += 8
            v3 = _round(v3, struct.unpack_from("<Q", data, i)[0]); i += 8
            v4 = _round(v4, struct.unpack_from("<Q", data, i)[0]); i += 8
        h = (_rotl(v1, 1) + _rotl(v2, 7) + _rotl(v3, 12) + _rotl(v4, 18)) & MASK
        h = _merge(h, v1)
        h = _merge(h, v2)
        h = _merge(h, v3)
        h = _merge(h, v4)
    else:
        h = P5

    h = (h + n) & MASK
    while i + 8 <= n:
        k = _round(0, struct.unpack_from("<Q", data, i)[0]); i += 8
        h ^= k
        h = (_rotl(h, 27) * P1 + P4) & MASK
    if i + 4 <= n:
        h ^= (struct.unpack_from("<I", data, i)[0] * P1) & MASK
        i += 4
        h = (_rotl(h, 23) * P2 + P3) & MASK
    while i < n:
        h ^= (data[i] * P5) & MASK
        i += 1
        h = (_rotl(h, 11) * P1) & MASK

    h ^= h >> 33
    h = (h * P2) & MASK
    h ^= h >> 29
    h = (h * P3) & MASK
    h ^= h >> 32
    return h


def file_digest(path):
    return "%016x" % digest(path.read_bytes())
