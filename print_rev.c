#include "main.h"
/**
 * print_rev - prints
 * @arg: ...
 * Return: ..
*/
int print_rev(va_list arg)
{
	int len;
	char *s, *ptr;

	s = va_arg(arg, char *);
	if (s == NULL)
		return (-1);

	ptr = rev_str(s);
	if (ptr == NULL)
		return (-1);

	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);

	free(ptr);
	return (len);
}
