//How would you use a pointer to change the value of a variable of type long? 
//Create a program to showcase this concept.
#include <stdio.h>

int main()
{
    long num = 100;
    long *ptr;

    ptr = &num;

    printf("Original value: %ld\n", num);

    *ptr = 500;

    printf("Modified value: %ld\n", num);

    return 0;
}
