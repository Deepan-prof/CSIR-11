//pgm to prinyt no pattern
#include <stdio.h>
int main ()
{
	int i,j,n,s;
	s=1;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		for (j=0;j<n-i;j++)
		printf("%d ",s++);
		s=1;
		printf("\n");
	}
	return 0;
}
