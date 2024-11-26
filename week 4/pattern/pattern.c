#include <stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=0;i<n-1;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		for (j=0;j<(2*n-2*i-1);j++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("*");
		printf("\n");
	}
	for (j=0;j<(2*n+1);j++)
	printf("*");
	return 0;
}
