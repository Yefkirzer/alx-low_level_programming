#include "holberton.h"
/**
 * print_alphabet - 'ur description goes here'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
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
