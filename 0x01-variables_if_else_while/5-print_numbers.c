#include <stdio.h>

/**
* main - Printing single digits in base ten.
*
* Description: A program that uses for loop and the printf function.
*
* Return: 0 whenever the program is sucessful.
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);

}
