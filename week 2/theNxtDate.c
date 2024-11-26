//pgm to find the next date 
#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the date \n");
	scanf("%d",&a);
	printf("Enter te month no \n");
	scanf("%d",&b);
	printf("Enter the year \n");
	scanf("%d",&c);
	if ((c%4==0&&c%100!=0)||c%400==0)
	{
		d=1;
	}
	if ((b==2&&d==1)&&a==28)
	{
		printf("the next date is 29 d 3 m %d y",c);
	}
	else if ((b==2&&d==1)&&a==29)
	{
		printf("the next date is 1 d 3 m %d y",c);
	}
	else if (b==2&&d==1)
	{
		printf("the next date is %d d 2 m %d y",a+1,c);
	}
	else if ((b==1||3||5||7||8||10||12)&&a==30)
	{
		printf("the next date is 31 d %d m %d y",b,c);
	}
	else if ((b==1||3||5||7||8||10||12)&&a==31)
	{
		printf("the next date is 1 d %d m %d y",b+1,c);
	}
	else if ((b==4||6||9)&&a==30)
	{
		printf("the next date is 1 d %d m %d y",b+1,c);
	}
	else if (b==12&&a==31)4
	{
		printf("the next date is 1 d 1 m %d y",c+1);
	}
	else if ((b==2&&d!=1)||a==28)
	{
		printf("the next date is 1 d 3 m %d y",c);
	}
	else 
	{
		printf("the next date is %d d %d m %d y",a+1,b+1,c);
	}
	return 0;
}
