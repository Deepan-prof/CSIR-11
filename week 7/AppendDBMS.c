#include <stdio.h>
#include <string.h>
int* add_element(int*p,int*k,int i,int n)
{
	int a;
	for(a=0;a<=n;a++)
	{
		p[i+a]=k[a];
	}
		for(a=0;a<i+n;a++)
		{
			printf("%d",p[a]);
		}
	return p;
}
int main ()
{
	int l,n,j,k;
	int *a,*b,*p;
	printf("enter the no of elements in the first array \n");
	scanf("%d",&n);
	fflush(stdin);
	a=(int*)calloc(n,sizeof(int));
	printf("enter the array \n");
	for(l=0;l<n;l++)
	{
		scanf("%d",&a[l]);
	}
	printf("enter the no of elements in the second array \n");
	scanf("%d",&j);
	fflush(stdin);
	b=(int*)calloc(j,sizeof(int));
	printf("enter the array \n");
	for(l=0;l<j;l++)
	{
		scanf("%d",&b[l]);
	}
	printf("press 1 to append 2nd onto 1st \n press 0 to append 1st onto 2nd \n");
	scanf("%d",&k);
	p=(int*)calloc(n+j,sizeof(int));
	if(k==1)
	{
		p=add_element(a,b,n,j);
		int*a=realloc(a,j+n);
		for(l=0;l<j+n;l++)
		{
			a[l]=p[l];
		}
		for(l=0;l<j+n;l++)
		{
			printf("%d",a[l]);
		}
	}
	if(k==0)
	{
	p=add_element(b,a,j,n);
	int*b=realloc(b,p);
	for(l=0;l<j+n;l++)
		{
			b[l]=p[l];
		}
		for(l=0;l<j+n;l++)
		{
			printf("%d",b[l]);
		}
	}
	free(a);
	free(b);
	free(p);
	return 0;
	
}
