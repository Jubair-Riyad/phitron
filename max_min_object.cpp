#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    person a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    person mx;
    mx.marks= INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks>mx.marks)
        {
            mx=a[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    return 0;
}