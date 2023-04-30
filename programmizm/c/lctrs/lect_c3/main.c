#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN 15

int main()
{
    char s1[] = "Hello", s2[] = " world";
    strcat(s1, s2);
    printf("%s", s1);
    // printf("%d", strcmp(s1, s2));
    // char c = 'f';
    // printf(isdigit(c) ? "YES\n" : "NO\n");
    // printf(isalpha(c) ? "YES\n" : "NO\n");


    return 0;
}