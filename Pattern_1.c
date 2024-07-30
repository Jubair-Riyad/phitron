#include<stdio.h>
int main ()
{
    int m=1, n;
    scanf("%d", &n);
    for (int k = 0; k <n; k++)
    {
         for (int i = 0; i <m; i++)
        {
             printf("*");
        }
        m++;
        printf("\n");
     }    
    return 0;
}