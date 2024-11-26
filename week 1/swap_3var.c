//pgm to swap two numbers
#include <math.h>
int main()
{
	int a,b,c;
	printf("enter the value of a first and then b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the value of a %d the value of b %d ",a,b);
    return 0;
}
