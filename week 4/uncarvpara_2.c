//pgm to show a uncarved parallelogram
#include<stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		printf(" ");
		for (j=0;j<n;j++)
		printf("* "); 
		printf("\n");
	}
	return 0;
}
