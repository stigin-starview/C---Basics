#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int limit, i, Array1[500], Array2[500];
	printf("Enter a limit: ");
	scanf("%d",&limit);
	printf("Enter numbers into first Array: ");
	for(i=0; i< limit; i++)
	{
		scanf("%d", &Array1[i]);
	}
	printf("Enter the numbers into Array 2: ");
	for(i=0; i< limit; i++)
	{
		scanf("%d", &Array2[i]);
		Array1[i] = Array1[i] + Array2[i];
	}
	printf("finally Array is : ");
	for(i=0; i<limit; i++)
	{
		printf("%d, ",Array1[i]);
	}


	return (0);
}