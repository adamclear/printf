#include "main.h"
#include <stddef.h>
/**
 *_get_function - finds a match for the specifier and associates it with a
 *                function.
 * @s: input variable character to check for
 * Return: fun[i].funct if spec is found
 */
int (*_get_function(char s))(va_list * args)
{
	function_t fun[] = {
		{"c", _spec_c},
		{"s", _spec_s},
		{"d", _spec_di},
		{"i", _spec_di},
		{"b", _spec_b},
		{"%", _spec_pct},
		{"r", _spec_r},
		{NULL, NULL}
	};
	int i = 0;

	while (fun[i].spec != NULL)
	{
		if (_strcmp(s, fun[i].spec) == 0)
		{
			return (fun[i].funct);
		}
		i++;
	}
	return (NULL);
}
