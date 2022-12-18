#include "main.h"

/**
* _islower - checks for lowercase
*
* @c: Where c is an alpha character
*
* Description: Program to return diff val depending on the num
*
* Return: Depends on the status of letter
*/

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
