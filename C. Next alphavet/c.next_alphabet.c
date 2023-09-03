#include <stdio.h>
int main()
{

    char n;
    scanf("%c", &n);
    int i = n;
    if (i == 122)
    {
        printf("a");
    }

    else
    {
        printf("%c", i + 1);
    }
    return 0;
}