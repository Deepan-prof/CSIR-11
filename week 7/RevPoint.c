//pgm to print string in reverse using pointers
#include <stdio.h>
#include <string.h>
void print_rev(char*p,int a)
{
	int j;
	for(j=0;j<=a;j++)
	{
		printf("%c",p[a-j]);
	}
}
int main ()
{
	int i;
	char a[]={};
	fgets(a,100,stdin);
	print_rev(&a,strlen(a));
	return 0;
}
