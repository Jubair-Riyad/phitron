#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int arra[a][b];
    int arrb[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arra[i][j]);
        }
    }
     for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arrb[i][j]);
        }
    }
    int arrc[a][b];
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arrc[i][j]=arra[i][j]+arrb[i][j];
            printf("%d ", arrc[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}