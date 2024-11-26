//pgm to calculate elec bill
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the no of units spent");
	scanf("%d",&a);
	printf("surcharge is 500 above 100 units \n Enter the cost of a single unit");
	scanf("%d",&b);
	if (a>100)
	{
		printf("the elec bill is %d",(b*a)+500);
	}
	else 
	{
		printf("the elec bill is %d",b*a);
	}
	return 0;
}
