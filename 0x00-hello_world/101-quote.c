#include <stdio.h>
#include <unistd.h>


/**
* main - Printing a text to stand error
*
* Description: Printng a text string
*
* Return: (1)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 65);
	return (1);
}
