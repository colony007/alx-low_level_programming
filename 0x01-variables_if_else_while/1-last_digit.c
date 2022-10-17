#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 * description:  program will assign a random
 * number to variable
 * Return: success
 */
/* betty style doc for function main goes there */
int main(void)
{

        int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n%10;
        if (n > 5)
	printf("Last digit of n is %d and is greater than 5\n", a);
	else if (n == 0)
	printf("Last digit of n is %d and is 0\n", a);
	else if (n < 6) 
        printf("Last digit of n is %d and is less than 6 and not 0\n", a);
	return (0);

}
