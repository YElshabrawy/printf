#include "main.h"

/**
 * hex_check - returns the hexadecimal character for a given digit
 * @n: the digit to be converted to hexadecimal
 * @x: the case of the hexadecimal character ('x' for lowercase, 'X' for uppercase)
 *
 * Return: the hexadecimal character corresponding to the digit
 */
int hex_check(int n, char x)
{
	char *he_x = "abcdef";
	char *He_x = "ABCDEF";

	n -= 10;
	if (x == 'x')
		return (he_x[n]);
	else
		return (He_x[n]);
}

/**
 * print_he_x - prints an unsigned integer in lowercase hexadecimal format
 * @arg: a va_list containing the integer to be printed
 *
 * Return: the number of digits printed on success, or -1 on failure
 */
int print_he_x(va_list arg)
{
	unsigned int num;
	int len, rem;
	char *hex_str, *rev_hex;

	num = va_arg(arg,
	unsigned int);

	if (num == 0)
		return (_putchar('0'));

	len = base_len(num, 16);

	hex_str = malloc(sizeof(char) * len + 1);
	if (hex_str == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rem = num % 16;

		if (rem > 9)
		{
			rem = hex_check(rem, 'x');
			hex_str[len] = rem;
		} else
			hex_str[len] = rem + 48;

		num /= 16;
	}
	hex_str[len] = '\0';

	rev_hex = rev_str(hex_str);
	if (rev_hex == NULL)
		return (-1);

	print_base(rev_hex);

	free(hex_str);
	return (len);
}

/**
 * print_he_X - prints an unsigned integer in uppercase hexadecimal format
 * @list: a va_list containing the integer to be printed
 *
 * Return: the number of digits printed on success, or -1 on failure
 */
int print_he_X(va_list arg)
{
	unsigned int num;
	int len, rem;
	char *hex_str, *rev_hex;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	len = base_len(num, 16);

	hex_str = malloc(sizeof(char) * len + 1);
	if (hex_str == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rem = num % 16;
		if (rem > 9)
		{
			rem = hex_check(rem, 'X');
			hex_str[len] = rem;
		} else
			hex_str[len] = rem + 48;

		num /= 16;
	}
	hex_str[len] = '\0';

	rev_hex = rev_str(hex_str);
	if (rev_hex == NULL)
		return (-1);

	print_base(rev_hex);

	free(hex_str);
	return (len);
}
