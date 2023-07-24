#include "main.h"

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
