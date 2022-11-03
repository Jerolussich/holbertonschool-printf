#include "main.h"
#include <stdio.h>
/**
 *_printf - printf function
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list object;
	int i = 0;
	int j = 0;
	
	va_start(object, format);
	
	if (format)
	{
		for (j = 0; format[j]; j++)
		{
			if (format[j] == "%" && (format[j + 1] == "s" && format[j + 1] == "c"))
				break;
			else
				_putchar(format[j]);
		}
		
		while (format[j])
		{
			switch (format[j])
			{
			case 'c':
				character(*format);
				break;
			case '':
			}
		}
