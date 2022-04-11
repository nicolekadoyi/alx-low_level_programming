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
		for (spc = '0'; spc == '0'; spc++)
		{
			putchar(',');
			putchar(' ');
			if (n  >= spc)
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
