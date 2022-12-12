#include <stdio.h>

/**
* main - To print the alphabet in lowercase.
*
* Description: Using the putchar function and a for loop.
*
* Return: 0 Whenever it is a sucess
*/

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
