//pgm to calculate the salary of a employee
#include <stdio.h>
int main()
{
	int a;
	printf("enter the basic salary of the guy \n");
	scanf("%d",&a);
	printf("the total salary of the employee is %d \n his DA is %d \n his HRA is %d \n",a+(a/2)+(a/5),a/2,a/5);
	return 0;
}
