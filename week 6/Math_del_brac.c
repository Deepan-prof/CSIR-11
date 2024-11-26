/* 37. Vishwak the mathematics teacher asked to solve a book of expressions consisting of characters,
 operators, and brackets. But Vishwak wants to give simplified expressions by removing brackets from the
 expressions. Write a program to help Vishwak simplify an expression by removing brackets
 Input:
 x-(p+q)+(y-a)
 Output:
 x-p+q+y-a*/
 #include<stdio.h>
 #include <string.h>
 void del_bracket(char *a,int i)
 {
 	int j,l;
 	for(j=0;j<i;j++)
 	{
 		if((a[j]=='(')||(a[j]==')'))
 		{
 			for(l=j;l<i-1;l++)
 			{
 				a[l]=a[l+1];
			 }
			 i--;
			 j--;
		 }
	 }
	 a[i]='\0';
 }
 int main ()
 {
 	char a[200];
 	fgets(a,200,stdin);
 	int i=strlen(a);
 	if(a[i-1]='\n')
 	{
 		a[i-1]='\0';
 		i--;
	 }
	del_bracket(a,i);
	puts (a);
	return 0;
 }
