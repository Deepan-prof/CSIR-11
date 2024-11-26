//pgm to find the length of the string without using the string functon "strlen"
#include <stdio.h>
#include <string.h>
int main ()
{
	int i,n;
	char j;
	scanf("%d",&n);
	char d[n];
	fflush(stdin);
	fgets (d,n,stdin);
	j='s'; 
	for (i=0;j!='\0';i++)
	{
        j=d[i];		
	}
	printf("%d",i-1);
	return 0;
}
