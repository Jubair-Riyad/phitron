#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello ";
    string b="World";
    // a.append(b);//or
    // a=a+b;//or
    a+=b;
    cout<<a<<endl;
    // a.push_back('A');//or
    a=a+"A";
    cout<<a<<endl;
    a.pop_back();
    cout<<a<<endl;
    return 0;
}