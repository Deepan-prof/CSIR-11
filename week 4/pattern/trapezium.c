//trapezium
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
    	if (i==0)
    	{
    		for (j=0;j<n+2;j++)
    		printf(" *");
    		printf("\n");
    		continue ;
		}
		if (i==(n-1))
		{
			for (j=0;j<(2*n)+1;j++)
			printf(" *");
			continue ;
		}
    	for (j=0;j<2*(n+1);j++)
    	printf(" ");
    	for (j=0;j<2*i+1;j++)
    	printf (" ");
    	printf("*");
    	printf("\n");
	}
	return 0;
}
