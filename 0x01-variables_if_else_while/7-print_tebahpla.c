#include <stdio.h>

/**
* main - A program that prints the alphabets in reverse.
*
* Description: Using the for loop to print the alphabets in reverse
*
* Return: 0 whenever the program is sucessful
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
