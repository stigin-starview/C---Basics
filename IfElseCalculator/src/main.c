
#include <stdio.h>

int main()
{
	float num1, num2, result;
	int operation;
	printf("enter a number: ");
	scanf("%f", &num1);
	printf("enter a second number: ");
	scanf("%f", &num2);
	printf("what operation do you want to perform\nfor addition press 1\nfor subsraction press 2\nfor multiplication press 3 \nfor division press 4\nenter your input: ");
	scanf("%d", &operation);
	
	if (operation == 1)
	{
		result = num1 + num2;
	}
	else if (operation == 1)
	{
		result = num1 + num2;
	}
	else if (operation == 1)
	{
		result = num1 + num2;
	}
	else if (operation == 1)
	{
		result = num1 + num2;
	}
	else 
	{
		printf("incorrect value try again");
		return(1);
	}

	printf("Result = %.2f ", result);
	return(0);	
}