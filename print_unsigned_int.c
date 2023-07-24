#include "main.h"
/**
 * print_unsigned_int - prints
 * @arg: ..
 * Return: ..
*/
int print_unsigned_int(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int len = 0, div = 1, digit;

	if (num == 0)
	{
		len += _putchar('0');
		return (len);
	}

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		digit = num / div;
		len += _putchar(digit + '0');
		num %= div;
		div /= 10;
	}

	return (len);
}
