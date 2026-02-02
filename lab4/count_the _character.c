// Create a program to input a sentence and display the total number of words. 
#include<stdio.h>
#include<string.h>
void main()
{
	char string[50];
	
	int i,count=1 ;
	
	printf("enter a string :");
	
	gets(string);
	
	for (i=0;string[i]!=0;i++)
	{
		 if (string[i] == 32)
		 {
			count++;
		}
	}
	
	
	
	printf("the length is %d",count);
	
}

