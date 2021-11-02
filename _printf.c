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
	char *(*func)(void *); /* funct ptr to find funct for spec */
	int x = 0;  /* input incrementer variable */
	int tot = 0;  /* length of output string */
	int tmp = 0;
	char *buff = malloc(1024);

	va_start(args, format);
	while (format && format[x])
	{
		if (format[x] == '%')
		{
			x++;
			func = _get_function(format[x]);
			_strcpy(buff, func(&args));
			tot += _strlen(buff);
			tmp = _strlen(buff);
			write(1, buff, tmp);
		}
		else
		{
			write(1, buff, tot);
			_putchar(format[x]);
			tot++;
		}
		x++;
	}
	write(1, buff, tot);
	va_end(args);
	return (tot);
}
