//pgm to create a union for a student and calculate his average
#include <stdio.h>
struct student
{
	char name[50];
	int roll_no;
	int marks[5];
}s[5];
int avg(struct student s[],int i,int l)
{
	int j,k=0;
	for(j=0;j<i;j++)
	{
		k=s[l].marks[j]+k;
	}
	k=(k/i);
	return k;
}
int stud_detail(int i,struct student s[])
{
	int j;
	printf("enter the name of the student \n");
	scanf("%s",&s[i].name);
	printf("enter the roll no \n");
	scanf("%d",&s[i].roll_no);
	printf("enter the marks of 5 subjects \n");
	for(j=0;j<5;j++)
	{
		scanf("%d",&s[i].marks[j]);
	}
	i++;
	return i;
}
int main ()
{
 int i=0,k;
 i=stud_detail(i,s);
 k=avg(s,5,i-1);
 printf("the avg marks of the students is %d",k);
 return 0;	
}
