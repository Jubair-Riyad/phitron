#include<stdio.h>
int main ()
{
    int n,m,o;
    scanf("%d", &n);
    m=(n*2)-1;
    o=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <o; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <m; k++)
        {
            printf("*");
        }
        m=m-2;
        o++;
        
        printf("\n");
    }
    
    return 0;
}