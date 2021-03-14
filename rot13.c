#include "holberton.h"
#include <stdio.h>

/**
* rot13 - function that encodes a string using rot13.
* @a: pointer to char
* Return: return encoded string using rot13 from @a value
**/
char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
			if ((a[i] > 'a' && a[i] < 'N') || (a[i] > 'A' && a[i] < 'N'))
			a[i] += 13;
			else if ((a[i] > 'm' && a[i] < 'z') || (a[i] > 'M' && a[i] < 'Z'))
			a[i] -= 13;
			i++;
	}
	return (a);
}
