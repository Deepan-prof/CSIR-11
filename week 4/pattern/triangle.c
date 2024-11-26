//triangle
#include <stdio.h>
int main ()
{
	int i,n,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		printf (" ");
	    printf("*");
		if ((i!=0)&&(i!=1))
		{
			for (j=0;j<(2*i)-1;j++)
			printf(" ");
			printf("*");
		}
		else if (i==1)
		{
		printf(" ");
		printf("*");
	    }
		printf("\n");
	}
	for (j=0;j<=n;j++)
	{
	printf("*");
	printf(" ");
	}
	return 0;
}
