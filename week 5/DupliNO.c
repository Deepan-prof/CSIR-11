#include <stdio.h>
int main ()
{
	int j,i,t,n,k=0;
	scanf("%d \n",&n);
	int a[n-1];
	for (j=0;j<=n-1;j++)
	{
		scanf("%d",&a[j]);
    }
    	for (t=1;t<=n;t++)
	{
	for (j=i;j<n-1;j++)
		{
			if (t==a[j]) 
			k=k+1;
		}
		if (k!=1)
		{
			printf("%d \n",t);
		}
		k=0;
}
	printf("%d",k);
}
