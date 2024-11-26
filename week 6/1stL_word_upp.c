// 11. Write a C program to capitalize first letters of each word in a given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
	int i,j,k;
	char a[1000];
	printf("enter the string \n");
	fgets(a,1000,stdin);
	i=strlen(a);
	if((int)a[0]>=97) 
	{
		a[0]=toupper(a[0]);
	}
	for(j=0;j<i;j++)
	{
		if(a[j]==' ')
		{
			a[j+1]=toupper(a[j+1]);
		}
	}
	puts(a);
	return 0;
}
