// Explain how you can use a pointer to access and print elements of an integer 
//array. 
#include<stdio.h>
int main()
{
	int number[]={1,2,3,4,5,6,7,8,9};
	int i;
	int*ptr=number;
	for (i = 0; i < 9; i++) 
	printf("%d",ptr[i]);
}






