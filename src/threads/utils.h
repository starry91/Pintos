#ifndef UTILS_H
#define UTILS_H

#define Q_FP 1<<14

int convert_to_fp(int x);
int add_fp(int x, int y);
int multiply_fp(int x, int y);
int divide_fp(int x, int y);
int convert_to_int(int x);
int convert_to_int_round(int x);


#endif