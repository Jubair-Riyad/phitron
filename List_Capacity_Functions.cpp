#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50};
    cout<<mylist.max_size()<<endl;
    cout<<mylist.size()<<endl;
    // mylist.clear();
    // cout<<mylist.size()<<endl;
    mylist.resize(3);
    mylist.resize(5);
    mylist.resize(7,100);
    for (int val:mylist)
    {
        cout<<val<<" ";
    }
    
    return 0;
}