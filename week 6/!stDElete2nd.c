//pgm to remove characters from first string which are present in second string
#include <stdio.h>
#include <string.h>
int main()
{
	int i,k,l;
	char a[100],b[100];
	printf("enter the first string \n");
	scanf("%s",a); 
	fflush(stdin);
	printf("enter the second string \n");
	scanf("%s",b);
    int n=strlen(a),j=strlen(b);
	if(a[n-1]=='\n')
	{
		a[n-1]='\0';
		n--;
	}
	if(b[j-1]=='\n')
	{
		b[j-1]='\0';
		j--;
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<j;i++)
		{
			if(a[k]==b[i])
			{
				for(l=k;l<n;l++)
				{
					a[l]=a[l+1];
				}
				n--;
				k--;
			}
		}
	}
	puts(a);
	return 0;
}
