//pgm to impelement the concept of bit fields
#include <stdio.h>
struct func
{
	unsigned int a:1;
	int b;
}d;
int main ()
{
	printf("this pgm can only store 1 or 0 \n enter a digit");
	scanf("%d",&d.b);
	d.a=d.b;
	printf("%d",d.a);
	return 0;
}
