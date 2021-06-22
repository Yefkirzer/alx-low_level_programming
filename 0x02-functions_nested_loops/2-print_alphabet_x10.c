#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
  char c = 'a';
  int i = 0;
  for (i = 0; i<11; i++)
    {
  for (c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
    }
  _putchar('\n');
}
