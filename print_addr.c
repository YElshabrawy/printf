#include "main.h"

/**
 * print_hexa_ptr - prints a hexadecimal number in reverse order
 * @num: the number to be printed
 * @p: a pointer to an integer that keeps track of the number of digits printed
 *
 * Return: void
 */
void print_hexa_ptr(unsigned long int num, int *p)
{
	unsigned long int rem;

	if (num == 0)
		return;
	rem = num % 16;

	print_hexa_ptr(num / 16, p);

	if (rem < 10)
		_putchar('0' + rem);
	else
		_putchar('a' + rem - 10);

	(void) (*p)++;
}

/**
 * print_hex_p - prints an unsigned long integer in hexadecimal format
 * @arg: a va_list containing the argument to be printed
 *
 * Return: the number of digits printed
 */
int print_hex_p(va_list arg)
{
	unsigned long int n;
	int len = 0;

	n = va_arg(arg,
	unsigned long int);
	print_hexa_ptr(n, &len);

	return (len);
}

/**
 * print_addr - prints the address of a variable in hexadecimal format
 * @arg: a va_list containing the argument to be printed
 *
 * Return: the number of digits printed
 */
int print_addr(va_list arg)
{
	int len, i;
	void *p;
	char *str = "(nil)";
	va_list dest;

	va_copy(dest, arg);
	p = va_arg(arg, void*);
	if (p == NULL)
	{
		i = 0;

		while (*str)
		{
			_putchar(*str);
			str++, i++;
		}

		va_end(dest);
		return (i);
	}
	_putchar('0');
	_putchar('x');

	len = print_hex_p(dest);

	va_end(dest);
	return (len + 2);
}
