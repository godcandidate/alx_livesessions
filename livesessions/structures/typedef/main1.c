#include <stdio.h>

struct Person{
	char *name;
	char *job;
	int age;
};

typedef struct Person Person;

int main(void)
{
	Person person1;

	person1.name = "Valley";
	person1.job = "Software Engineer";
	person1.age = 64;

	printf("Person1 name: %s\n", person1.name);
	printf("Perspn1 job : %s\n", person1.job);
	printf("Perspn1 age : %d\n", person1.age);

	return (0);
}
