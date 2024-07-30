#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int c=INT_MAX;
        for (int i =0; i <n-1; i++)
        {
            for (int j = i+1; j <n; j++)
            {
                int d=a[i]+a[j]+j-i;
                if (c>d)
                {
                    c=d;
                }   
            }   
        }
        cout<<c<<endl;    
    }
    return 0;
}