//pgm to print the greatest no among 3 given no
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
	{
		printf(" the greatest no among three is a = %d",a);
	}
	else if (b>a&&b>c)
	{
		printf("the greatest no among three is b = %d",b);
	}
	else if (c>a&&c>b)
	{
		printf("the greatest no among three is c = %d",c);
	}
	else if (a==b&&b>c)
	{
		printf("the greatest nos among three is a and b = %d",a);
	}
	else if (a==c&&c>b)
	{
		printf("the greatest nos among three is a and c = %d",a);
	}
	else if (b==c&&b>a)
	{
		printf("the greatest no among three is b and c = %d",b);
	}
	else if (a==b&&b==c)
	{
		printf("all nos are equal ");
	}
	return 0;
}
