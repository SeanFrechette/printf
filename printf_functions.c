#include "holberton.h"
/**
 * rot13 - converts string to rot13
 * @s: string
 * Return: Rot13 string
 */
void rot13(char *s)
{
	int x, y;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 65)
			_putchar(s[x]);
		else if (s[x] > 90 && s[x] < 97)
			_putchar(s[x]);
		else if (s[x] > 122)
			_putchar(s[x]);
		else
		{
			for (y = 0; alpha[y] != '\0'; y++)
			{
				if (s[x] == alpha[y])
				{
					_putchar(rot13[y]);
				}
			}
		}
	}
}

/**
 * _print_rev_recursion - prints a string reverse
 * @s: a string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * convert_to_hex - prints hex
 * @s: string
 */
void convert_to_hex(char *s){
	unsigned int j;
	char hexArr[] = { '0', '1', '2', '3', '4','5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

	for (j = 0; s[j]; j++)
	{
		if (s[j] >= 32 && s[j] < 127)
		{
			_putchar(s[j]);
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			_putchar(hexArr[s[j] / 16]);
			_putchar(hexArr[s[j] % 16]);
		}
	}
}
/**
 * convert_to_binary - convert to binary
 * @j: some integer
 */
void convert_to_binary(unsigned int j)
{
	int i;
	int a[10];

	for (i = 0; j > 0; i++)
	{
		a[i] = j % 2;
		j = j / 2;
	}
	for (i = i - 1; i >= 0; i--)
		print_number(a[i]);
}
