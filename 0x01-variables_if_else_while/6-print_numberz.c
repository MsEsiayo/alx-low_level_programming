#include <stdio.h>

/**
* main - A program that prints the numbers in base ten
*
* Description: Using a for loop to print in digits
*
* Return: 0 whenever the program is sucessful
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
