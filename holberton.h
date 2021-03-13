#ifndef HOLBERTON_H
#define HOLBERTON_H
typedef struct specdef
{
	char *spec;
	void (*f)();
};
int _printf(const char *format, ...);

#endif