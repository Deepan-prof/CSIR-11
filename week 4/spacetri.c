//pgm to show a triangle in space
#include <stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
    for (i=0;i<n;i++)
	{
		for (j=0;j<i*2;j++)
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("* ");
		printf("\n");
	}
		for (i=0;i<n;i++)
	{
		for (j=0;j<2*(n-(i+1));j++) 
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
}