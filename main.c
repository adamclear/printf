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
	char one = 'a';
	char two = 'b';

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf another simple sentence.\n");
	_printf("%s\n", "hello, world");
	_printf("%s\n", "goodbye, world");
	_printf("%c\n", one);
	_printf("%c\n", two);

	return (0);
}
