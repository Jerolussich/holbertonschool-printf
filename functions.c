#include "main.h"
/**
 * 
 * 
 * 
 */
int pc(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * 
 * 
 * 
 */
int ps(va_list args)
{
	char *string = va_arg(args, char *), *null = "(null)";
	int len, i;

	if (string == NULL)
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
		return (6);
	}
	else
	{
		len = strlen(string);
		for (i = 0; i < len; i++)
		{
			_putchar(string[i]);
		}
		return (len);
	}
}
/**
 * 
 * 
 * 
 */
int pp(va_list args)
{
	char *string;
	int i;

	string = va_arg(args, char*);
	i = 0;

	while (string[i])
	{
		if (string[i] == '%')
		{
			_putchar('%');
			return (1);
		}
	}
	return (0);
}
/**
 * 
 * 
 * 
 */
int pn(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		return (pna(-n) + 1);
	}
	else
	{
		return (pna(n));
	}
}
/**
 * 
 * 
 * 
 */
int pna(unsigned int n)
{
	int c = 0;

	if (n / 10 != 0)
	{
		c = pna(n / 10);
	}
	return (_putchar((n % 10) + '0') + c);
}
