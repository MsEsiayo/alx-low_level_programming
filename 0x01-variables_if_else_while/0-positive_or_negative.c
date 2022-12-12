#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Determining whether a random number is positive or not
*
* Description: Using a statement to determine the status of a number
*
* Return: 0 for when it is sucessful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
