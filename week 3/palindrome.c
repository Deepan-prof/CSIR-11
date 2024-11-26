//pgm to check whether a no is palindrome or not
//it will not work if there is a 0 in the number
#include<stdio.h>
int main()
{
	int i,n,s,h,f,t;
	printf("pgm to find whether a no is a palindrome or not \n enter the no \n");
	scanf("%d",&n);
	t=1;
	h=n;
	for (i=0;n%10!=0;)
	{
		s=n%10;
		n=n/10;
		i=s*t;
		t=t*10;
		f=f+i;
	}
	if (f==h)
	{
		printf("a palindrome \n");
	}
	else 
	{
		printf("not a palindrome \n");
	}
	return 0;
}
