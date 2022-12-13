#include <stdio.h>

/**
* main - Printing all possible single digit values
*
* Description: Using the putchar function to print some values
*
* Return: 0 whenever the program is sucessful
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
