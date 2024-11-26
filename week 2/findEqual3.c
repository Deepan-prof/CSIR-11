//pgm to check the given three no are equal or not
#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c)
	{
		printf("the given three numbers are equal");
	}
	else 
	{
		printf("the given three numbers are not equal");
	}
	return 0;
}
