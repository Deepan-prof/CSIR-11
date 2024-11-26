/* 36. Harish is designing a language processor which processes only alphabetical data. This alphabetical data
 is processed in a way that repetition of alphabets are not allowed, now your task is to design the code for
 alphabetical data processing.
 Input 1:
 Hai Hello C Program
 Output 1:
 Hai elo C Prgm. 
 Input 2:
 Hello
 Output 2:
 Helo*/
  #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 char* dupli(char *a,int i)
 {
 	int j,k,l;
 	for(j=0;j<i;j++)
 	{
 		if(!isalpha(a[j])&&(a[j]!=' '))
 		{
 			return NULL;
		 }
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
	if(b==NULL)
	{
		printf("there is a non alphabetical value in the string");
	}
	else
	{
		puts(b);
	}
	return 0;
 }
