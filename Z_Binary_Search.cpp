#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while (q--)
    {
        int x;
        cin>>x;
        int l=0;
        int r=n-1;
        bool flag=false;
        while (l<=r)
        {
            int mid= (l+r)/2;
            if (a[mid]==x)
            {
                flag=true;
                break;
            }
            if (a[mid]<x)
            {
                //dane
                l=mid+1;
            }
            else
            {
                //bame
                r=mid-1;
            }
            
        }
        if (flag==true)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }       
        
    }
    
    return 0;
}