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
	int x;

	for (x = 0; *ptr_str != '\0'; x++)
	{
		_putchar(ptr_str[x]);
	}

return (x);
}
