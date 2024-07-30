#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d", &a);
    b=a-1;
    c=1;
    for (int i = 1; i <=(a*2)-1; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=c; k++)
        {
            printf("*");
        }
        if (i<=a-1)
        {
           b--;
           c=c+2;
        }
        else
        {
            b++;
            c=c-2;
        }
        printf("\n");
    }
    
    return 0;
}