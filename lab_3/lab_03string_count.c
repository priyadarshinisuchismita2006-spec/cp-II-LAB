#include<stdio.h>
void main()
{
	char name[50];
	int i,count=0 ;
	printf("enter your name :");
	gets(name);
	for (i=0;name[i]!=0;i++)
	count++;
	printf("the length is %d",count);
}
