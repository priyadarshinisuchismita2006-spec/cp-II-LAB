//Create a program to input a string and display each character on a new line. 
#include<stdio.h>
void main()
{
	char string[100],i;
	printf("enetr a string :");
	gets(string);
	for(i=0;string[i]!=0;i++)
	printf("%c\n",string[i]);
	
}
