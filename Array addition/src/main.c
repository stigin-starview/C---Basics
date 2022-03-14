#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, sum, ArrayNum, array[100];
	printf(" Enter size of the array: ");
	scanf("%d", &ArrayNum);
	printf("Enter the number: ");
	for (i = 0; i < ArrayNum; i++)
	{
		scanf("%d", &array[i]);
	}
	
	sum = 0;
	for (i = 0; i < ArrayNum; i++)
	{
		sum = array[i] + sum;
	}
	printf(" sum of the array is : %d", sum);
	return (0);
}