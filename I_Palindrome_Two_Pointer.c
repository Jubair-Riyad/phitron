#include<stdio.h>
#include<string.h>
int main ()
{
    char c[1001];
    scanf("%s", &c);
    int len =strlen(c);
    int flag=1;
    int i=0, j=len-1;
    while (i<j)
    {
        if (c[i]!=c[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if (flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}