#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include "holberton.h"
/**
 * print_to_console - prints to console from buffer using write
 * @s: input string
 */
void print_to_console(char *s)
{
	write(1, s, strlen(s));
}
