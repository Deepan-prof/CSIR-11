//pgm to print even numbers from 1 to n
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n \n");
	scanf("%d",&n);
	for (i=0;i<=n;i+=2)
	{
		printf("%d \n",i);
	}
	return 0;
}
