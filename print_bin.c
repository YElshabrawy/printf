#include "main.h"

/**
 * print_bin - prints an unsigned integer in binary format
 * @arg: a va_list containing the integer to be printed
 *
 * Return: the number of digits printed on success, or -1 on failure
 */
int print_bin(va_list arg)
{
	int num, i, len;
	char *str, *rev_string;

	num = va_arg(arg, unsigned int);
	if (num == 0)
		return (_putchar('0'));

	if (num < 1)
		return (-1);

	len = base_len(num, 2);

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';

	rev_string = rev_str(str);
	if (rev_string == NULL)
		return (-1);

	print_base(rev_string);

	free(str);

	return (len);
}
