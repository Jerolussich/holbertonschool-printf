#include "main.h"
/**
 * 
 * 
 * 
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, counter = 0;

	
	if (!format || !strcmp(format, "%"))
		return (-1);
	
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			counter++;
		}
		else if (format[i] == '%')
		{
			counter += help(args, format[i + 1]);
			i++;
		}
		else
		{
			counter += 1;
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (counter);
}
/**
 * 
 *
 * 
 * 
 */
int help(va_list args, char c)
{
	int j = 0;
	list_t list[] = {
		{ "c", pc },
		{ "s", ps },
		{ "%", pp },
		{ "d", pn },
		{ "i", pna }
	};
	while (j < 5)
	{
		if (*list[j].cs == c)
		{
			return (list[j].f(args));
		}
		j++;
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
