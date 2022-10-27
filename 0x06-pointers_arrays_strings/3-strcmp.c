#include "main.h"

/**
 * _strcmp - main entry
 * @s1: char pointer
 * @s2: char pointer
 * Description: function that compares two strings.
 * Return: integer with the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	1++;
	}
	return (0)
}
