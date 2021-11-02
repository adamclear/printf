#include "main.h"
#include <stdarg.h>
/**
 * _spec_s - takes input string and copies it to new pointer
 * @str: input string variable
 * Return: ptr_str
 */
int _spec_s(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		_putchar(s[x]);
	}

return (x);
}
