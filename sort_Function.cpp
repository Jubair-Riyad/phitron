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
    //sorting
    sort(ar, ar+n);//ascending
    sort(ar,ar+n, greater<int>());//descending
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}