#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	len = _printf("%d", INT_MIN);
	printf("\n");
	len2 = printf("%d", INT_MIN);
	printf("\n");
	printf("%d, %d\n", len, len2);
	return (0);
}
