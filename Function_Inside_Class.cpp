#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
    
    person(string nm, int ag, int m1, int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }

    void hello()
    {
        cout<<name<<" "<<age<<" "<<marks1<<" "<<marks2<<endl;
    }
    int marks()
    {
        return marks1+marks2;
    }

};
int main()
{
    person jubair("Jubair Hossain", 26, 95, 85);
    jubair.hello();
    cout<<jubair.marks()<<endl;
    
    return 0;
}