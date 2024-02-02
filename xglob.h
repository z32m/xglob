#ifndef __xglob_h__
#define __xglob_h__

#include <zephyr/kernel.h>

#define WAIT_FOR(x) \
    while (!x)      \
    k_msleep(1)

#define ALIGN 4

#define EVAL(s) s
#define SPREAD(...) __VA_ARGS__
#define ARGY(s, ...) s

#define SKIP(s, ...) __VA_ARGS__
#define SKIP0(...) ARGY(__VA_ARGS__)
#define SKIP1(...) SKIP(__VA_ARGS__)
#define SKIP2(...) SKIP(SKIP(__VA_ARGS__))
#define SKIP3(...) SKIP(SKIP(SKIP(__VA_ARGS__)))
#define SKIP4(...) SKIP(SKIP(SKIP(SKIP(__VA_ARGS__))))
#define SKIP5(...) SKIP(SKIP(SKIP(SKIP(SKIP(__VA_ARGS__)))))

#define ARGN(n, ...) ARGY(SKIP##n(__VA_ARGS__))
#define STRY(s, ...) #s
#define STRINGY(n) STRY(n)

#define mem_alloc k_malloc
#define mem_free k_free

#define ABS(a, b) (a < b ? b - a : a - b)

#endif