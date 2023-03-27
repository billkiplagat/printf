#include "main.h"

/**
 * handle_string - prints a string
 * @ptr: Address of the string
 * @count: Number of characters printed
 */
void handle_string(char *ptr, int *count)
{
	while (*ptr)
	{
		_putchar(*ptr++);
		(*count)++;
	}
}
