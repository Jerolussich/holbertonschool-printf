#include <stdarg.h>
#include "main.h"
int printstring (va_list args)
{
	char *i = va_arg(args, char *);
	int j = 0;

	while (i[j])
	{
		putchar(i[j]);
		j++;
	}
	return (0);
}
int printnumber (va_list args)
{
	int i = va_arg(args, int);

	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	else
		putnumber(i);

	return (0);
}
int putnumber (int number)
{
	if ((number / 10) > 0)
	{
		putnumber(number / 10);
		_putchar (number % 10 + '0');
	}
	return (number);
}
