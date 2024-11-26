//pgm to print multiplication table for a number N
#include<stdio.h>
int main ()
{
	int i,n;
	printf("pgm to print multiplication table for a number N \n enter the value of the number \n ");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",i,n,n*i);
	}
	return 0;
}
