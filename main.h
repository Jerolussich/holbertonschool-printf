#ifndef main_h
#define main_h
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * 
 * 
 * 
 */
typedef struct list
{
	char *cs;
	int (*f)(va_list args);
} list_t;

int _putchar(char c);

int _printf(const char *format, ...);

int help(va_list args, char c);

int printstring(va_list args);

int pp(va_list args);

int printnumber(va_list args);

int pna(int n);

#endif
