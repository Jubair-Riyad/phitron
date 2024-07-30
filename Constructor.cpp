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
int main()
{
    Student a(10, 2,'C',"Rahat");
    Student b(9, 3,'A',"Riham");
    cout<<b.name;
    return 0;
}