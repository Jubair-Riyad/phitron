#include<iostream>
#include<algorithm>// for min, max 
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);
    cout<<"mn: "<<mn<<endl<<"mx: "<<mx;
    return 0;
}