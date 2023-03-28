#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_cent(va_list args);

/**
 * struct func - struct for specifier to print to character
 * @t: character to print
 * @f: handles printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif
