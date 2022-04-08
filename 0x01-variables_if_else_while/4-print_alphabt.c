#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == 'e')
		{
			continue;
		}
		else if (chr == 'q')
		{
			continue;
		}
		else
		{
			putchar(chr);
		}
	}
	putchar('\n');
	return (0);
}
