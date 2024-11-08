#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argv: an array of strings containing the arguments (not use here)
 * @argc: the number of argument
 *
 * Return: 0 if succeful
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
