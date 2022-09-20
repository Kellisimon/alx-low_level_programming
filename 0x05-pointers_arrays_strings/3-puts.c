#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

void _puts(char *str)
{
	int i = 0, strln = 0;

	strln = _strlen(str);
	for ( ; i <= (strln - 1); i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
