/*38. Aman, a software developer in a company. Presently he is working on a code for the company, but
 while running the program he gets an error.After analyzing the code ,he gets to know that there was an
 error in a particular section of the code where have to print the first occurrence of all the letters present in
 that order of a string given. So, he asks you for a code , where you get a string as input and you have to
 print the first occurrence of all the letters in that order only ,as you are his fellow mate.
 Input: aabacdbdd
 Output: abcd
 Input: school
 Output: Schol*/
 #include <stdio.h>
 #include <string.h>
 char* dupli(char *a,int i)
 {
 	int j,k,l;
 	for(j=0;j<i;j++)
 	{
 		for(k=j+1;k<i;k++)
 		{
 			if(a[j]==a[k])
 			{
 				for(l=k;l<i-1;l++)
 				{
 					a[l]=a[l+1];
				 }
				 i--;
				 k--;
			 }
		 }
	 }
	 a[i] = '\0'; 
	 return a;
 }
 int main()
 {
 	char a[100];
 	fgets(a,100,stdin);
 	int i=strlen(a);
 	if(a[i-1]=='\n')
 	{
 		a[i-1]='\0';
 		i--;
	 }
	char* b=dupli(a,i);
	puts(b);
	return 0;
 }
