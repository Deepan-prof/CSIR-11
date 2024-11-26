//pgm to simulate bank 
#include <stdio.h>
#include <string.h>
struct customer 
{
	int accno;
	char name[50];
	int balance;
	int pin;
}bank[];
int show_det(int accno,struct customer bank[])
{
	int j;
	for(j=0;;j++)
	{
		if(bank[j].accno==accno)
		break;
	}
	printf("your name is \n");
	puts(bank[j].name);
	printf(" your current balance is %d \n",bank[j].balance);
	return j;
}
int withdraw(int j,struct customer bank[])
{
	int amt,pin,pin_retry=5;
	fflush(stdin);
	while(pin_retry!=0)
	{
	printf("enter your pin \n");
	scanf("%d",&pin);
	fflush(stdin);
	if(pin==bank[j].pin)
	{
	printf("enter the amount to withdraw \n");
	scanf("%d",&amt);
	if(amt>bank[j].balance)
	{
	printf("bank balance is low \n");
	return 0;
    }
	else
	{
		bank[j].balance-=amt;
		pin_retry=0;
		return 1;
	}
}
if(pin_retry!=0)
	{
    	printf("pin is invalid \n u got %d more chances \n",pin_retry);
    	pin_retry--;
	}
}
 if(pin_retry==0)
	{
		return 0;
	}
}
int deposit(int j,struct customer bank[])
{
	int amt,pin,pin_retry=5;
	fflush(stdin);
	while(pin_retry!=0)
	{
	printf("enter your pin \n");
	scanf("%d",&pin);
	fflush(stdin);
	if(pin==bank[j].pin)
	{
	printf("enter the amount to deposit \n");
	scanf("%d",&amt);
		bank[j].balance+=amt;
		pin_retry=0;
		return 1;
	}
	else if(pin_retry!=0)
	{
    	printf("pin is invalid \n u got %d more chances \n",pin_retry);
    	pin_retry--;
	}
}
	if(pin_retry==0)
	{
		return 0;
	}
}
int main()
{
	int i=0,j,l; 
	printf("do u have an acc in this bank \n if yes press 1 \n if no press 0 \n");
	scanf("%d",&l);
	fflush(stdin);
	if(l==0)
	{ 
		printf("enter your name \n");
		fgets(bank[i].name,50,stdin);
		fflush(stdin);
		printf("type a pin for your acc \n");
		scanf("%d",&bank[i].pin);
		bank[i].accno=(rand()%100)+1;
		printf("our bank is so secure that we will only ask ur name to create a acc \n here is ur acc no %d \n",bank[i].accno);
        bank[i].balance=0;
        printf("your current balance is %d \n",bank[i].balance);
        i++;
	}
	l=0;
		int accno,h=1;
		while(l==0)
		{
		printf("enter your acc no \n");
		scanf("%d",&accno);
		j=show_det(accno,bank);
		printf("if your information is correct press 1 or press 0 to retry \n");
		scanf("%d",&l);
		if (l==1)
		break;
	}
		do
		{
		printf("what do u want to do ? \n to withdraw press 1 \n to deposit press 2 \n ");
		scanf("%d",&l);
		if(l==1)
		{
			l=withdraw(j,bank);
			if(l==1)
			printf("withdrawl is successfull \n");
			if(l==0)
			printf("withdrawl is a failure \n");
			printf("your account's current balance is %d \n",bank[j].balance);
		}
		else if(l==2)
		{
			l=deposit(j,bank);
			if(l==1)
			printf("deposition is successfull \n");
			if(l==0)
			printf("deposition is a failure \n");
			printf("your account's current balance is %d \n",bank[j].balance);
		}
		printf("if u wish to continue press 1 \n if you dont wish to continue press 0 \n");
		scanf("%d",&l); 
		if(l==0);
		h=0;
	} while(h==1);
	return 0;
}
