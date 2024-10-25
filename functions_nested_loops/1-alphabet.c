#include "main.h"

/**
 * main - prints the alphabets in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);

		if (c == 122)
		{
			_putchar('\n');
		}
	}	
}
