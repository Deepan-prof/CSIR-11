//pgm to find the reverse of a no
#include<stdio.h>
int main()
{
	int i,n,s;
	printf("pgm to find the reverse of a no \n enter the no \n");
	scanf("%d",&n);
	for (i=0;n%10!=0;)
	{
		s=n%10;
		n=n/10;
		i=s;
		printf("%d",i);
	}
	return 0;
}

