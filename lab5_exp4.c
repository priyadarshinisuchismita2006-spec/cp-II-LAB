//Create a program to find the length of a string using strlen.
#include<stdio.h>
#include<string.h>
void main()
{
	char string[100];
	int x;
	printf("enter a string:");
	gets(string);
 x=strlen(string);
	printf("%d",x);
}
