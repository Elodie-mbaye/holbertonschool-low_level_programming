#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer to the array
 * @array: The array to through
 *  @size: The size of elements in the array
 * @cmp: Pointer to the function to be used compare values
 *Return: The index of the first matching element, or -1 if no match or
 * invalid inputIf no element matches or if size <= 0, returns
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
