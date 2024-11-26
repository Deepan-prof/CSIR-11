/*11. Given an array of integers arr[], The task is to find the index of first repeating element in it i.e. the 
element that occurs more than once and whose index of the first occurrence is the smallest.  
Examples:   Input: arr[] = {10, 5, 3, 4, 3, 5, 6} 
Output: 5   (Explanation: 5 is the first element that repeats) 
Input: arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10} 
Output: 6  (Explanation: 6 is the first element that repeats) */
#include <stdio.h>
#include <string.h>
char dupli_no(char *a,int i)
{
	int j,k;
	for(j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(a[j]==a[k])
			{
				return a[k];
			}
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
	printf("the first repeating no is %c",dupli_no(a,i));
	return 0;
}
