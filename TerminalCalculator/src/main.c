#include <stdio.h>

int main()
{
	int num1, num2, sum;
	printf("enter 2 numbers: ");
	scanf("%d%d", &num1, &num2);
	sum = (num1 + num2);
	printf("The sum of the numbers you entered is : %d", sum);

	return (0);
}