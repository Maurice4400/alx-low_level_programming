#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*betty style doc for function main goes there */

/**
 *
 *
 *
 *main - entry point
 *
 *if the number is less than 0: is negative, followed by a new line
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the program goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
