#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

void handle_char(va_list args, int *count);
void handle_string(char *, int *count);
char *int_to_str(int num, char *str, int base);
void handle_percent(int *count);
void handle_integer(va_list args, int *count);
#endif
