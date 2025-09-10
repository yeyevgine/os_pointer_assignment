#include <stdio.h>

int main() 
{
	int number = 5;
	int* p_number = &number;

	printf("The addres of the number is:  %p\n", &number);
	printf("The value of the p_number is: %p\n", p_number);

	*p_number = 10;
	
	printf("The new value of number %d\n", number);

	return 0;
}

