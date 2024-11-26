/* 39. In the Byteland country a string "S" is said to super ascii string if and only if count of each character in
 the string is equal to its ascii value.
 In the Byteland country ascii code of 'a' is 1, 'b' is 2 ...'z' is 26.
 Your task is to find out whether the given string is a super ascii string or not.
 Input:
 bba
 scca
 Output:
 Yes
 No*/
 #include <stdio.h>
 #include <string.h>
 int count(char *a,int i) 
 {
    int count[26]={0},j;
    for(j=0;j<i;j++)
    {
    	count[a[j]-'a']++;
	}
	for(j=0;j<i;j++)
	{
		if(((a[j]-'a')+1)!=count[a[j]-'a'])
		{
			return 0;
		}
	}
	return 1;
 }
 int main ()
 {
 	int i;
 	char a[100];
 	scanf("%s",a);
 	i=strlen(a);
 	i=count(a,i);
 	if(i==1)
 	{
 		printf("it is a super ascii string");
	 }
	 else if(i==0)
	 {
	 	printf("it is not a super ascii string");
	 }
	 return 0;
 }
