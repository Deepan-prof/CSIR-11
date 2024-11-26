// 9. Write a C program to print the vowels in the given string.
#include<stdio.h>
#include<string.h>
int main ()
{
	char a[100];
	int i,j,k,l;
	fgets(a,100,stdin);
	i=strlen(a);
	char b[10]={'a','e','i','o','u','A','E','I','O','U'};
	for(j=0;j<i;j++)
	{ 
		l=0;
		for(k=0;k<j;k++)
		{
			if(a[j]==a[k])
			l=1;
			break;
		}
		if(l!=1)
		{
		for(k=0;k<10;k++)
		{
		if(a[j]== b[k])
		{
		printf("%c ,",a[j]);
		break;
		}
	    }
        }
	}
	return 0;
}
