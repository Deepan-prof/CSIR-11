// 12. Write a C program to find the most and least repeated characters in a given string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void count(char *a,int *c,int n)
{
	int j,k; 
	for(j=0;j<n;j++)
	{
		if(a[j]==' ')
		continue;
		for(k=0;k<n;k++)
		{
			if(a[j]==a[k])
			
			c[j]++;
		}  
	}
}
int main ()
{
	int n,j,k=0;
	printf("enter the string \n");
    char l,a[300]; 
    n=strlen(a);
    fgets(a,300,stdin);
	int b[300]={0};
	count(a,b,n);
	k=n;
	for(j=0;j<n;j++)
	{
		if ((a[j]!=' ')&&(b[j]<k&&b[j]>0))
		{ 
		printf(" l");
		k=b[j];
		l=a[j];
		}
	}
	printf("the least repeated char is %c ,",l);
	k=0;
	for(j=0;j<n;j++)
	{
		if (a[j]!=' '&&b[j]>k) 
		{ 
		k=b[j];
		l=a[j];
		}
	}
	printf("the most repeated char is %c",l);
	return 0;
}

