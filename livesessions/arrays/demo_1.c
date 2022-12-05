#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nums[3];

	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;

	nums[2] = 100;


	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", nums[i]);
	}

	return (0);
}
