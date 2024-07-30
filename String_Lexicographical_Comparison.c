#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100], b[100];
    scanf("%s %s",a,b);
    // int i=0;
    // while (1)
    // {
    //     if (a[i]=='\0' && b[i]=='\0')
    //     {
    //         printf("same\n");
    //         break;
    //     }
    //     else if (a[i]=='\0')
    //     {
    //         printf("A small\n");
    //         break;
    //     }
    //     else if (b[i]=='\0')
    //     {
    //         printf("B small\n");
    //         break;
    //     }

    //     if (a[i]==b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i]<b[i])
    //     {
    //         printf("A small\n");
    //         break;
    //     }
    //     else if (a[i]>b[i])
    //     {
    //         printf("B small\n");
    //         break;
    //     }
    // }

    int v = strcmp(a,b);
    if (v<0)
    {
        printf("A coto\n");
    }
    else if (v>0)
    {
        printf("b coto\n");
    }
    else
    {
        printf("same\n");
        
    }
    return 0;
}