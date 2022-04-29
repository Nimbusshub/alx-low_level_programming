#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>

int _pow(int x, int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif /* _MAIN_H_ */
