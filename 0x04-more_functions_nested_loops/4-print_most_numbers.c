#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
  int num = 0;

  while (num <= 9)
    {
      if (num == 4 || num == 2)
	{
	  num++;
	  continue;
	}
      _putchar(num + '0');
      num++;
    }
  _putchar('\n');
}
