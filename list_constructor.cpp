#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>mylist;
    // cout<<mylist.size();

    // list<int>mylist(10,5);//size=10 & value in all cell =5//

    // list<int>mylist1= {1,2,3,4,5};
    // list<int>mylist(mylist1);

    // int a[5]={1,2,3,4,5};
    // list<int>mylist(a,a+5);

    vector<int> v= {100,200,300};
    list<int> mylist(v.begin(),v.end());

    // for (auto it = mylist.begin(); it != mylist.end() ; it++)
    // {
    //     cout<<*it<<" ";
    // }
    
    for (int val: mylist)
    {
        cout<<val<<" ";
    }
    
    return 0;
}