#include <stdio.h>

int main()
{
	/*
	// question 1(multiplication table)

	int num, i, result;
	printf("Enter a number:");
	scanf("%d",&num);
	
	for(i=1; i <= 10; i++)
	{

		result = num * i;
		printf("%d x %d = %d\n", i,num,result);
	} 
	*/

	//question 2 ( sum of odd numbers)
	/*
	int num, i, total;
	printf("Enter a limit: ");
	scanf("%d",&num);
	total = 0;

	for ( i = 1; i <= num; i++)
	{
		total = (total + i);
		i++;
	}
	printf("Sum of odd numbers = %d", total);	
	return (0);
	*/

	//question 3 ( neested loop)
	int num, i,j;
	printf("enter a number: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
} 