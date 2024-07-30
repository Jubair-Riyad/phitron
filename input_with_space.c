#include<stdio.h>
#include<string.h>
int main ()
{
    char a[30];
    // gets(a);
    fgets(a, 30, stdin);
    int sz= sizeof(a);
    a[15]='\0';
    printf("%d\n", sz);
    printf("%s", a);
    return 0;
} 