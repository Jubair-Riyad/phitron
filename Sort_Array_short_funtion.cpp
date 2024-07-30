#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(person a, person b)
{
    if (a.marks>b.marks)
    {
        return true;
    }
    else
    {
        return false;
    }   
}

int main()
{
    person a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    sort(a,a+3,cmp);
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    return 0;
}