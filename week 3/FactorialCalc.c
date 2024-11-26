//pgm to find a factorial of a no
#include <stdio.h>
int main()
{
	int s,i,n;
	s=1;
	printf("pgm to find a factorial of a no \n enter the number \n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s=i*s;
	}
	printf("the factorial of the no is %d",s);
	return 0;
}
