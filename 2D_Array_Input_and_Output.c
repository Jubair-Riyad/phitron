#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int ar[m][n];
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int e;
    scanf("%d", &e);
    printf("Colum no-%d: ",e);
    for (int j = 0; j < m; j++) //for colum
    {
        printf("%d ", ar[j][e]);
    }
    printf("\n");
    printf("Row no-%d: ",e);
    for (int j = 0; j < n; j++) //for row
    {
        printf("%d ", ar[e][j]);
    }
    return 0;
}
