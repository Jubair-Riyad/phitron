#include<stdio.h>
int main ()
{
    char n;
    scanf("%c", &n);
    if (n>='0' && n<='9')
    {
        printf("IS DIGIT");
    }#include<stdio.h>
int main ()
{
    char a;
    scanf("%c", &a);
    if(a>='0' && a<='9')
    {
        printf("Digit");
    }
    else if (a>='a' && a<='z') 
    {
        printf("Alpha\tIs Small");
    }
    else if (a>='A' && a<='Z') 
    {
        printf("Alpha\tIs Capital");
    }
    return 0;
}
    else if (n>= 'a' && n<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("ALPHA\nIS CAPITAL");
    }
    
    
    return 0;
}