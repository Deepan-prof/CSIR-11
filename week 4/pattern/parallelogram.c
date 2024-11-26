//parallelogram
#include <stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		printf(" ");
		printf("*");
		if(i==0||i==(n-1))
		{
			for (j=0;j<n+1;j++)
		    printf(" *");
		    printf("\n");
		    continue ;
		}
		for (j=0;j<(2*n)+1;j++)
		printf(" ");
		printf("*");
		printf("\n");
	}
	return 0;
}
