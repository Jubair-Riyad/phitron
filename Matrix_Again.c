#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int c=n-1;
    int r=m-1;
    for (int j = 0; j < m; j++)
    {
        printf("%d ", ar[c][j]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i][r]); 
    }
    
    return 0;
}
