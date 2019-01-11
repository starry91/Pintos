#include "utils.h"

int convert_to_fp(int x)
{
    return ((x)*(Q_FP));
}

int multiply_fp(int x, int y)
{
    return ((int)(x)) * (y) / (Q_FP);
}

int divide_fp(int x, int y)
{
    return ((int)(x)) * (Q_FP) / (y);
}