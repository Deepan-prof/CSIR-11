#include <stdio.h>
float avg(float *p,int i)
{
	int j,k=0;
	for(j=0;j<i;j++)
	{
		k=p[j]+k;
	}
	k=(float)(k/i);
	return k;
}
int main ()
{
	int i,j;
	float k;
	printf("enter the no of values to be taken \n");
	scanf("%d",&i);
	float a[i];
	printf("enter the numbers \n");
	for (j=0;j<i;j++)
	{
		scanf("%f",&a[j]);
	}
	k=(float)avg(&a[0],i);
	printf("the avg of all the values is %f",k);
	return 0;
}
