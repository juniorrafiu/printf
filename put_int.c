#include "main.h"
/**
 * put_int- function to display integers
 * @n: integer to display
 * Return: return the increment r
 */
int put_int(int n)
{
	int p, r = 1;

	r++;

	if  (n == 0)
	{
		return (0);
	}
	else
	{
		p = n / 10;
	}
	put_int(p);
	_putchar((n % 10) + '0');
	return (r);
}
