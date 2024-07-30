#include<stdio.h>
#include<string.h>
char is_palindrome(char a[])
{
    int len=strlen(a);
    int pal=1;
    for (int i = 0; i <len/2; i++)
    {
        if (a[i]!=a[len-1-i])
        {
            pal=0;
        }
    }
    return pal;
}
int main ()
{
    char a[11];
    scanf("%s", a);
    int pal =is_palindrome(a);
    if (pal==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    return 0;
}