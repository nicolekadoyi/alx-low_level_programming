#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, spc;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		do
		{
			putchar(n + ',');
			putchar(n + " ");
			spc++;
		}
		while (n <= '9');
	}
	putchar('\n');
	return (0);
}
