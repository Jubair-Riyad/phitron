#include<stdio.h>
int main ()
{
    int n,m,o;
    scanf("%d",&n);
    m=n-1;
    o=1;
    for (int i = 0; i <n; i++)
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
        o++;        
       printf("\n");
    }
    
    return 0;
}