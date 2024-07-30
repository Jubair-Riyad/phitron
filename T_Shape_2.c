#include<stdio.h>
int main ()
{
    int n,m,o;
    scanf("%d", &n);
    m=n-1;
    o=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <o; k++)
        {
            printf("*");
        }
        m--;
        o=o+2;        
        printf("\n");
    }
    
    return 0;
}