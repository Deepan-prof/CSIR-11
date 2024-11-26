/* 
10. FInd duplicate elements from the given array 
Example: Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1} 
Output: 1, 3, 6 */
#include <stdio.h>
#include <string.h>
void dupli_no(char *a,int i)
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
					printf("%c",a[k]);
					break;
				}
			}
		}
	}
	
}
int main ()
{
	int i;
	char a[100];
	fgets(a,100,stdin);
	i=strlen(a);
	if(a[i-1]=='\n')
	{
		a[i-1]='\0';
		i--;
	}
	dupli_no(a,i);
	return 0;
}
