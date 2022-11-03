#include "main.h"

/**
 * _print_rev_recursion(char *s) - entry point of function
 * description: a function that uses recursion
 * to print a string in reverse
 * @s: string s
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
