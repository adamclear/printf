#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
 * _printf - prints a formatted string to output
 * @format: input string to format and print
 * Return: total, the total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*func)(va_list *); /* funct ptr to find funct for spec */
	int x = 0;  /* input incrementer variable */
	int tot = 0;  /* length of output string */

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format && format[x])
	{
		if (format[x] == '%')
		{
			x++;
			func = _get_function(format[x]);
			if (func != NULL)
			{
				tot += func(&args);
			}
			x++;
		}
		else
		{
			tot += _putchar(format[x]);
			x++;
		}
	}
	va_end(args);
return (tot);
}
