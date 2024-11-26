#include <stdio.h>
//only work upto number 60
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		printf(" ");
	    
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
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<i+2;j++)
		printf(" ");
		printf("*");
		for (j=0;j<(2*((n-1)-i))-3;j++)
		printf(" ");
		if (j!=0)
		printf("*",j);
		printf("\n");
	}
	return 0;
}
