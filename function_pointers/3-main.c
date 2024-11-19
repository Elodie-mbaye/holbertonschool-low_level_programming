#include <stdlib.h>
#include "3-calc.h"
 /**
  * main - Performs simple operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or exit with the appropriate status code
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(100);
	}
	result = operation(num1, num2);

	if (result < 0)
		_putchar('-');
	result = -result;

	if (result / 10)
		_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
		_putchar('\n');

		return (0);
}
