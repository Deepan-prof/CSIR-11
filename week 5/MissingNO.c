#include <stdio.h>
int main ()
{
	int j,n,i,k,t;
	scanf("%d",&n); 
	int a[n-1];
	k=0;
	for (j=0;j<n-1;j++)
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
		if (k==0)
		{
			printf("%d ,",t);
		}
		k=0;
}
  return 0;	
	
}
