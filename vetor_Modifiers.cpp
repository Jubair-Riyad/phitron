#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> x={10, 20, 30};
    // vector<int>v={1,2,3};
    // v=x;
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    vector <int> x={1,2,3,4,5,6};
    vector <int> y={10,20,30,40,50,60};
    // x.insert(x.begin()+2, 100);
    x.insert(x.begin()+2,y.begin(),y.end());
    // x.erase(x.begin()+2);
    x.erase(x.begin()+2,x.begin()+8);
    for (int a: x)
    {
        cout<<a<<" ";
    }
    
    return 0;
}