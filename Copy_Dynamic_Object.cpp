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
    person* jubair= new person("Jubair Hossain", 26);
    person* jakariya= new person("Jakariya Hossen", 21);
    *jubair=*jakariya;
    cout<<jubair->name<<" "<<jubair->age;
    return 0;
}