#include "main.h"

/**
 * base_len - calculates the length of a number in a given base
 * @num: the number to be converted
 * @base: the base to which the number is converted
 *
 * Return: the length of the number in the given base
 */
int base_len(unsigned int num, int base)
{
	int i;

	for (i = 0; num > 0; i++)
		num = num / base;

	return (i);
}

/**
 * print_base - prints a null-terminated string of digits
 * @str: the string of digits to be printed
 *
 * Return: void
 */
void print_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
