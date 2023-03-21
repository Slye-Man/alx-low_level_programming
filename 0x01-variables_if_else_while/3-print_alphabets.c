#include <stdio.h>
#include <ctype.h>

/*
 *  main - Print alphabet letters
 *
 *  Return: 0
 *
 */

int main(void)
{
	for (int letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

