//Write a program to create a pointer to an integer variable and demonstrate how 
//the pointer can modify the value of the variable. 
#include<stdio.h>
int main()
{
	int number=10;
	printf("the original value of the number: %d\n",number);
	int*ptr=&number;
	*ptr= 75;
	printf("the value of the number after modification%d",number);
	return 0;
}
