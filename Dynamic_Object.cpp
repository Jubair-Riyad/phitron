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
    char name[100]="Rahim";
    Student *a = new Student(10, 7, 'C', name);
    return 0;
}