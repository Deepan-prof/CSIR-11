//pgm to delete the elements from an array
#include <stdio.h>
#include <string.h>
int main ()
{
	int i,k,j;
	char a[1000];
	fgets(a,1000,stdin);
	k=strlen(a);
	if(a[k-1]=='\n')  
	{
		a[k-1]='\0';
		k--;
	}
	for (i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='?';
			}
		}
	}
	for(i=0;i<k;i++)
	{
		if(a[i]=='?')
		{
			for(j=i;j<k;j++)
			{
				a[j]=a[j+1];
			}
			k--;
			i--;
		}
	}
	puts(a);
	return 0;
}
