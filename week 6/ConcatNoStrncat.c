//pgm to concat two strings without using strncat functons
#include <stdio.h>
#include <string.h>
int main ()
{
	int i,t,n,k;
	char j;
	printf("enter the length of the first string \n");
	scanf("%d",&i);
	fflush(stdin);
	char d[i+1];
	printf("enter the first string \n");
	fgets (d,i+1,stdin);
	fflush(stdin);
	printf("enter the length of the second string \n");
	scanf("%d",&n);
	fflush(stdin);
	printf("enter the second string \n");
	char c[n+1];
	fgets (c,n+1,stdin); 
	j='s';
	for (k=0;j!='\0';)
	{
		j=d[k];
		k++;
	}
	for (t=0;t<n+1;t++)
	{
		d[k-1]=c[t];
		k++;
	}
	puts (d);
	return 0;
}
