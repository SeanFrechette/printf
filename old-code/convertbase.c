#include <stdlib.h>
/**
 * convertbase - converts arg by base
 * @num: base
 * @base: arg
 * Return: pointer
 */
char *convertbase(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
