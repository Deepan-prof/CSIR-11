//pgm to find the lenght of a number
#include <stdio.h>
int main ()
{
	int i,n;
	printf("pgm to find the lenght of a number \n enter the value of the no \n");
	scanf("%d",&n);
	for (i=0;n%10!=0;)
	{
		n=n/10;
		i++;
	}
	printf("%d",i);
	return 0;
}
