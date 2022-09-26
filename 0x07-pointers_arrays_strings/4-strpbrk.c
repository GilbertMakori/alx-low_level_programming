#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: pointer
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				return (s + i);
			}
		}
	}
	return (s + i);
}
