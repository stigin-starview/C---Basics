#include <stdio.h>

int main()
{
	int p;
	float r,n,si;
	printf("enter the principlal amount:" );
	scanf("%f", &p);
	printf("\nenter the interest rate: ");
	scanf("%f", &r);
	printf("\nenter the number of years: ");
	scanf("%f", &n);
	si = (p*r*n)/100;
	printf(" Simple interest is: %f", si);

	return (0);
}