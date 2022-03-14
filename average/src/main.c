#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float a, b, c, average;
	printf("enter 3 numbers: ");
	scanf("%f%f%f", &a,&b,&c);
	average = (a+b+c)/3;
	printf("Average of the number is: %f", average);

	return (0);
}