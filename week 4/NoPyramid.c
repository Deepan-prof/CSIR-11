//pgm to show no pattern pyramid
#include <stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n); 
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		printf(" ");
		for (j=0;j<i+1;j++)
		printf("%d ",i+1);
		printf("\n");
	}
	return 0;
}
