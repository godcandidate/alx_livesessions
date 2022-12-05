#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void change(char *c)
{
	c[0] = 'H';
}
int main(void)
{
	char *letters = "art";

	printf("Before : %s\n", letters);

	change(letters);

	printf("After : %s\n", letters);
	return (0);
}
