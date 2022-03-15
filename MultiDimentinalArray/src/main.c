#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int i, j, MultiArray[3][3];
	printf("enter values");
	for(i = 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&MultiArray[i][j]);
		}
	}
	printf("entered values are: \n");
	for(i = 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d, ",MultiArray[i][j]);
		}
		printf("\n");
	}
	return (0);
}