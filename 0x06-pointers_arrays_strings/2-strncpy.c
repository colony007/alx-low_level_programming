#include "main.h"

/**
 * _strncpy - function that copies
 * @dest: copy to destination
 * @src: copy from source
 * @n: number of char to be copied
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	{
	while (i < n)
	}
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
