#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "Hello";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    if(s.empty()==true)cout<<"Empty"<<endl;//behind the scene if(s.size()==0) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    string a;
    cin>>a;// for input string without space
    cout<<a<<endl;
    a.resize(5);
    cout<<a<<endl;
    a.resize(8);
    cout<<a<<endl;
    a.resize(11,'X');
    cout<<a<<endl;
    return 0;
}