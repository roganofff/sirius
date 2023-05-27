#include <stdio.h>
#include <string.h>

int hammingDistance(char s1[], char s2[])
{
    size_t l = strlen(s1);
    int cnt = 0;
    for (size_t i = 0; i < l; i++)
    {
        cnt += (s1[i] != s2[i]);
    }
    
    return cnt;
}

int main()
{
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    printf("%d\n", hammingDistance(s1, s2));

    return 0;
}
