//Write a program to compare two strings using strcmp.
#include<stdio.h>
#include<string.h>
void main()
{
	char string1[100],string2[100],i;
	printf("enter a string1:");
	gets(string1);
	printf("enetr the string2:");
	gets(string2);
	if (strcmp(string2,string1))
	{
	printf("not same");
    }
	else
	{
	printf("same");
    }

	
}
