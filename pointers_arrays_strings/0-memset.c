#include "main.h"
/**
 * _memset - Fills memory with a constant byte;
 * @s: pointer to the memory
 * @b: parameters
 * @n: parameters
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	{
		for (x = 0 ; x < n ; x++)

		s[x] = b;
	}

	return (s);

}
