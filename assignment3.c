#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() 
{
	int number1 = 10;
	int number2 = 15;

	printf("Before swap:\n");
	printf("first number = %d, second number = %d\n", number1, number2);

	swap(&number1, &number2);

	printf("After swap:\n");
	printf("first number = %d, second number = %d\n", number1, number2);

	return 0;
}
