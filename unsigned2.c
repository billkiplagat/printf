#include "main.h"

/**
 * int_to_str - prints string
 * @num: ...
 * @str: ...
 * @base: ...
 * Return: ...
 */
char *int_to_str1(unsigned int num, char *str, int base)
{
	int i = 0, j, len;
	unsigned int digit;
	char temp;

	if (base < 2 || base > 36)
		return (NULL);
	if (str == NULL)
		return (NULL);
	do {
		digit = num % base;
		str[i++] = (digit > 9) ? 'a' + digit - 10 : '0' + digit;
		num /= base;
	} while (num != 0);
	str[i] = '\0';
	len = strlen(str);
	for (j = 0; j < len / 2; j++)
	{
		temp = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = temp;
	}
	return (str);
}
