#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct function - structure to find the correct function for a specifier
 * @spec: The specifier in question
 * @funct: The function associated with the specifier
 */
typedef struct function
{
	char *spec;
	char *(*funct)(void *);
} function_t;

int _putchar(char c);
int _printf(const char *format, ...);
char * _spec_c(void *n);
char * _spec_s(void *str);
int _strcmp(char s1, char *s2);
int _strlen(char *s);
char * (*_get_function(char s))(void *);
char * _strcpy(char *dest, char *src);

#endif
