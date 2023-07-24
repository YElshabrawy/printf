#include "main.h"

/**
 * print_oct_help - prints
 * @num: ..
 * @ptr: ..
 * Return: ..
*/
void print_oct_help(unsigned int num, int *ptr)
{
	unsigned int rem;

	if (num == 0)
		return;
	rem = num % 8;

	print_oct_help(num / 8, ptr);

	_putchar('0' + rem);

	(void) (*ptr)++;
}

/**
 * print_oct - prints
 * @arg: ..
 * Return: ..
*/
int print_oct(va_list arg)
{
	unsigned int num;
	int ptr = 0;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	print_oct_help(num, &ptr);

	return (ptr);
}
