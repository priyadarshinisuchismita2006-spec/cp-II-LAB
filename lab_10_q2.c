//Define a structure Distance to store distance in kilometer, meter & centimeter. 
//Create an array of Distance type to store 5 Distance variables. Find the longest 
//distance using pointers.

#include<stdio.h>
struct distance
{
	int km,m,cm;
};
int main()
{
	int i,max=0;
	struct distance d[5];
	struct distance *p=d;
	for(i=0;i<5;i++)
	{
		printf("enter km,m,cm:");
		scanf("%d%d%d",&(p+i)-> km,&(p+i)-> m,&(p+i)-> cm);
	}
	for(i=1;i<5;i++)
	{
		if((p+i)-> km >(p+max)-> km)
		max=i;
	}
	printf("Longest distance =%dkm %dm %dcm",(p+max)-> km,(p+max)-> m,(p+max)-> cm );
	
	return 0;
}
