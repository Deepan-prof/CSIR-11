//pgm to find the Nth fibonacci series
#include <stdio.h>
int main()
{
	int i,n,s,d,t;
	s=0;
	d=1;
	printf("pgm to find the Nth fibonacci series \n enter the value of N \n");
	scanf("%d",&n);
	if (n==1)
	{
		printf("0");
	}
	else
	{
	for (i=0;i<=(n-3);)
	{
		t=d;
		s=s+d;
		d=s;
		s=t;
		i++;
	}
}
	printf("%d \n",d);
	return 0;
}
