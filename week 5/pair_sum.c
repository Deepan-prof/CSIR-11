/*13. Given an array and a value, find if there is a pair in array whose sum is equal to the given value. If there 
is such a pair present in array, then print the pair and return true. Else return false. (Note: There might be 
multiple pairs, print the any one pair) 
Example:  
Input: array = {12, 3, 4, 1, 6, 9}, sum = 13;  
Output: 12, 1 or 4, 9*/
#include <stdio.h>
void pair_sum(int *a,int n,int i)
{ 
	int k,l;
	for(k=0;k<n;k++)
	{
		for(l=k+1;l<n;l++)
		{
			if((a[k]+a[l])==i)
			{
				printf("%d,%d \n",a[k],a[l]);
			}
	    }
	}
}
int main ()
{
	int n,j,i;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array \n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("enter the value of the sum of the pairs \n");
	scanf("%d",&i);
	pair_sum(a,n,i);
	return 0;
}
