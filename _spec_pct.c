#include "main.h"
/**
 * _spec_pct - prints a % char when the % specifier is used
 * Return: int
 */
int _spec_pct(va_list *args)
{
	(void)(args);

	_putchar('%');
	return (1);
}