#include<stdio.h>
int main ()
{
    char s[1001],  t[1001];
    scanf("%s %s", s, t);
    int count_s=0;
    int count_t=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        count_s++;
        
    }
    for(int i=0; t[i]!='\0'; i++)
    {
        count_t++;
        
    }
    printf("%d %d\n", count_s, count_t);
    printf("%s %s", s, t);
    
    return 0;
}