//Write a program to define a structure for a complex number (real and imaginary 
//parts) and write a function to perform addition of two complex numbers.
#include<stdio.h>
struct complex
{
	int r;
	int i;
} ;
void main()
{
	struct complex c1,c2,c3;
	printf("enter the 1st complex number");
	scanf("%d%d",&c1.r,&c1.i);
	printf("enter the 2nd complex number");
	scanf("%d%d",&c2.r,&c2.i);
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	printf("%d,%d i",c3.r,c3.i);
}
