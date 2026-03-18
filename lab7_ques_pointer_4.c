//Write a program demonstrating pointer arithmetic with a double array.
// Show how to iterate through the array using a pointer.

#include <stdio.h>

int main()
{
    double arr[5] = {1.2, 2.4, 3.6, 4.8, 5.0};
    double *ptr;
    int i;

    ptr = arr;

    printf("Array elements are:\n");

    for( i = 0; i < 5; i++)
    {
        printf("%f ", *(ptr + i));
    }

    return 0;
}




