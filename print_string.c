#include "main.h"
/**
 * print_string - function to print a string
 * @string: string to be printed
 * Return: returns increment
 */
int  print_string(char *string)
{
	unsigned int i, r = 0;

	if (string)
	{
		for (; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
			r++;
		}
	}
	return (r);
}
