#include <stdio.h>

int main()
{
	int number = 10;
	int* p_number = &number;
	int** dp_number = &p_number;

	printf("The value of number using variable: %d\n", number);
	printf("The value of number using pointer: %d\n", *p_number);
	printf("The value of number using double pointer: %d\n", **dp_number);

	return 0;
}
