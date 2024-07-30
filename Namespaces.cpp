#include<bits/stdc++.h>
using namespace std;
namespace jubair
{
    string name="Jubair";
    int age= 26;
    void fun()
    {
        cout<<"I am Jubair";
    }
} 

int main()
{
    cout<<jubair::name<<" "<<jubair::age<<endl;
    jubair::fun();
    return 0;
}