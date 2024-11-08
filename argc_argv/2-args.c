#include <stdio.h>

/**
 * main -  prints all arguments it receives
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 9 if succeful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
