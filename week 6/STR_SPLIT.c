/*34. A splitting machine is given a character array as an input , the splitting machine splits the character
 array in all possible methods to make individual strings
 Input :
 AXLE
 Output :
 A
 X
 L
 E
 AX
 XL
 LE
 AXL
 XLE
 AXLE*/
 #include<stdio.h>
 #include<string.h> 
 void power_set(char *a,int i)
 {
 	int j,k,l;
 	for(j=1;j<=i;j++)
 	{
 		for(k=0;k<i-j+1;k++)
 		{
 			for(l=k;l<=k+j-1;l++)
 			{
 				printf("%c",a[l]);
			 }
			 printf("\n");
		 }
	 }
 }
 int main()
 {
 	char a[300];
 	scanf("%s",a);
 	power_set(a,strlen(a));
 	return 0;
 }
 
