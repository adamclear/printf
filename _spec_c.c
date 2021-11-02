#include "main.h"
#include <stdarg.h>
/**
 * _spec_c - returns a string with a character in it
 * @n: input character variable
 * Return: ptr_n
 */
int _spec_c(va_list *args)
{
	_putchar(va_arg(*args, int));

return (1);
}
