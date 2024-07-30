#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char sec;
};
int main()
{
    Student a;
    a.cls=5;
    a.roll=3;
    a.sec='C';
    char nm[100]= "Sakib";
    strcpy(a.name, nm);

    // Student b;
    // b.cls= 5;
    // b.roll= 3;
    // b.sec= 'A';
    // char nm2[100]="Ridoy";
    // strcpy(b.name, nm2);
    cout<<a.name;
    return 0;
}