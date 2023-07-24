#include "main.h"
/**
 * print_str - prints
 * @arg: ..
 * Return: ...
*/
int print_str(va_list arg)
{
	int i = 0;
	char *string;

	string = va_arg(arg, char*);

	if (!string)
		string = "(null)";

	while (string[i])
		_putchar(string[i++]);

	return (i);
}
/**
 * print_haxa - prints
 * @n: ..
 * @p: ..
 * Return: ..
*/
void print_haxa(unsigned int n, int *p)
{
	unsigned int rem;

	if (n == 0)
		return;

	rem = n % 16;

	print_haxa(n / 16, p);

	if (rem < 10)
		_putchar('0' + rem);
	else
		_putchar('A' + rem - 10);

	(void) (*p)++;
}

/**
 * print_Str - prints
 * @ap: ..
 * Return: ..
*/
int print_Str(va_list ap)
{
	char *str;
	int i, len = 0, checker;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			checker = str[i];

			if (checker < 16)
			{
				_putchar('0');
				len++;
			}

			print_haxa(checker, &len);
		} else
		{
			_putchar(str[i]);
			len++;
		}
	}

	return (len);
}
