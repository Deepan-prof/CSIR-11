//pgm to print the nth term of a series
#include<stdio.h>
int series(int n)
{
	static int a=1,b=2,c=3;
	int k;
	k=a+b+c;
	a=b;
	b=c;
	c=k; 
	if (n==0)
	{
		return k;
	}
	return series(n-1);
}
int main ()
{
	int i;
	printf("enter the value of n \n");
	scanf("%d",&i);
	printf("%d",series(i-4));
	return 0;
}
