#include <stdio.h>

int main()
{
	int array[] = {3, 6, 8, 5, 9};

	printf("Printing elements of the array:\n");
	for (int* p_number = array; p_number < (array + sizeof(array) / 4); ++p_number) {
		printf("%d\n", *p_number);
	}
	
	for (int* p_number = array; p_number < (array + sizeof(array) / 4); p_number++) {
		*p_number = *p_number - 4;
	}
	
	printf("\nPrinting modified elements of the array using pointer:\n");
	for (int* p_number = array; p_number < (array + sizeof(array) / 4); p_number++) {
		printf("%d\n", *p_number);
	}

	printf("\nPrinting modidfied elements of the array using the array name:\n");
	for (int i = 0; i < (sizeof(array) / 4); ++i) {
		printf("%d\n", *(array + i));
		
	}

	return 0;
}
