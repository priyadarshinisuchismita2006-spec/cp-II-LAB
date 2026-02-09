// Develop a program to count occurrences of a specific character in a string. 
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],character;
	int i,count=0;
	printf("enter a string:");
	gets(string);
	printf("enter the character:");
	scanf(" %c",&character);
	for(i=0;string[i]!=0;i++)
	{
		if(string[i]==character)
		{
		count++;
	    }

	}
	printf("%d no of specific character",count);
		return 0;
}
