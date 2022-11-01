#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: input pointer to char type
 * @b: input variable of char type
 * @n: unsigned int variable
 * Return: (S)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
