#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n-2;
    int b=1;
    int c=(n/2)-1;
    int d=1;
    if (n==1)
    {
        cout<<"X";
    }
    else if (n>1)
    {
        for (int i = 0; i < n/2; i++)
        {
            cout<<"\\";
            for (int i = 1; i <=a; i++)
            {
                cout<<" ";
            }
            a=a-2;
            cout<<"/"<<endl;
            for (int i = 1; i <=b; i++)
            {
                cout<<" ";
            }
            b++;
        }
        cout<<"X"<<endl;  
        for (int i = 0; i < n/2; i++)
        {
            for (int i =1; i<=c; i++)
            {
                cout<<" ";
            }
            c--;
            cout<<"/";
            for (int i =1; i<=d; i++)
            {
                cout<<" ";
            }
            d=d+2;
            cout<<"\\"<<endl;

        }
    }
    return 0;
}