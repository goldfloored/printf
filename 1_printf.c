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
	while (format!=NULL && format[i]!=NULL)
	{
		if (format[i] != '%')
		{
			print_numbers(format[i]);
			count++;
		}
		else if (format[i] == NULL)
			return (count);
		else (format[i] == '%')
		{
			if (format[i] == "d")
				print_numbers(format[i]);
			else if (format[i] == "i")
				print_numbers(format[i]);
			i += 1;
		}
		i++;
	}
	va_end(list);
	return (count);
}
