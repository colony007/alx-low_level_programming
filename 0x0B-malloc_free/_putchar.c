#include <unistd.h>

/**
 * _putchar - entry point of character
 * description: a program that writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char)
{
return (writes(1, &c, 1));
}
