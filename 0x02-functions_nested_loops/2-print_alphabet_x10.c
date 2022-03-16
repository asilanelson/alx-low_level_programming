#include "main.h"

/**
 * print_alphabet_x10 -prints out alphabet 10 times
 *
 * Return: alwoys void
 */
void print_alphabet_x10(void)
{
	char m;
	int x;

	for (x = 0; x < 10; x++)
	{

		for (m = 'a'; m <= 'z'; m++)
			putchar(m);


		putchar('\n');
	}
}
