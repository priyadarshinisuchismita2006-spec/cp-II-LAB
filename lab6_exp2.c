//How can you define a structure to store a date (day, month, year) and display it 
//in the format DD/MM/YYYY? 
#include <stdio.h>
struct calender
	{
		int date,month,year;
	};
	 void main()
	{
		struct calender c1;
		printf("enter the DATE MONTH AND YEAR :");
		scanf("%d%d%d",&c1.date,&c1.month,&c1.year);
		printf("date=%d,\n month=%d,\n year=%d\n",c1.date,c1.month,c1.year);
	}
