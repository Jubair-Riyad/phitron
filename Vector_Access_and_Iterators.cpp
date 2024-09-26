#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v={10,2,3,4,50};
    // cout<<v[v.size()-1];
    // cout<<v.back()<<endl;
    // cout<<v[0];
    // cout<<v.front();
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}