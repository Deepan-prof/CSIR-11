/*14. Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If 
there is such a triplet present in array, then print the triplet and return true. Else return false. 
Examples:  
Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;  
Output: 12, 3, 9  
Explanation: There is a triplet (12, 3 and 9) present  
in the array whose sum is 24.  
Input: array = {1, 2, 3, 4, 5}, sum = 9  
Output: 5, 3, 1  
Explanation: There is a triplet (5, 3 and 1) present  
in the array whose sum is 9.*/
#include <stdio.h>
void triplet_sum(int *a,int n,int i)
{ 
	int j,k,l;
	for(j=0;j<n;j++)
	{ 
	for(k=j+1;k<n;k++)
	{
		for(l=k+1;l<n;l++)
		{
			if((a[k]+a[l]+a[j])==i)
			{
				printf("%d,%d,%d \n",a[k],a[l],a[j]);
			}
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
	triplet_sum(a,n,i);
	return 0;
}

