#include <iostream>
#include <list>
using namespace std;
int main() {
    string name;
    list<string> mylist;
    while (true)
    {
        cin >> name;
        if (name=="end")
        {
            break;
        }
        mylist.push_back(name);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string dir;
        string src;
        cin>>dir;
        if (dir=="visit")
        {
            cin>>src;
            auto it = find(myList.begin(),myList.end(),src)
        }
        else if (dir=="prev")
        {
            /* code */
        }
        else if (dir=="next")
        {
            /* code */
        }
    }
    

    // for (string name : mylist) 
    // {
    //     cout << name << " ";
    // }
    
    
    return 0;
}
