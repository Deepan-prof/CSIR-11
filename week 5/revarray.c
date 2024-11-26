#include <stdio.h>
int main ()
{ 
	int j,t,n;
	scanf("%d \n",&n);
	int a[n-1];
	for (j=0;j<=n-1;j++)
	{
		scanf("%d",&a[j]);
	}
	if (n%2==0)
	{
	for (j=0;j<(n/2);j++)
	{
			t=a[j];
			a[j]=a[n-1-j];
			a[n-1-j]=t;	
	}
	}
	else 
	{
		for (j=0;j<(n-1)/2;j++)
	{
			t=a[j];
			a[j]=a[n-1-j];
			a[n-1-j]=t;	
	}
	}
	for (j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
} 
