/*17. Write a program in C to count and print the frequency of each element of an array*/
void count(int *a,int *c,int n)
{
	int j,k; 
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(a[j]==a[k])
			
			c[j]++;
		}  
	}
}
int main ()
{
	int n,j,l=0,k;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array \n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	int b[100]={0};
	count(a,b,n);
	for(k=0;k<n;k++)
	{
		l=0;
		for(j=0;j<k;j++)
		{
			if(a[k]==a[j])
			{
				l=1;
				break;
			}
		}
		if(l==0)
		printf("the frequency of %d is %d \n",a[j],b[j]);
	}
	return 0;
}

