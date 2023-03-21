#include <stdio.h>

/**
 * main - Prints alphates in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char x = 'a';
	char y = '\n';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar(y);
	return (0);
}
