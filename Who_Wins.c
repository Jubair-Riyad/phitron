#include<stdio.h>
int main ()
{
    int n;
    int cnt_tiger =0;
    int cnt_pathan = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1>x2)
        {
            cnt_tiger=cnt_tiger+1;
        }
        else if (x1<x2)
        {
            cnt_pathan=cnt_pathan+1;
        }     
    }
    if (cnt_tiger>cnt_pathan)
    {
        printf("Tiger");
    }
    else if(cnt_tiger<cnt_pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}