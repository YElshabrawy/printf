#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;

	int printed;
	format_t func[] = {{"c", print_char},
	                   {"s", print_str},
	                   {"%", print_mod},
	                   {"d", print_int},
	                   {"i", print_int},
	                   {"b", print_bin},
	                   {"u", print_unsigned_int},
	                   {"o", print_oct},
	                   {"p", print_addr},
	                   {"R", print_rot13},
					/*{"r", print_rev},*/ /** Error: seg fault */
					           {"x", print_he_x},
					           {"X", print_he_X},
					           {NULL, NULL}};

	if (!format)
		return (-1);

	va_start(args, format);
	printed = parser(format, func, args);
	va_end(args);

	return (printed);
}

/*
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int) INT_MAX + 1024;
	addr = (void *) 0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");

	return (0);
}
*/
