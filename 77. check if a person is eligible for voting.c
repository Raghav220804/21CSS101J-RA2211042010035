#include<stdio.h>

int main()
{
	printf("RA2211042010035 \n");
	int a ;
	printf("Enter the age of the person: ");
	scanf("%d",&a);
	if (a>=18)
	{
		printf("Eigible for voting");
	}
	else
	{
		printf("Not eligible for voting\n");
	}	

	return 0;
}
