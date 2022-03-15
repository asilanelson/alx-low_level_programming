#include "main.h"

/**
 * main - check the code for ALX School studnts.
 *
 * Program that prints _putchar, followed by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		-putchar(s[i]);
		i++
	}
	-putchar(10);

	return (0);
}
