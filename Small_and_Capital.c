#include <stdio.h>

int main() 
{
    char s[1001];
    scanf("%s", s);
    int cptl= 0, sml= 0;
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
        {
            sml++;
        } 
        else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            cptl++;
        }
    }
    printf("%d %d", cptl, sml);
    return 0;
}
