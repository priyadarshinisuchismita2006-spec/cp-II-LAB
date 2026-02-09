//Write a program to copy one string to another using strcpy. 
#include<stdio.h>
#include<string.h>
void main()
{
	char string1[100],string2[100];
	//char x;
	printf("enter a string1:");
	gets(string1);
	printf("enetr the string2:");
	gets(string2);
    strcpy(string1,string2);
	printf("%s the copied of the function is",string1);
}
