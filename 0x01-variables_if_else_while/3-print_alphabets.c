#include <stdio.h>

/**
* main - To print the alphabets in both lower and uppercase.
*
* Description: A program to print a string in both lowercase and uppercase.
*
* Return: 0 whenever the program is sucessful.
*/

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);

}
