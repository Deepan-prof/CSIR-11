//pgm to find the largest element in a given array using dynamic memory allocation
#include <stdio.h>
int main ()
{
	int *a,k=0,n,i;
	printf("enter the no of elements \n");
	scanf("%d",&n);
	a=(int*)calloc(n,(sizeof(int)));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		k=a[i];
	}
	printf("%d",k);
	free(a);
	return 0;
}
