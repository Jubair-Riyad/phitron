#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long pre[n];
    pre[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=a[i] + pre[i-1];
    } 
    while (q--)
    {
        long long s,l;
        cin>>s>>l;
        l--;
        s--;
        long long sum;
        if(s==0) sum = pre[l]; 
        else sum = pre[l]-pre[s-1];
        cout<<sum<<endl;
    }
    
    return 0;
}