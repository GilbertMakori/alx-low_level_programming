#include "main.h"

/**
 *  _strcat - concatenate two strings
 *  @dest: char string to concatenate to
 *  @src: char string
 *  Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}