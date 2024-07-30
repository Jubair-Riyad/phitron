#include<stdio.h>
int main ()
{
    char ara;
    int cnt[26]={0};
    while (scanf("%c", &ara)!=EOF)
    {
        cnt[ara-'a']++;
    }
    for (int i = 'a'; i <='z'; i++)
    {
        if (cnt[i-'a']!=0)
        {
            printf("%c : %d\n",i, cnt[i-'a']);
        }      
    } 
    return 0;
}