//Write a program to reverse a given string and display it.
#include<stdio.h> 
void main()
{
	char string[100],i;
	printf("enter a string:");
	gets(string);
	strrev(string);
	printf("%s",string);
}
