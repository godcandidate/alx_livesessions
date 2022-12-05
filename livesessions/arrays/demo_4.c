#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nums[2][2] = {{1, 2}, {3, 4}};

	printf("%d\n", nums[1][1]);
	printf("%d\n", *(*(nums + 1) + 1));

	return (0);
}
