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
	unsigned int len = 0, i = 0;
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
			len++;
		}
		else if (format[i] == '\0')
			return (len);
		else if (format[i] == '%')
		{
			i += 1;
			if (format[i] == "c")
				_putchar(format[i]);
			else if (format[i] == "s")
				print_string(format[i]);
			else
				_putchar(i);
		}
		else
			_putchar(i);
		i++;
	}
	va_end(list);
	return (len);
}
