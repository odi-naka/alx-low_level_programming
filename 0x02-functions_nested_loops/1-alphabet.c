#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - the function that prints a to z in lowercase
 *
 * Description - prints the alphabet in lowercase in a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
