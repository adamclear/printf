#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("test text: basic input\n");
	_printf("test string: %s\n", "hello, world");
	_printf("test char: %c\n", 'a');
	_printf("test decimal: %d\n", 12);
	_printf("test int: %i\n", 13);
	_printf("test percent: %%\n");

	return (0);
}
