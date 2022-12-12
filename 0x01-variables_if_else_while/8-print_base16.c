#include <stdio.h>

/**
* main - Printing the digits of the base sixteen
*
* Description: A program that prints the digits available in the hexadec sys
*
* Return: 0 Whenever the program is sucessful
*/

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
