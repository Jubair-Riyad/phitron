#include<stdio.h>
int main ()
{
    int a, b=1;
    scanf("%d", &a);
    int c=a;
    for (int i = 0; i <a; i++)
    {
        for (int j=1; j<=c ; j++)
        {
            printf(" ");
        }
        c--;
        for (int k = 0; k<b; k++)
        {
            printf("*");
        }
        b=b+2;
        printf("\n");
    }   
    return 0;
}