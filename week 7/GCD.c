#include <stdio.h>
int gcd(int a, int b) 
{
	int l;
    while (b!=0)
	{
        l= b;
        b=(a%b);
        a=l;
    }
    return a;
}

int main() 
{
    int a,b,l;
    printf("Enter the first number \n ");
    scanf("%d",&a);
    printf("Enter the second number \n ");
    scanf("%d",&b);
    l=gcd(a,b);
    printf("The GCD of %d and %d is %d\n",a,b,l);
    return 0;
}




