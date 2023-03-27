#include <string.h>
#include "main.h"
/**
* handle_char - function to print chars
* @args: list of arguments
* @count: pointer to counter
*
*/
void handle_char(va_list args, int *count)
{
char c = (char) va_arg(args, int);
putchar(c);
(*count)++;
}
/**
* handle_string - function to print strings
* @count: pointer to counter
* @ptr: pointer to a string
*
*/
void handle_string(char *ptr, int *count)
{
while (*ptr)
{
putchar(*ptr++);
(*count)++;
}
}
/**
* int_to_str - function to handle integers
* @num: arguments input
* @str: string pointer
* @base: standard base
*
* Return: str
*/
char *int_to_str(int num, char *str, int base)
{
int i = 0;
int is_negative = 0, digit;
if (num < 0 && base == 10)
{
is_negative = 1;
num = -num;
}
do {
digit = num % base;
str[i++] = (digit > 9) ? 'A' + digit - 10 : '0' + digit;
num /= base;
} while (num != 0);
if (is_negative)
{
str[i++] = '-';
}
str[i] = '\0';
int j = 0;
int len = strlen(str);
for (j; j < len / 2; j++)
{
char temp = str[j];
str[j] = str[len - j - 1];
str[len - j - 1] = temp;
}
return (str);
}
