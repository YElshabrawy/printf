# Custom printf function

This is a custom implementation of the printf function in C. It supports all the standard format specifiers, as well as
some additional features.

# Supported format specifiers

| Format Specifier | Description                                               |
|------------------|-----------------------------------------------------------|
| `%%`             | Prints a percent sign                                     |
| `%c`             | Prints a single character                                 |
| `%s`             | Prints a string of characters                             |
| `%d`             | Prints a decimal number                                   |
| `%i`             | Prints an integer in base 10 (Decimal)                    |
| `%b`             | Prints a binary number                                    |
| `%u`             | Prints an unsigned integer                                |
| `%o`             | Prints a number in base 8 (Octal)                         |
| `%x`             | 	Prints a hexadecimal in lowercase                        |
| `%X`             | Prints a hexadecimal in uppercase                         |
| `%S`             | Prints a string with hex values of non-visible characters |
| `%r`             | Prints a reversed string                                  |
| `%R`             | Prints the Rot13 interpretation of a string               |

# Additional features

- ### Customizable width option

To print a number with a certain (minimum)width, say 5 spaces wide, the format specifier is %5d .Here are some sample
cases and results.
(We willuse the _ symbol to explicitly indicate a space.)

| printf                | produces    |
|-----------------------|-------------|
| `("%5d", 0)`          | _ _ _ _ _ 0 |
| `("%5d", 1560133635)` | 1560133635  |

- ### Plus Signs

To print the ouput number with a `+` sign

| printf       | produces |
|--------------|----------|
| `("%+d", 3)` | +3       |

- ### Hash sign

To print the output to be prefixed with '0'

# Compilation

To compile the _printf function along with the other source files, we can use the following command:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c; ./a.out
```

# Examples

Here are some examples of how to use the `_printf()` function:

```
#include "_printf.h"

int main(void)
{
    void *addr = (void *) 0x7ffe637541f0;;

    _printf("%c\n", "c"); // c
    _printf("%s\n", "c is fun"); // c is fun
    _printf("%%\n"); // %
    _printf("%d\n", 12345); // 12345
    _printf("%i\n", 12345); // 12345
    _printf("%b\n", 98); // 1100010
    _printf("%S\n", "c is\nfun"); // is is\x0Afun
    _printf("%p\n", addr); // 0x7ffe637541f0

    return (0);
}
```
