#include "main.h"

/**
 * puts_half - prints half for a string
 * followed by a new line
 * @str: pointer to the sting to print
 */
void puts_half(char *str)
{
	int count = 0;
	int n;

	while (str[count] != '\0')
		count++;

	n = count;

	if (n % 2 == 0)
		count = n / 2;
	else
		count = (n - 1) / 2;

	while (count < n)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar(n);
}
