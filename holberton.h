#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
typedef struct conversion
{
	char *c;
	int (*f)(va_list);
} myargs;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
