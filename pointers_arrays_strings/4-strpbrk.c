#include "main.h"
/**
 * _strpbrk - searches a string for any of the set of bytes
 * @s: string where search is made
 * @accept: string where serched bytes are located
 *
 * Return:  a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
