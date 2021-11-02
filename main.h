#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _spec_c(int c);
int _spec_s(char *s);
int _spec_di(int n);
char *_itoa(int n, char *str, int base);
int _strcmp(char s1, char *s2);
int _strlen(char *s);

char * _strcpy(char *dest, char *src);

#endif
