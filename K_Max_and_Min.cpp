#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=0;
    int mn=0;
    if (a>=b && a>=c){
        mx=a;
    }else if (b>=a && b>=c){
        mx=b;
    }else if (c>=a && c>=b){
        mx=c;
    }if (a<=b && a<=c){
        mn=a;
    }else if (b<=a && b<=c){
        mn=b;
    }else if (c<=a && c<=b){
        mn=c;
    }
    cout<<mn<<" "<<mx;
    return 0;
}