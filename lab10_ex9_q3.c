//Create a program to convert all characters of a string to uppercase using call by 
//reference. 
#include<stdio.h>
void str_upper(char s[])
  {
	strupr(s);
	}
void main()
{
	char str[]="india is beautiful";
	printf("Before convertion = %s\n",str);
	printf("After converstion=");
	strupr(str);
	printf("%s",str);
}
