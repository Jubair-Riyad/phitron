#include<stdio.h>
#include<string.h>
int main ()
{
    char ary[100];
    scanf("%s", ary);
    int cnt[26]={0};
    for (int i = 0; i <strlen(ary); i++)
    {
        int val= ary[i]-'a';
        cnt[val]++;
    }
    for (int i = 0; i <26; i++)
    {
        printf("%c- %d\n",i+'a', cnt[i]);
    }//(For print a-z all value)

    // for (int i = 0; i <strlen(ary); i++)
    // {
    //     int val=ary[i]-'a';
    //     printf("%c- %d\n",val+'a', cnt[val]);
    // }//(For print only input value)

    // for (int i = 0; i <strlen(ary); i++)
    // {
    //     int val=ary[i]-'a';
    //     if (cnt[val]!=0)
    //     {
    //         printf("%c- %d\n",val+'a', cnt[val]);
    //     }      
    //     cnt[val]=0;
    // }   //(For print only input value single time)
    return 0;
}