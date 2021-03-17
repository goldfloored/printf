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
			else if (format[i] == "d")
				print_int(format[i]);
			else if (format[i] == "i")
				print_int(format[i]);
			else if (format[i] == "s")
				print_string(format[i]);
			else if (format[i] != NULL)
			{
				i += 1;
				if (format[i] == "n")
					_putchar('\n');
				else if(format[i] == "a")
					_putchar('\a');
				else if (format[i] == "t")
					_putchar('\t');
				else if (format[i] == "v")
					_putchar('\v');
				else if (format[i] == "r")
					_putchar('\r');
				else if (format[i] == "a")
					_putchar('\a');
				else if (format[i] == "b")
					_putchar('\b');
				else
					i += 1;
					_putchar(i);
			}
		}
		else
			_putchar(i);
		i++;
	}
	va_end(list);
	return (len);
}
