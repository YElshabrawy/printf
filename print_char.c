#include "main.h"

/**
 * print_char - prints a single character
 * @arg: a va_list containing the character to be printed
 *
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
