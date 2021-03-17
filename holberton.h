#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct conv_specifier
{
	char *c;
	int (*f)(va_list);
} match_conversion;



int _printf(const char *format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int bin(va_list arg);
