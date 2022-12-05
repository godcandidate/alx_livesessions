#include <stdio.h>

struct Person{
	char *name;
	char *job;
	int age;
};

int main(void)
{
	struct Person person1;

	struct Person *person_ptr;

	person_ptr = &person1;

	person1.name = "Valley";
	person1.job = "Software Engineer";
	person1.age = 64;

	printf("Person1 name: %s\n", (*person_ptr).name);
	printf("Perspn1 job : %s\n", person_ptr->job);
	printf("Perspn1 age : %d\n", person1.age);

	return (0);
}
