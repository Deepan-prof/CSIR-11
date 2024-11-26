//pgm to find the sum of all digits of a given no
//will not work if there is a zero in the no
#include<stdio.h>
int main()
{
	int i,n,s;
	printf("pgm to find the sum of the digits of a given no \n enter the no \n");
	scanf("%d",&n);
	for (i=0;n%10!=0;)
	{
		s=n%10;
		n=n/10;
		i=s+i;
	}
	printf("%d",i);
	return 0;
}
