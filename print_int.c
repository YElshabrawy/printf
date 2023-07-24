#include "main.h"

int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int len = 0;
	int digits = 0;
	int div = 1;
	int temp, i, digit;

	if (n < 0)
	{
		len += _putchar('-');
		n *= -1;
	}

	if (n == 0)
	{
		len += _putchar('0');
		return (len);
	}

	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	for (i = 1; i < digits; i++)
		div *= 10;

	while (div != 0)
	{
		digit = n / div;
		len += _putchar(digit + '0');
		n %= div;
		div /= 10;
	}

	return (len);
}
