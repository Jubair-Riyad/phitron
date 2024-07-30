#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1001];
    scanf("%s", s);  
    int len = strlen(s);
    int pal = 1;
    for (int i = 0; i < len/2; i++) 
    {
        if (s[i] != s[len-i-1]) 
        {
            pal = 0;
            break;
        }
    }
    if (pal==1) 
    {
        printf("YES\n");
    } 
    if (pal==0) 
    {
        printf("NO\n");
    }
    return 0;
}
