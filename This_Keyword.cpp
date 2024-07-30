#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
    
    person(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    person jubair("Jubair", 26);
    cout<<jubair.age<<" "<<jubair.name;
    
    return 0;
}