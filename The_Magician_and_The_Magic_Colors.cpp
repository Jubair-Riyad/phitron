#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        
        stack<char> st1;
        stack<char> st2;

        char cl1 = 'P', cl2 = 'Y', cl3 = 'C';

        for (int i = 0; i < n; i++) 
        {
            char c;
            cin >> c;

            if (st1.empty()) 
            {
                st1.push(c);
            } 
            else 
            {
                if ((c == 'R' && st1.top() == 'B') || (c == 'B' && st1.top() == 'R')) 
                {
                    st1.pop();
                    st1.push(cl1);
                } 
                else if ((c == 'R' && st1.top() == 'G') || (c == 'G' && st1.top() == 'R')) 
                {
                    st1.pop();
                    st1.push(cl2);
                }
                else if ((c == 'B' && st1.top() == 'G') || (c == 'G' && st1.top() == 'B')) 
                {
                    st1.pop();
                    st1.push(cl3);
                } 
                else 
                {
                    st1.push(c);
                }
            }
             
        }

        while (!st1.empty())
        {
            if (st2.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            else
            {
                if (st1.top()==st2.top())
                {
                    st2.pop();
                    st2.push(st1.top());
                    st2.pop();
                    st1.pop();
                }
                else
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                 
            }
              
        }
    
       while (!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
    }
    
    return 0;
}
