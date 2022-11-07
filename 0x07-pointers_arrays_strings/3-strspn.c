#include "main.h"

/**
 *  _strspn - entry point of function
 * description: a function that gets the length of a prefix substring.
 * @s: char pointer
 * @accept: char variable
 * Return: the number of byte in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (k);
	}
	return (k);
}
