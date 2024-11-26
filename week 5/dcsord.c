#include <stdio.h>
int main ()
{
	int j,i,t,n;
	scanf("%d \n",&n);
	int a[n-1];
	for (j=0;j<=n-1;j++)
	{
		scanf("%d",&a[j]);
	}
	for (i=0;i<n-1;i++)
	{
	for (j=0;j<n-1;j++)
	{
		if (a[j]<a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
	for (j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}
