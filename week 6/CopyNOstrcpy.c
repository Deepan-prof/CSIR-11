//pgm to copy 1 string to another
#include <stdio.h>
#include <string.h>
int main ()
{
	int i,n,j;
	printf ("enter the length of the first string \n");
	scanf("%d",&i);
	fflush(stdin);
	printf("enter the first string \n");
	char d[i+1];
	fgets(d,i+1,stdin);
	fflush(stdin);
	printf("enter the length of the second string \n");
	scanf("%d",&n);
	fflush(stdin);
	printf("enter the second string \n");
	char c[n+1];
	fgets(c,n+1,stdin);
	if (i<n)
	printf ("the length of the first string is less then the second one");
	else
	{
		for (j=0;j<n+1;j++)
		{
			d[j]=c[j];
		}
		puts (d);
	}
	return 0;
} 
