#include <stdio.h>
int main ()
{
	int i,n,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		printf(" ");
		printf("*");
		for (j=0;j<2*(n-i);j++)
		printf(" ");
		printf("*");
		printf("\n"); 
    }
    for (i=0;i<n;i++)
	printf(" ");
	printf("*");
	printf("\n"); 
	for (i=1;i<n;i++)
	 {
	 	for (j=0;j<(n-i);j++)
	 	printf(" ");
	 	printf("*");
	 	for (j=0;j<(2*i)-1;j++)
	 	printf(" ");
	 	printf("*");
	 	printf("\n");
	 }
    return 0;
}
