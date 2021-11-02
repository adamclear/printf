#include "main.h"
/**
 * _spec_di.c - prints integer and returns how many character printed
 * @n: number to print
 *
 *
 */
int _spec_di(int n)
{
	int i;
	char s[13];
	char *str;
	str = _itoa(n, s, 10);

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
