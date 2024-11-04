#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: pointer to the memory
 * @src: parameters
 * @n: parameters
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	{
		for (i = 0 ; i < n ; i++)

			dest[i] = src[i];
	}

	return (dest);

}
