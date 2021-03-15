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
void _print_rev_recursion(char *s);
void rot13(char *s);
void convert_to_hex(char *s);
void print_number(unsigned long int n);
void convert_to_binary(unsigned int s);

#endif
