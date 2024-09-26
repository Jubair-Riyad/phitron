#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={1,2,3,4,2,8,6,3,2,1,4,5,3,2,5,9,2,8,5,6};
    // replace(v.begin(),v.end(),2,100);
    // for(int c:v)
    // {
    //     cout<<c<<" ";
    // }
    vector<int>v={1,2,3,4,2,8,6,3,2,1,4,5,3,2,5,9,2,8,5,6};
    auto it = find(v.begin(),v.end(),100);
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}