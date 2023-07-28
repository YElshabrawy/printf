#include "main.h"


/**
 * _printf - custom print function that prints formatted output to stdout
 * @format: format string containing the text to be printed along with any
 *          format specifiers
 * @...: variable number of arguments to be printed according to the format
 *       string
 *
 * Return: the number of characters printed on success, or -1 on failure
 */
int _printf(const char *format, ...)
{
	va_list args;

	int printed;
	format_t func[] = {{"c",  print_char},
	                   {"s",  print_str},
	                   {"%",  print_mod},
	                   {"d",  print_int},
	                   {"i",  print_int},
	                   {"b",  print_bin},
	                   {"u",  print_unsigned_int},
	                   {"o",  print_oct},
	                   {"p",  print_addr},
	                   {"R",  print_rot13},
	                   {"S",  print_Str},
					           {"x",  print_he_x},
					           {"X",  print_he_X},
					           {NULL, NULL}};

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);
	printed = parser(format, func, args);
	va_end(args);

	return (printed);
}
