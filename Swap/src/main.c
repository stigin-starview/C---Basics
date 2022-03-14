#include <stdio.h>

int main()
{
	int a = 4, b = 10;

	printf("numbers before swapping: \n A = %d, B = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("numbers after the swap: \n A = %d, B = %d", a, b);

	return (0);
}