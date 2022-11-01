#include "main.h"

/**
 * _memcpy - a fuction that copies memory area.
 * @dest: memory area
 * @src: source
 * @n: value n bytes
 *
 * Return: (dest)
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
