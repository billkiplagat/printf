#include "main.h"
/**
 * handle_default - prints a string
 * @ch: ...
 * @count: Number of characters printed
 */
void handle_default(char ch, int *count)
{
	putchar('%');
	putchar(ch);
	*count += 2;
}
