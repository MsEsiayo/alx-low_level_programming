#include <stdio.h>

/**
* main - Printing all alphabets expect q and e
*
* Description: Using a for loop to create an exception when printing
*
* Return: 0 whenever the program is sucessful
*/

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);

}
