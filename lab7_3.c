//Create a program to illustrate the use of pointers with character variables.
// Include both reading and printing the character via the pointer.
#include <stdio.h>

int main()
{
    char ch;
    char *ptr;

    ptr = &ch;

    printf("Enter a character: ");
    scanf(" %c", ptr);

    printf("Character entered: %c\n", *ptr);

    return 0;
}




