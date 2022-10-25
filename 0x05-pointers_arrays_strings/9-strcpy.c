#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by sr
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @src: string to be copied from
 * @dest: String to copy to
 * Return: Nothing
 */



char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		while (*(src + i) != '\0')
			i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
