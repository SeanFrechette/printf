#include "holberton.h"
/**
 * rot13 - converts string to rot13
 * @s: string
 * Return: Rot13 string
 */
int rot13(char *s)
{
	int x, y;
	int count = 0;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 65)
		{
			count++;
			_putchar(s[x]);
		}
		else if (s[x] > 90 && s[x] < 97)
		{
			count++;
			_putchar(s[x]);
		}
		else if (s[x] > 122)
		{
			count++;
			_putchar(s[x]);
		}
		else
		{
			for (y = 0; alpha[y] != '\0'; y++)
			{
				if (s[x] == alpha[y])
				{
					count++;
					_putchar(rot13[y]);
				}
			}
		}
	}
	return (count);
}

/**
 * _print_rev_recursion - prints a string reverse
 * @s: a string
 */
int _print_rev_recursion(char *s)
{
	int slen;
	int count = 0;

	for (slen = 0; s[slen]; slen++)
	{
		continue;
	}
	slen--;
	if (*s)
	{
		for (; slen >= 0; slen--)
		{
			count++;
			_putchar(s[slen]);
		}
	}
	return (count);
}

/**
 * convert_to_hex - prints hex
 * @s: string
 */
int convert_to_hex(char *s){
	unsigned int j;
	int count = 0;
	char hexArr[] = {
	'0', '1', '2',
	'3', '4', '5',
	'6', '7', '8',
	'9', 'A', 'B',
	'C', 'D', 'E',
	'F', '\0'};

	for (j = 0; s[j]; j++)
	{
		if (s[j] >= 32 && s[j] < 127)
		{
			count++;
			_putchar(s[j]);
		}
		else
		{
			count++;
			_putchar('\\');
			count++;
			_putchar('x');
			count++;
			_putchar(hexArr[s[j] / 16]);
			count++;
			_putchar(hexArr[s[j] % 16]);
		}
	}
	return (count);
}
/**
 * convert_to_binary - convert to binary
 * @j: some integer
 */
int convert_to_binary(unsigned int j)
{
	int i;
	int a[10];
	int count = 0;
	for (i = 0; j > 0; i++)
	{
		a[i] = j % 2;
		j = j / 2;
	}
	
	for (i = i - 1; i >= 0; i--)
		count = count + print_number(a[i]);
	return (count);
}
