//pgm to show a uncarv diamond
#include <stdio.h>
int main ()
{
	int i,j,n;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<2*(n-(i+1));j++)
		printf(" ");
		for (j=0;j<(2*i)+1;j++)
		printf("* ");
		printf("\n");
	}
	for (i=1;i<n;i++) 
	{
		for (j=0;j<2*i;j++)
		printf(" ");
		for (j=0;j<2*(n-i)-1;j++)
		printf("* ");
		printf("\n"); 
	}
	return 0;
}
