#include "main.h"

/**
 * print_char - prints
 * @arg: ..
 * Return: int
*/

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
