//Write a program to copy one string to another using pointer.
#include <stdio.h>
void stringCopy(char *s1, const char *s2)
 {
    while (*s2 !='0')
	 {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char s2String[] = "silicon university";
    char s1String[50]; 
    printf("S2 string: %s\n", s2String);
    stringCopy(s1String, s2String);
    printf("S1 string: %s\n", s1String);
    return 0;
}
 
