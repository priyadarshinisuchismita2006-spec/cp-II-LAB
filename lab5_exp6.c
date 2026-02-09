//Write a program to check if a string is a palindrome using strrev
#include<stdio.h>
#include<string.h>
void main()
{
	char string[100],temp[100];
	printf("enter a string:");
	gets(string);
	
	strcpy(temp,string);
	strrev(string);
	if (strcmp(temp,string) == 0)
	{
		printf("the string is palindrome");
	}
	else
	{
		printf("the string is not palindrome");
	}
}
