#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_ind = v.size()-1;
    while (cur_ind !=0)
    {
        int par_ind = (cur_ind-1)/2;
        if (v[par_ind] > v[cur_ind])
        {
            swap(v[par_ind] , v[cur_ind]);
        }
        else
        {
            break;
        }
        cur_ind = par_ind;
    }
    
}
void delete_heap(vector<int> &v)
{
    v[0]= v[v.size()-1];
    v.pop_back();
    int cur_ind = 0;
    while (true)
    {
        int left_ind = (cur_ind*2)+1;
        int right_ind = (cur_ind*2)+2;
        int last_ind = v.size()-1;
        if (left_ind <= last_ind && right_ind <= last_ind)
        {
            if (v[left_ind] <= v[right_ind] && v[left_ind]< v[cur_ind])
            {
                swap(v[cur_ind], v[left_ind]);
                cur_ind = left_ind;
            }
            else if (v[left_ind] >= v[right_ind] && v[cur_ind] > v[right_ind])
            {
                swap(v[cur_ind], v[right_ind]);
                cur_ind = right_ind;
            }
            else
            {
                break;
            }
            
        }
        else if (left_ind <= last_ind)
        {
            if (v[cur_ind] > v[left_ind])
            {
                swap(v[cur_ind], v[left_ind]);
                cur_ind = left_ind;
            }
            else
            {
                break;
            }
            
        }
        else if (right_ind <= last_ind)
        {
            if (v[cur_ind] > v[right_ind])
            {
                swap(v[cur_ind], v[right_ind]);
                cur_ind = right_ind;
            }
            else
            {
                break;
            }
            
        }
        else
        {
            break;
        }         

    }
    
}

void print_heap(vector<int>v)
{
    for (int val : v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        insert(v, x);
    }
    delete_heap(v);
    
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}