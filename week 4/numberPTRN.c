//pgm to print no ptrn
#include <stdio.h>
int main ()
{
	int i,j,n,s;
	s=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		printf("%d ",s++ + 1); 
		printf("\n");
	}
	return 0;
}
