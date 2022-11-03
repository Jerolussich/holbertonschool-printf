#include "main.h"

void character(char *string)
{
	int i = 0;

	for (; *string[i]; i++)
	{
		_putchar(string[i]);
	}
}
