#include "main.h"
/**
 * rev_str - prints
 * @str: ..
 * Return: str
*/
char *rev_str(char *str)
{
	int i, len;
	char tmp;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}

	return (str);
}
/**
 * base_len - prints
 * @num: ..
 * @base: ..
 * Return: int
*/
int base_len(unsigned int num, int base)
{
	int i;

	for (i = 0; num > 0; i++)
		num = num / base;

	return (i);
}
/**
 * print_base - prints
 * @str: ..
 * Return: void
*/
void print_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
