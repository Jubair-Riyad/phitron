#include<stdio.h>
#include<string.h>
int main ()
{
    char c[1001];
    fgets(c,1001, stdin);
    int len = strlen(c);
    int capital=0, small=0, space=0;
    for (int i = 0; i < len; i++)
    {
        if (c[i]>='A'&&c[i]<='Z')
        {
            capital=capital+1;
        }
        if (c[i]>='a'&&c[i]<='z')
        {
            small=small+1;
        }
        if (c[i]==32)
        {
            space=space+1;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d", space);
    return 0;
}