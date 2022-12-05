#include "main.h"
#include <stdio.h>

#define TABLE BUFF_SIZE
#define BUFF_SIZE 2048
#undef BUFF_SIZE
#define BUFF_SIZE 1048


int main(void)
{
	int radius = 10;


	printf("Table : %d\n", TABLE);
	printf("Buff size : %d\n", BUFF_SIZE);
	return (0);
}

