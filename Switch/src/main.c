#include <stdio.h>

int main(void)
{
	int choice;
	printf("1 for frontend\n2for backend\n3for fullstack\n enter your choice:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf(" you wanna be a frontend developer\n");
			break;
		case 2:
			printf(" you wanna be a backend developer\n");
			break;
		case 3:
			printf(" you wanna be a fullstack developer\n");
			break;
		default:
			printf("Are you stupid!, try again fool");
			break;
	}
	return(0);
}