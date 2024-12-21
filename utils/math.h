#ifndef __MATH_H__
#define __MATH_H__

#include <stdint.h>

#define DIV_ROUND_UP(x, y) (((uint64_t)(x) + ((uint64_t)(y) - 1)) / (uint64_t)(y))

#define ALIGN_UP(x, y) (DIV_ROUND_UP(x, y) * (uint64_t)(y))
#define ALIGN_DOWN(x, y) (((uint64_t)(x) / (uint64_t)(y)) * (uint64_t)(y))

#endif // __MATH_H__