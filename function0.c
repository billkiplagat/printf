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
* handle_integer - function to print strings
* @count: pointer to counter
* @args: argument list
* @base: base 10
*
*/
void handle_integer(va_list args, int *count, int base)
{
char str [65];
char *ptr;

ptr = int_to_stra(va_arg(args, int), str, base);
handle_string(ptr,  count);
}
/**
* int_to_stra - function to handle integers
* @num: arguments input
* @str: string pointer
* @base: standard base
*
* Return: str
*/
char *int_to_stra(long int num, char *str, int base)
{
int i = 0, len, j;
int is_negative = 0, digit;
if (num < 0 && base == 10)
{
is_negative = 1;
num = -num;
}
do {
digit = num % base;
str[i++] = (digit > 9) ? 'a' + digit - 10 : '0' + digit;
num /= base;
} while (num != 0);
if (is_negative)
{
str[i++] = '-';
}
str[i] = '\0';
len = strlen(str);
for (j = 0; j < len / 2; j++)
{
char temp = str[j];
str[j] = str[len - j - 1];
str[len - j - 1] = temp;
}
return (str);
}
