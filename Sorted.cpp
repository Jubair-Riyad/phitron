#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            if (a[i]<=a[i+1])
            {
                flag=false;
            }
            else
            {
                flag=true;
                break;
            }
            
        }
        if (flag==false)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }  
    }
    return 0;
}