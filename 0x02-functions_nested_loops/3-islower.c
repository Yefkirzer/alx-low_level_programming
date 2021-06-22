#include "holberton.h"
#include <ctype.h>
/**
 * _islower - checks whether a character is upper case or lowercase
 * @c: c is an ascii character
 * Return: void
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
