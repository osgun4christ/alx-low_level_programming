#include <stdio.h>
#include "main.h"

/**
 *main - Prints  prints the alphabet, in lowercase
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		++letter;
	}

	_putchar('\n');

}
