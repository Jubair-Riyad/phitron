#include<stdio.h>
int main ()
{
    int tk;
    scanf("%d", &tk);
    if (tk>=5000)
    {
        printf("Cox's Bazar jabo\n");

        if (tk>=10000)
        {
            printf("Saint martine jabo\n");
        }
        else
        {
            printf("Back korbo\n");
        }
        
    }
    else
    {
        printf("Kothaw jabona");
    }
    
    
    return 0;
}