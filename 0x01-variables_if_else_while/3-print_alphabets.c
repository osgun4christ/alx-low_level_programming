#include <stdio.h>

/**
 *main - print lower and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
