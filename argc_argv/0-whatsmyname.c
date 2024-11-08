#include <stdio.h>

/**
 * main - displays the program name
 * @argc: the number of arguments(not use here)
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if succeful
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
