#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        int cls;

    student(int r, int c, char*n)
    {
        roll= r;
        cls= c;
        strcpy(name, n);
    }
};
student fun()
{
    char name[100]="Rahim";
    student rahim(10, 7, name);
    return rahim;
}
int main()
{
    student rahim = fun();
    cout<<rahim.roll<<endl;
    return 0;
}