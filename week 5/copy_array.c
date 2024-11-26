/*16. Write a program in C to copy the elements of one array into another array.*/
#include <stdio.h>
#include <string.h>
void copy(int *a,int *b,int i,int n)
{
	int j,k;
	if(i<n)
	{
		printf("cant be copies because the size of the first array is less then the second array \n");
		return 0;
	}
	for(j=0;j<=n;j++)
	{
		a[j]=b[j];
	}
}
int main()
{
	int i,n,j,l;
    printf("enter the number of elements in the first array \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array \n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
    printf("enter the number of elements in the second array \n");
	scanf("%d",&i);
	int b[i];
	printf("enter the elements in the array \n");
	for(j=0;j<i;j++)
	{ 
		scanf("%d",&b[j]);
	}
	printf("enter 1 if a should be copied on b \n enter 0 if b should be copied on a \n");
	scanf("%d",&l);
	if(l==1)
	{
		copy(b,a,i,n);
		printf("the array a is \n");
		for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
		printf("\n");
		printf("the array b is \n");
		for(j=0;j<n;j++)
	{
		printf("%d",b[j]);
	}
	}
	if(l==0)
	{
		copy(a,b,n,i);
		printf("the array a is \n");
		for(j=0;j<i;j++)
	{
		printf("%d",a[j]);
	}
	printf("\n");
		printf("the array b is \n");
		for(j=0;j<i;j++)
	{
		printf("%d",b[j]);
	}
	}
	return 0;
}
