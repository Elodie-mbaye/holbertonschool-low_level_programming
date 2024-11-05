#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: The number of bytes in the initial segment of s  which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (x = 0; accept[x] != '\0'; x++)
			{
				if (s[i] == accept[x])
					r++;
			}
		}
		else

		return (r);
	}
	return (r);
}
