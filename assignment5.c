#include <stdio.h>

int main()
{
	char str[] = "Hello";
	char* p_str = str;

	printf("The string printed using pointer: \n");
	while (*p_str != '\0') {
		printf("%c", *p_str);
		++p_str;
	}
	printf("\n");

	int strSize = 0;
	p_str = str;

	while (p_str < (str + sizeof(str) - 1)) {
		++strSize;
		++p_str;
	}
	printf("Size of str is: %d\n", strSize);

	return 0;
}
