#include <stdio.h>
void print_no (int x, int y)
{
	if (x > y)
		//printf("end of the series");
	   return;
	else
      {
	      if(x%2!=0)
		printf("%d\n",x);
		print_no(x+1,y);
	}
}
void main()
{
	print_no(10,20);
}

