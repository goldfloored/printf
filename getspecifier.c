#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* getspecifier - finds the function for the specifier
* @format: pointer to our string
* @i: index of our potential specifier
* Return: pointer to function
*/
int(*getspecifier(const char *format, int i))(va_list)
{
int k;
mystr p[] = {
{"c", print_c},
{"s", print_s},
{"S", print_S},
{"p", _print_p},
{"i", _print_i},
{"d", _print_i},
{"b", _print_b},
{"u", _print_u},
{"o", _print_o},
{"x", _print_x},
{"X", _print_X},
{"r", print_rs},
{"R", print_rot},
};
for (k = 0; p[k].letter; k++)
	if (p[k].letter[0] == format[i - 1])
		return (p[k].func);
}
