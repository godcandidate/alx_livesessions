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

	printf("nums size is %ld\n", sizeof(nums));
	printf("nums[0] size is %ld\n", sizeof(nums[0]));

	printf("nums address is %p\n", &nums);
	printf("nums[0] address is %p\n", &nums[0]);
	printf("pointer of nums size is %ld\n", sizeof(&nums));
	return (0);
}
