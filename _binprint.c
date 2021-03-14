#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - prints anything
 * @format: pointer to string that contains specifiers
 * Return: number of characters printed
 **/
int _printf(const char *format, ...)
{
	unsigned int count = 0, i = 0;
	int (*f)(va_list);
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '\0')
			return (count);
		else (format[i] == '%') {
			if (i == "b")
				bin(format[i]);
			else if (r)
				return();
			else (f != list)
				return (-1);
		}
			i+= 1;
		i++;
	}
	va_end(list);
	return (count);
}
