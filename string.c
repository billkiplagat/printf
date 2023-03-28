#include "main.h"
/**
 * printf_string - function to handle S
 * @format: pointer to a formart S
 * Return: count
 */
int printf_string(const char *format, ...)
{
int count = 0, i, j;
va_list args;
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%' && format[i + 1] == 'S')
{
char *s = va_arg(args, char *);
for (j = 0; s[j]; j++)
{
if (s[j] < 32 || s[j] >= 127)
{
printf("\\x%02X", (unsigned char)s[j]);
count += 4;
}
else
{
putchar(s[j]);
count++;
}
}
i++;
}
else
{
putchar(format[i]);
count++;
}
}
va_end(args);
return (count);
}
