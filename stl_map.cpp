#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mp;
    // mp.insert({"Sakib al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 19});
    // mp.insert({"Shamim", 79});

    mp["Sakib al Hasan"]= 75;
    mp["Tamim Iqbal"]= 19;
    mp["Shamim"]= 79;

    for (auto it = mp.begin(); it !=  mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // cout<<mp["Shamim"]<<endl;

    // if (mp.count("Shamim"))
    // {
    //     cout<<"Yes";
    // }
    // else
    // {
    //     cout<<"No";
    // }
    
    
    return 0;
}