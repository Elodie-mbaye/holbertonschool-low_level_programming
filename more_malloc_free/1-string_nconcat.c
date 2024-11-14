#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: The first string
 * @s2: the second string
 * @n: the number of characters of S2 to add to S1
 * Return: char
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	concat_str = malloc(len1 + n + 1);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (i = 0; i < n; i++)
		concat_str[len1 + i] = s2[i];

	concat_str[len1 + n] = '\0';

	return (concat_str);
}
