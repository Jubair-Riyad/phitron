#include<stdio.h>
int main ()
{
    int a;
    scanf("%d", &a);
    int b=1;
    for (int i = 0; i <a; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            printf("%d ", j);
        }  
        b++;
        printf("\n");
    }
    
    return 0;
}