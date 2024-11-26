//pgm to calculate percentage of a student
#include <stdio.h>
int main ()
{
	int a,b,c,d,e;
	printf("enter the marks of the five subjects \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (((a>100||b>100)||(c>100))||(d>100||e>100))
	printf("the marks of each subject should be less than or equal to 100");
	else {
	printf("the percentage of the student is %d %",(a+b+c+d+e)/5);}
	return 0;
}
