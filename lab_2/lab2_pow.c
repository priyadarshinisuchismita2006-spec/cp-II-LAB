#include<stdio.h>
int power(int x,int y)
{
if (y==0)
		return 1;
	else 
		return x*power(x,y-1);
	 }
void main()
{
	printf("%d",power(2,3));
}
