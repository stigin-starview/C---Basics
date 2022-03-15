#include <stdio.h>
#include <string.h>

int GetArray();
void DisplayArray(int Array[10], int UserInput);

int main()
{
	// // find apalindrome
	// int i, length, test;
	// char UserInput[100];
	// printf("Enter a string: ");
	// scanf("%s", UserInput);
	// length = strlen(UserInput);
	// test = 0;
	// for( i=0; i<length; i++)
	// {
	// 	if(UserInput[i] != UserInput[length-i-1])
	// 	{
	// 		test = 1;
	// 	}
	// }
	// if(test == 1)
	// {
	// 	printf("The string is not a palindrome!");
	// }
	// else
	// {
	// 	printf("The string is a palindrome!");
	// }


	// //Add 2 dimentional arrays
	// int i,j,UserInput,Array1[100][100], Array2[100][100];

	// printf("Enter the size of arrays: ");
	// scanf("%d",&UserInput);
	
	// printf("Enter values of array 1 \n");
	
	// for(i=0; i<UserInput; i++)
	// {
	// 	for(j=0; j<UserInput; j++)
	// 	{
	// 		scanf("%d",&Array1[i][j]);
	// 	}
	// }
	// printf("Enter values of array 2 \n");
	
	// for(i=0; i<UserInput; i++)
	// {
	// 	for(j=0; j<UserInput; j++)
	// 	{
	// 		scanf("%d",&Array2[i][j]);
	// 	}
	// }

	// printf("sum of %d Arrays are: \n",UserInput);
	// 	for(i=0; i<UserInput; i++)
	// {
	// 	for(j=0; j<UserInput; j++)
	// 	{
	// 		// sum = 
	// 		printf("%d\t",Array1[i][j] + Array2[i][j]);
	// 	}
	// 	printf("\n");
	// }

	//Accept an array and display it on the console using functions
	
	int i, Array[100], result, limit;
	
	printf("Enter the limit for array: ");
	scanf("%d", &limit);
	printf("Enter values into Array;");	
	
	for(i=0; i<limit; i++)
	{
		Array[i] = GetArray();
	}
	
	DisplayArray(Array, limit);
	return (0);
}

int GetArray()
{
	int Input;
	scanf("%d", &Input);
	return(Input);
}

void DisplayArray(int Array[10], int UserInput)
{
	int i;
	printf("the Array you enter is :\n");
	for( i=0; i<UserInput; i++)
	{
		printf("%d,\t", Array[i]);
	}
}