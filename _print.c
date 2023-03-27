#include "main.h"

/**
 * _printf - implements the printf function
 * @format: A string constant
 * Return: An integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char ch, *str;

	va_start(args, format);
	while ((ch = *format++) != '\0')
	{
		if (ch == '%')
		{
			ch = *format++;
			switch (ch)
			{
			case 'c':
				handle_char(args, &count);
				break;
			case 's':
				str = va_arg(args, char *);
				handle_string(str, &count);
				break;
			case 'i': case 'd':
				handle_integer(args, &count);
				break;
			case '%':
				handle_percent(&count);
				break;
			default:
				putchar('%');
				putchar(ch);
				count += 2;
				break;
			}
		}
		else
		{
			putchar(ch);
			count++;
		}
	}
	va_end(args);
	return (count);
}
