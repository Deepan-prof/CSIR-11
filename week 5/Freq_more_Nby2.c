/*15. Find the majority element in the array. A majority element in an array A[] of size n is an element that 
appears more than n/2 times (and hence there is at most one such element). 
Examples :  
Input : {3, 3, 4, 2, 4, 4, 2, 4, 4} 
Output : 4 
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size.  
Input : {3, 3, 4, 2, 4, 4, 2, 4} 
Output : No Majority Element 
Explanation: There is no element whose frequency is greater than the half of the size of the array size. */
#include <stdio.h>
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
	for(j=0;j<n;j++)
		{
			if(b[j]>(n/2))
				{
					printf("%d \n",a[j]);
					l=1;
					break;
				}
		}
	if(l==0)
	{
		printf("there is no major element \n");
	}
	return 0;
}
