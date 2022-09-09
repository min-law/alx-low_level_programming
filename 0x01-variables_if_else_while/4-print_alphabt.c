#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/corrrect)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar (alphabet);
	}

	put char ('\n');

	return (0);

}
