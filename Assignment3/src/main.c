#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	// Swap 2 arrays

	int limit, i, Array1[500], Array2[500], TempArray[500];
	printf("Enter the size of arrays: ");
	scanf("%d", &limit);
	printf("Enter the values of Array 1: ");
	for( i=0; i<limit; i++)
	{
		scanf("%d", &Array1[i]);
	}
	printf("Enter the size fof Array 2: ");
	for(i=0; i<limit; i++)
	{
		scanf("%d", &Array2[i]);
	}
	printf("Arrays after swapping:\nArray1: ");
	//Swapping the arrays
	for(i=0; i<limit; i++)
	{
		TempArray[i] = Array1[i];
		Array1[i] = Array2[i];
		Array2[i] = TempArray[i];
		printf("%d, ",Array1[i]);
	}
	printf("\nArray2: ");
	for(i=0; i<limit; i++)
	{
		printf("%d, ", Array2[i]);
	}
	*/
/*
	// find the number of even numbers in an array
	int limit, i, Array[500], EvenNumber;
	printf("Enter the size of arrays: ");
	scanf("%d", &limit);
	printf("Enter the values of Array: ");
	EvenNumber = 0;
	for( i=0; i<limit; i++)
	{
		scanf("%d", &Array[i]);
		if(Array[i]%2 == 0 )
		{
			EvenNumber++;
		}
	}
	printf("Number of even numbers in the given array is %d", EvenNumber);
	*/

	//Decending order array

	int limit, i, j, Array[500], temp;
	printf("Enter the size of arrays: ");
	scanf("%d", &limit);
	printf("Enter the values of Array: ");
	for(i=0; i<limit; i++)
	{
		scanf("%d", &Array[i]);
	}
	for(i=0; i<limit-1; i++)
	{
		for(j=i+1; j<limit; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
	printf("\nSorted array: ");
	for(i=0; i<limit; i++)
	{
		printf("%d, ", Array[i]);
	}


	return (0);
}