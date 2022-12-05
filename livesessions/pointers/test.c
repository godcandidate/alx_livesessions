#include <stdio.h>

void foo(int *);

int main(void)
{
	int x;

	x = 10;

	foo(&x);

	printf("x = %d\n", x);

	return (0);
}

void foo(int *a)
{
	*a = 20;

}
