#include <stdio.h>
#include <string.h>
#include <ctype.h>

void changeRegister(char str[])
{
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
}

int main()
{
    char str[32];
    scanf("%s", str);

    changeRegister(str);

    printf("%s\n", str);

    return 0;
}