#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define P 17
#define Q 14
#define F (1 << Q)

#if P + Q != 31
#error "P + Q must equal 31"
#endif

#define INT_ADD(integer_1, fixed_point) (integer_1) + (fixed_point) * F
#define INT_SUB(integer_1, fixed_point) (integer_1) - (fixed_point) * F

#define FP_ADD(fixed_point_1, fixed_point_2) (fixed_point_1) + (fixed_point_2)
#define FP_SUB(fixed_point_1, fixed_point_2) (fixed_point_1) - (fixed_point_2)

#define FP_MUL(fixed_point_1, fixed_point_2) ((int64_t) fixed_point_1) * (fixed_point_2) / F
#define FP_DIV(fixed_point_1, fixed_point_2) ((int64_t) fixed_point_1) * F / (fixed_point_2)

#define INT_TO_FP(integer) (integer) * F
#define FP_TO_INT_ROUND_ZERO(fixed_point) (fixed_point) / F
#define FP_TO_INT_ROUND_NEAREST(fixed_point) ((fixed_point) >= 0 ? ((fixed_point) + F / 2) / F : ((fixed_point) - F / 2) / F)

#endif