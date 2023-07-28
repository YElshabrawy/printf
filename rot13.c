#include "main.h"

/**
 * print_rot13 - encodes a string using the ROT13 cipher
 * @arg: a va_list containing the string to be encoded
 *
 * Return: the number of characters printed on success, or -1 on failure
 */
int print_rot13(va_list arg)
{
	int i, x;
	char *str;
	char main[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
			if (str[i] == main[x])
			{
				_putchar(rotated[x]);
				break;
			}

		if (x == 53)
			_putchar(str[i]);
	}

	return (i);
}
