#include <stdarg.h>
#include "main.h"
int printstring (va_list args)
{
	char i = va_arg(args, int);

	while (i)
	{
		putchar(args[i]);
		i++;
	}
	return (0);
}

int printnumber (va_list args)
{
	int i = va_arg(va_list int);

	if (i < 0)
	{
		_putchar('-');
		i = -i;
}
int putnumber (va_list args)
{
	if (i / 10)
	{
		putnumber (i /10);
		_putchar (i % 10 + '0');
	}
	return (i);
}
