//pgm to print odd numbers from one to n
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n \n");
	scanf("%d",&n);
	for (i=1;i<=n;i+=2)
	{
		printf("%d \n",i);
	}
	return 0;
}
