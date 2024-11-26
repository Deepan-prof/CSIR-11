//find the max no among 3 for raj's bowling technique
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the points assigned to each bowling technique");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
	{
		printf(" the best bowling technique among three is a = %d",a);
	}
	else if (b>a&&b>c)
	{
		printf("the best bowling technique among three is b = %d",b);
	}
	else if (c>a&&c>b)
	{
		printf("the best bowling technique among three is c = %d",c);
	}
	else if (a==b&&b>c)
	{
		printf("the best bowling techniques among three is a and b = %d",a);
	}
	else if (a==c&&c>b)
	{
		printf("the best bowling techniques among three is a and c = %d",a);
	}
	else if (b==c&&b>a)
	{
		printf("the best bowling technique among three is b and c = %d",b);
	}
	else if (a==b&&b==c)
	{
		printf("all techniques are good ");
	}
	return 0;
}
