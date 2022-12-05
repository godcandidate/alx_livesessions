#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nums[3] = {23, 34, 54};
	char  letters[3] = {'a', 'r', 't'};

	printf("%c\n", *(letters + 0));

	return (0);
}
