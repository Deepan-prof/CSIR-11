//pgm to find the sum of first N natural numbers
#include<stdio.h>
int main()
{
	int i,n,s;
	s=0;
	printf("pgm to find the sum of first N natural numbers \n enter the value of N \n");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		s+=i;
	}
	printf("the sum is %d",s);
	return 0;
}
