#include "main.h"
/**
 * print_alphabet_x9 - prints the alphabet nine times
 */
void times_table(void)
{
	int count =0;
	char ch;

	while (count <= 9)
	{
		for (ch = 0; ch <= 9; ch++)
		{	
			_putchar(ch);
		_putchar('\n');
		}
		count++;
	}
}
