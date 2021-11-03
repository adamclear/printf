#include "main.h"
#include <stdarg.h>
/**
 * _spec_s - takes input string and copies it to new pointer
 * @str: input string variable
 * Return: ptr_str
 */
int _spec_s(va_list *args)
{
	char *ptr_str = va_arg(*args, char *);
	int x = 0;

	while (ptr_str[x] != '\0')
	{
		_putchar(ptr_str[x]);
		x++;
	}
return (x);
}
