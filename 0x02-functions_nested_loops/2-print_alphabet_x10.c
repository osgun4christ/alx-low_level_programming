#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int times = 0;
	char letter;

	while (times <= 9)
	{
		letter = 'a';
			while (letter <= 'z')
			{
				_putchar(letter);
			}
			++letter;
	}
	++times;
}
