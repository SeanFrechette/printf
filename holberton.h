#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/*
 *typedef struct specdef
 *{
 *char *spec;
 *	char ** (*f)();
 *} specdef_t;
 */
int _putchar(char c);
int _printf(const char *format, ...);
int _print_rev_recursion(char *s, int count);
int rot13(char *s, int count);
int convert_to_hex(char *s, int count);
int print_number(unsigned long int n, int count);
int convert_to_binary(unsigned int s);

#endif
