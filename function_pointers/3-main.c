#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
* main - program to perform simple operations
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return:exits 0 normally, 98 on argc error, 99 on illegal operator
*/
int main(int argc, char *argv[])
{
	int a, b, calc;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == 47 || argv[2][0] == 37))
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(argv[2])(a, b);

	printf("%d\n", calc);
	return (0);
}
