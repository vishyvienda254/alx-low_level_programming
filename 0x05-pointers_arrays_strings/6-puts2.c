#include "main.h"

/**
 * puts2 - prints one character out of two in a string
 * @str: string to be tested
 * Return: void
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((n % 2) == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
