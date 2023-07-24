#include "main.h"

/**
 * _printf - prints a format
 * @format: string
 * Return: int
*/
int _printf(const char *format, ...)
{
	va_list args;

	int printed;
	format_t func[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_mod},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsigned_int},
		{"o", print_oct},
		{"p", print_addr},
		{"R", print_rot13},
		{"S", print_Str},
	/*{"r", print_rev},*/ /** Error: seg fault */
				{"x", print_he_x},
				{"X", print_he_X},
				{NULL, NULL}
				};

	if (!format)
		return (-1);

	va_start(args, format);
	printed = parser(format, func, args);
	va_end(args);

	return (printed);
}
