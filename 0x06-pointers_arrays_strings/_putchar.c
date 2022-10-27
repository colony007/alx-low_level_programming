#include <unistd.h>
#include "main.h"
/**
 * _putchar - entry point of the function
 * @c: character parameter
 * Return: always (0) success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
