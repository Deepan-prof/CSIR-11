#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i,b,c,d,f;
	char e;
	if (i<=10)
	{
		a=(ran()%9)+1;
		b=(ran()%9)+1;
		d=(ran()%2)+1;
		if(d==1)
		{
			e='*' ;
			c=a*b;
		}
		if (d==2)
		{
			e='+' ;
			c=a+b;
		}
		printf("%d %c %d = ",a,e,b);
		scanf("%d",&f);
		if (c==f)
		{
			printf("good");
		}
		if (c!=f)
		{
			printf("not so good");
		}
	}
	return 0;
}
