//How can you implement a program to count the number of vowels in a string
#include<stdio.h>
#include<string.h>
void main()
{
	char string[100];
	int count=0,i;
	printf("enetr a string :");
	gets(string);
	for(i=0;string[i]!=0;i++)
	{
	if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
		count++;
	}
	printf("%d",count);
}
