#include <stdarg.h>
#include "main.h"
int printstring (va_list args)
{
	int i = 0;

	while (args[i])
	{
		putchar(args[i]);
		i++;
	}
}

int printnumber (va_list args)
{
	int i = va_list args;

	if (i < 0)
	{
		putchar('-');
		i = - i;
	}
	if (i/10)
	{
		printnumber(i/10);
		_putchar(i%10 + '0');
	}
	


}
