#include "main.h"
/**
 * mainBuffer - function to allocate buffer and call write
 *
 * Return: 0
 */
int mainBuffer(void)
{
char buffer[1024];
int len, i;
const char *message = "Hello, world!\n";
int message_len = strlen(message);
for (i = 0; i < message_len; i += len)
{
len = message_len - i;
if ((unsigned long)len > sizeof(buffer))
{
len = sizeof(buffer);
}
strncpy(buffer, message + i, len);
write(STDOUT_FILENO, buffer, len);
}
return (0);
}
