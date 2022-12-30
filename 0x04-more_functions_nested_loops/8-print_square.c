#include "main.h"

/**
* print_square - draws a square
* @size: length by breath of square
* Return: void
*/

void print_square(int size)
{
	int length;
	int breath;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (breath = 0; breath < size; breath++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
