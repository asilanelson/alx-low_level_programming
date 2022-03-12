#include <stdio.h>
/**
 * main 
 * lower case
 * return
 */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (n < 26)
	{
	      putchar(a);
	      a++;
	      n++;
	}
	putchar('\n');
	return (0);
}
