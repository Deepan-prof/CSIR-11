#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i,b,c,d,g,h,y,z,f;
	char e;
	y=z=0;
	while (i<10)
	{
		a=(rand()%9)+1;
		b=(rand()%9)+1;
		d=(rand()%3)+1;
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
		if (d==3)
		{
			e='-';
			c=a-b;
		}
		if (d==4)
		{
			e='/';
			c=a/b;
		}
		printf("%d %c %d = ",a,e,b);
		scanf("%d",&f);
		if (c==f)
		{
			g=rand()%3;
			if (g==0)
			printf("good \n");
			if (g==1)
			printf("very good \n");
			if (g==2)
			printf("noice \n");
			if (g==3)
			printf("gooooooooood \n");
			y++;
		}
		if (c!=f)
		{
			h=rand()%3;
			if (h==0)
			printf("not so good \n");
			if(h==1)
			printf("bad \n");
			if (h==2)
			printf("not so excellent \n");
			if (h==3)
			printf("not so noice");
			z++;
		}
		i++;
	}
	printf("the accuracy of you is %d",(y*100)/(y+z));
	return 0;
}
