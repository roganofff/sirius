#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isNumber(char s[])
{
    int point = 0;
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (isdigit(s[i]) == 0)
        {
            if ((s[i] != '.' || point == 1))
            {
                return 0;
            }
            point++;
        }
    }
    
    return 1;
}

int main()
{
    char s[30];
    scanf("%s", s);
    if (isNumber(s))
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}