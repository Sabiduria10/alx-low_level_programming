#ifndef MAIN
#define MAIN
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void int binary_to_uint(const char *b);
#endif
