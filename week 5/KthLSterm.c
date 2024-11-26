#include <stdio.h>
int main ()
{
	int j,i,t,n,k;
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
		if (a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
    }
    printf("enter the value of n in nth largest term anf nth smallest term \n");
	scanf("%d",&k);
    printf(" the %d th largest term is %d \n the %d th smallest term is %d ",k,a[n-k],k,a[k-1]);
    return 0; 
}
    
