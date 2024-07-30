#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int flag =1;
    for (int i = 0, j = n-1; i <n, j >0; i++, j--)
    {
        if (ar[i]==ar[j])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;
}