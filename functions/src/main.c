#include <stdio.h>
#include <stdlib.h>

//no arugument no return value function
// void sum();
// int main()
// {
// 	printf("Hello World!\n");
// 	sum();
// 	return (0);
// }

// void sum ()
// {
// 	int num1, num2, sum;
// 	printf("enter 2 numbers:");
// 	scanf("%d%d", &num1, &num2);
// 	sum = num1 + num2;
// 	printf("sum of the number: %d", sum);
// }


//with parameter without return value function
// void sum();
// int main()
// {
// 	int a, b;
// 	printf("enter 2 numbers(2nd function):\n");
// 	scanf("%d%d", &a, &b);
// 	sum(a,b);
// 	return (0);
// }

// void sum (int num1, int num2)
// {
// 	int sum;
// 	sum = num1 + num2;
// 	printf("sum of the number: %d", sum);
// }

//with parameter and with return value function
int sum();
int main()
{
	int a, b, result;
	printf("enter 2 numbers(3rd function):\n");
	scanf("%d%d", &a, &b);
	result = sum(a,b);
	printf("sum of the number: %d", result);
	return (0);
}

int sum (int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return(sum);
}