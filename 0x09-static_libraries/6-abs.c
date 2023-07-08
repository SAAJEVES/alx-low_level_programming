#include "main.h"

/**
  *_abs - Entry point
  *@c: the character to be checked
  *Return: Absloute value of a number or 0
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
