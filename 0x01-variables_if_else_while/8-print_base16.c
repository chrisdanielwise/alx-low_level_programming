#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int i;

	for (i = '0'; i <= '9'; i++)

		putchar(i);

	for (ch = 'a'; ch <= 'f'; ch++)

		putchar(ch);

	putchar('\n');

	return (0);
}
