#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char sec;
    
    Student(int r, int c, char s, char *n)
    {
        roll=r;
        cls=c;
        sec=s;
        strcpy(name, n);
    }
};
Student fun()
{
    char name[100]="Ridoy";
    Student a(10, 5, 'C', name);
    return a;
}
int main()
{
    Student a=fun();
    cout<<a.roll<<endl;
    cout<<a.cls<<endl;
    cout<<a.sec<<endl;
    cout<<a.name<<endl;
    return 0;
}