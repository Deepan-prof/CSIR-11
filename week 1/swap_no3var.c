//pgm to swap the values of a and b without 3 var
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a first amd them b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is %d the value of is b %d ",a,b);
	return 0;
}
