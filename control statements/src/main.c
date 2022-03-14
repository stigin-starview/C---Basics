#include <stdio.h>

int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d", &num);
	if (num > 10)
	{
		printf(" the number you entered is greater then 10 ");
	}
	else if(num == 10)
	{
		printf("the number you entered is equal to 10 ");
	}
	else
	{
		printf(" then number you entere is less than 10 ");
	}
	

	return (0);
}