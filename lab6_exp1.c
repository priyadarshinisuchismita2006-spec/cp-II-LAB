//Write a program to define a structure for a student containing fields for name, 
//roll number, and marks. Input and display the details.
#include<stdio.h>
struct student
	{
		char name[50];
		int rollno;
		float marks;
	};
	 void main()
	{
		struct student s1;
		printf("enter the NAME,ROLL NO, MARKS :");
		gets(s1.name);
		scanf("%d%f",&s1.rollno,&s1.marks);
		printf("name=%s,\nroll no=%d,\nmarks=%f\n",s1.name,s1.rollno,s1.marks);
		
	}
 
