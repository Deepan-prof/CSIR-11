/*12. Given an array of integers of size N,  find the first non-repeating element in this array.  
Examples: 
 
Input: {-1, 2, -1, 3, 0} 
//Output: 2*/
#include <stdio.h>
#include <string.h>
char dupli_no(char *a,int i)
{
	int j,k,l,n;
	for(j=0;j<i;j++)
	{
		n=0;
		for(k=0;k<j;k++)
		{
			if(a[k]==a[j])
			{
				n=1;
				break;
			}
		}
		if(n!=1)
		{
			 for(k=j+1;k<i;k++)
			{
				if(a[k]==a[j])
				{
					n=1;
					break;
				}
			}
		}
		if(n==0)
		{
			return a[j];
		}
	}
	
}
int main ()
{
	int i;
	printf("enter the elements in the array \n");
	char a[100];
	fgets(a,100,stdin);
	i=strlen(a);
	if(a[i-1]=='\n')
	{
		a[i-1]='\0';
		i--;
	}
	printf("the first non repeating no is %c",dupli_no(a,i));
	return 0;
}
