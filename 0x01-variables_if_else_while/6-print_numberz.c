#include <stdio.h>

/**
 * main - Prints numbers 0 to 9
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
		int i = '0';

		while (i <= '9')
		{
			putchar(i);


			i++;
		}

		putchar('\n');
	return (0);
}
