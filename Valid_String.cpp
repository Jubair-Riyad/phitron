#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        queue<char>q;
        int cnta=0;
        int cntb=0;
        for (char c:s)
        {
            if (c=='A')
            {
                cnta++;
            }
            else
            {
                cntb++;
            }
        }

        if (cnta==cntb)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }          
    }
    return 0;
}