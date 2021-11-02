#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * _printf - prints a formatted string to output
 * @format: input string to format and print
 * Return: total, the total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int x = 0;  /* input incrementer variable */
	int tot = 0;  /* length of output string */

	va_start(args, format);

	while (format && format[x])
	{
		if (format[x] == '%')
		{
			x++;
			switch (format[x])
			{
			case 'c':
				tot = tot + _spec_c(va_arg(args, int));
				break;
			case 's':
				tot = tot + _spec_s(va_arg(args, char *));
				break;
			case 'i':
			case 'd':
				tot = tot + _spec_di(va_arg(args, int));
				break;
			}
		}
		else
		{
			tot += _putchar(format[x]);
		}
		x++;
	}
	printf("%d\n", tot);
	return (tot);
}
