#include "main.h"
/**
 * _strcpy- copies source array to dest array
 * @dest: destination array variable pointer
 * @src: source array variable pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';
	return (dest);
}
