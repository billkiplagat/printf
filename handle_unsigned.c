#include "main.h"
/**
 * handle_unsigned - prints a string
 * @base: ...
 * @count: Number of characters printed
 * @args: ....
 */
void handle_unsigned(va_list args, int *count, int base)
{
	char str[65];
	char *ptr;

	ptr = int_to_str(va_arg(args, int), str, base);
	handle_string(ptr,  count);
}
