#include "main.h"

/**
 * _strlen_recursion - entry point of function
 * description: a function that returns the length of a string
 * @s: string parameter
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
