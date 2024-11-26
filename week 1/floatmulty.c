//pgm to multiply two floating no and get output in float and int
#include <stdio.h>
int main()
{
	int intprod;
	float a,b;
	scanf("%f%f",&a,&b);
	intprod=(int)(a*b);
	printf("the product of two no in floating point no is %f the product of two no in int is %d",a*b,intprod);
	return 0;
}
