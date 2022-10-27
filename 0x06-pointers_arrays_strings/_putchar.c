#include <unistd.h>
#include "main.h"

 /**
 * _putchar - the entry point of program
 * description: character data type
 * Return: always (0), success
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
