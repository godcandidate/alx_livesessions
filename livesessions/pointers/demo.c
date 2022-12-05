#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0
 */
void change(int *a)
{
	*a = 50;
}

int main(void)
{
	int *ptr;
	int num = 10;

	ptr = &num;
	printf("Value of num before is %d\n", num);

	change(ptr);

	printf("Value of num after change is %d\n", num);

}
