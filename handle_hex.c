#include "main.h"

/**
 * handle_pointers - prints a string
 * @args: ...
 * @base: ...
 * @count: Number of characters printed
 */
void handle_hex(va_list args, int *count, int base)
{
	char str[65];
	char *ptr;
	void *n = va_arg(args, void *);

	putchar('0');
	putchar('x');
	*count += 2;
	ptr = int_to_str1((long int)n, str, base);
	handle_string(ptr,  count);
}
