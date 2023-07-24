#include "main.h"

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
