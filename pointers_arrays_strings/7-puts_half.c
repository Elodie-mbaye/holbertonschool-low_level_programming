#include "main.h"

/**
 * puts_half - prints half for a string
 * followed by a new line
 * @str: pointer to the sting to print
 */
void puts_half(char *str)
{
	int count = 0;
	int n = 0;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	while (n < count)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(n);
}
