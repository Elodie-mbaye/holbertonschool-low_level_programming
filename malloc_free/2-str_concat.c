#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory containing
 * s1 followed by s2,or NULL if the memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat_str[i + j] = s2[j];
	}
	concat_str[i + j] = '\0';

	return (concat_str);
}
