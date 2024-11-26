//pgm to print the nth term fibonacci series
#include <stdio.h>
int main ()
{
	int i,n,j,t=0,k=1;
	printf("enter the value of n :");
	scanf("%d",&n); 
	if(n==1)
	printf("0");
	else if(n==2)
	printf("1");
	for(i=3;i<=n;i++)
	{
	    j=k+t;
		t=k; 
		k=j;
	}
	printf("%d",k);
	return 0;
	
}
