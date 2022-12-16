#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function that prints numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
