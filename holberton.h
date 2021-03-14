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
void print_to_console(char *str);
char * convert_multi_array(char **input);
char ** catchar(char input);
char ** catstring(char *input);
#endif
