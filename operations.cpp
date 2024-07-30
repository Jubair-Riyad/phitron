#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,40,60,80,70,30,20,50,10};
    mylist.remove(20);
    mylist.sort();
    mylist.sort(greater<int>());
    mylist.unique();
    mylist.reverse();
    for(int val: mylist)
    {
        cout<<val<<" ";
    }
    return 0;  
}