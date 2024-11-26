//10. Write a C program to insert a new character in a given string at a given position.
#include <stdio.h>
#include <string.h>
int main ()
{
	int i;
	printf("enter the first string \n");
	char n,a[100];
	fgets(a,100,stdin);
    fflush(stdin);
    printf("enter the postion in which u need to add a char \n");
    scanf("%d",&i); 
    fflush(stdin);
    printf("enter the character u want to insert at the position %d \n",i);
    scanf("%c",&n);
    a[i]=n;
    puts(a);
    return 0;
}
