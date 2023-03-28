#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...);
void handle_char(va_list args, int *count);
void handle_string(char *, int *count);
void handle_unsigned_int(va_list args, int *, int);
char *int_to_str(unsigned int num, char *str, int base);
char *int_to_stra(long int num, char *str, int base);
void handle_default(char, int *);
void handle_percent(int *count);
void handle_integer(va_list args, int *count, int base);
void handle_pointers(va_list args, int *count, int base);
int _putchar(char);
int mainBuffer();
int printf_string(const char *format, ...);
#endif
