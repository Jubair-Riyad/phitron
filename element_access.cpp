#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={1,2,3,4,5,6};
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;
    cout<< *next(mylist.begin(),3);
    return 0;
}