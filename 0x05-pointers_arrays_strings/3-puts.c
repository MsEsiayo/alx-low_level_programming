#include "main.h"
/**
 * _puts - function that prints a string
 * @str: declaration of str 
 * Return: Always 0.
 */
void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
write (c[m]);
}
write('\n');
}
