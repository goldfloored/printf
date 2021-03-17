#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_char - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
*/
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
/**
* print_string - function that prints string
* @arg: va_list
* Return: number of elements printed
*/
int print_string(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
* print_int - function that prints integers
* @arg: va_list
* Return: number of elements printed
*/
int print_int(va_list arg)
{
	int i, div, o, count = 0;
	int n = va_arg(arg, int);
	unsigned int num;

	o = n % 10;
	n = n / 10;
	if (n < 0)
	{
		n = -n;
		o = -o;
		_putchar('-');
		count++;
	}
	num = n;
	div = 1;
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			div = div * 10;
		}
		while (div >= 1)
		{
			i = n / div;
			_putchar(i + '0');
			n = n % div;
			div = div / 10;
			count++;
		}
	}
	_putchar(o + '0');
	count++;
	return (count);
}
