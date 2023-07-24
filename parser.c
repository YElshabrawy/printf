#include "main.h"

/**
 * parser - prints
 * @format: ..
 * @func_list: ...
 * @arg_list: ...
 * Return: int
*/
int parser(const char *format, format_t func_list[], va_list arg_list)
{
	int printed, i, j, conversion_res;

	printed = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].ch != NULL; j++)
			{
				if (format[i + 1] == func_list[j].ch[0])
				{
					conversion_res = func_list[j].f(arg_list);

					if (conversion_res == -1)
						return (-1);

					printed += conversion_res;
					break;
				}
			}
			if (func_list[j].ch == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					conversion_res += 2;
				} else
				{
					return (-1);
				}
			}
			i++;
		} else
		{
			_putchar(format[i]);
			printed++;
		}
	}
	return (printed);
}
