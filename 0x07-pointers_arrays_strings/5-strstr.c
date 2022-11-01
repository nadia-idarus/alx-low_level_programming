#include "main.h"

/**
 * _strstr - locating a substring
 * @haystack: source
 * @needle: the string to find
 * Return: (\0)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;

	}
	return ('\0');
}
