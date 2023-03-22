#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
		for (counter = n; counter > 98; counter--)
			printf("%d, ", counter);
	}
	else
	{
		for (counter = n; counter < 98; counter++)
			printf("%d, ", counter);
	}
	printf("98\n");
}
