#include "main.h"
#include <stdarg.h>
/**
 * _spec_c - returns a string with a character in it
 * @args: input character variable
 * Return: 1
 */
int _spec_c(va_list *args)
{
	char c = va_arg(*args, int);

	if (!c)
		return (0);
	_putchar(c);

return (1);
}
