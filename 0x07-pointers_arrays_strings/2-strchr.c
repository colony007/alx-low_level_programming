#include "main.h"

/**
 **_strchr - main entry of the function
 * description: function that locates a character in a string
 *@s: a char pointer
 *@c: char variable
 * Return: a pointer to the first char c or NULL
 * if nott found
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
