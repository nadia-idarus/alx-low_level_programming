#include "function_pointers.h"

/**
 * int_index - a function that searches an integer
 *  @array: pointer to array
 *  @size: size of @array
 *  @cmp: pointer to function call to check index in array
 *                 if it matches
 *  Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
