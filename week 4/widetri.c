//pgm to wide triangle 
#include <stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*(n-i-1);j++)
		printf(" ");
		for (j=0;j<i+1;j++)
		printf("* ");
		for (j=0;j<i;j++)
		printf("* ");
		printf("\n");
	}
	return 0; 
}
