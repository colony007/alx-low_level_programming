#include "main.h"

/**
 * _strpbrk - entry point of function
 * description: function that searches a string for any set of bytes
 * @s: string
 * @accept: char variable
 * Return: a pointer to byte in s or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
