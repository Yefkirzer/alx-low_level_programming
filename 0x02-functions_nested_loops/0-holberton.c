#include "holberton.h"
/**
 * main - prints Holberton
 *
 * Description: prints Holberton
 *
 * Return: 0 (Success)
 */
int main(void)
{
char holberton[9] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(holberton[i]);
}
_putchar('\n');
return (0);
}
