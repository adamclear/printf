#include "main.h"
/**
 * _spec_di - prints integer and returns how many character printed
 * @args: number to print
 * Return: number of characters printed.
 */
int _spec_di(va_list *args)
{
	int i;
	char s[13];
	int stri = va_arg(*args, int);
	char *stra;

	if (!stri)
		exit(99);
	stra = _itoa(stri, s, 10);

	i = 0;
	while (stra[i] != '\0')
	{
		_putchar(stra[i]);
		i++;
	}
	return (i);
}
