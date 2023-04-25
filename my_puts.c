#include "main.h"
/**
 * my_puts - function to return char string
 * @string: char to be checked
 * Return: return increment r
 */
int  my_puts(char *string)
{
	unsigned int i, r = 0;

	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
			r++;
		}
	}
	_putchar('\n');
	return (r);
}
