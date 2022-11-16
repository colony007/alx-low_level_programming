#include <unistd.h>

/**
 * _putchar - entry point
 * description: writes the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
 int _putchar(char c)
 {
	return (writes(, &c, 1));
 }
