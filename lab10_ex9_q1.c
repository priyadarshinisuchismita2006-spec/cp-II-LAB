 //Write a program to swap two numbers using call by reference.
 #include<stdio.h>
 void main()
 {
 	int x=10,y=5;
 	printf("x=%d and y=%d before swapping\n",x,y);
 	swap(&x,&y);
 	printf("x= %d and y=%d after swapping",x,y);
 	
 }
 void swap(int *a,int *b)
 {
 	int c;
 	c=*a;
 	*a=*b;
 	*b=c;
 }
