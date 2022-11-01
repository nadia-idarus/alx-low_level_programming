#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: matrix
 *  Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int i, sq1, sq2;

	sq1 = 0;
	sq2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sq1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sq2 += a[i];
	}
	printf("%d, %d\n", sq1, sq2);
}
