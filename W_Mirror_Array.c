#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int ar[a][b];
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[i][j]);
        }
        
    }

    for (int i = 0; i <a; i++)
    {
        for (int j = b-1; j>=0; j--)
        {           
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}