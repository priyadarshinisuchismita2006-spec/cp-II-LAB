//Develop a program to concatenate two strings using strcat.
#include<stdio.h>
#include<string.h>
void main()
{
	char string1[100],string2[100],i;
	printf("enter a string1:");
	gets(string1);
	printf("enetr the string2:");
	gets(string2);
	strcat(string2,string1);
	printf("%s",string2);

}
