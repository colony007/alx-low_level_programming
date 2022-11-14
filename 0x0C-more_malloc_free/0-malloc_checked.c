#include "main.h"
/**
 * malloc_checked - entry point of function
 * description: the number of bytes to be allocated
 * @b: the number of bytes to be allocated
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}

return (p);
}
