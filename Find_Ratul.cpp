// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     int t = s.find("Ratul");
//     if (t==-1)
//     {
//         cout<<"NO"<<endl;
//     }
//     else
//     {
//         cout<<"YES"<<endl;
//     }    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int flag=0;
    while (ss>>word)
    {
        if (word == "Ratul")
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}