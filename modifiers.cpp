#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,30,60,70,30};
    list<int>newlist={100,200,300};
    vector<int>v={1,2,3};

    // list<int>newlist;
    // newlist.assign(mylist.begin(),mylist.end());
    //or//
    // newlist=mylist;

    // mylist.push_back(100);
    // mylist.push_front(200);
    // mylist.pop_back();
    // mylist.pop_front();   

    // mylist.insert(next(mylist.begin(),2),100);
    // mylist.insert(next(mylist.begin(),2),{1000,2000,3000});
    // mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());

    // mylist.erase(next(mylist.begin(),2));
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),6));

    // replace(mylist.begin(), mylist.end(), 30,100);

    // for(int val: mylist)
    // {
    //     cout<<val<<" ";
    // }
    
    auto it = find(mylist.begin(),mylist.end(),30);

    if (it==mylist.end())
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    
    return 0;
}