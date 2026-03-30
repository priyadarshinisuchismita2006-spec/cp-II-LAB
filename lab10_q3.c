//Define a function swapDistance() for the structure defined in question no.2, to 
//swap the content of two Distance variables. 
#include <stdio.h>

struct Distance
{
    int km, m, cm;
};

void swapDistance(struct Distance *a, struct Distance *b)
{
    struct Distance temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    struct Distance d1, d2;
    struct Distance *p1=&d1, *p2=&d2;

    printf("Enter first distance: ");
    scanf("%d %d %d", &p1->km, &p1->m, &p1->cm);

    printf("Enter second distance: ");
    scanf("%d %d %d", &p2->km, &p2->m, &p2->cm);

    swapDistance(p1, p2);

    printf("After swap:\n");
    printf("%dkm %dm %dcm\n", p1->km, p1->m, p1->cm);
    printf("%dkm %dm %dcm\n", p2->km, p2->m, p2->cm);
}
