#include<stdio.h>
#include<string.h>
int main ()
{
    char a[11], b[11], sum[21];
    scanf("%s %s", a,b);
    int len_a =strlen(a), len_b =strlen(b);
    strcpy(sum, a);
    strcat(sum, b);
    
    printf("%d %d\n", len_a,len_b);
    printf("%s\n", sum);
    char tmp=a[0];
        a[0]=b[0];
        b[0]=tmp;
    printf("%s %s", a,b);
    return 0;
}