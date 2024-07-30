#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
    
    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};
int main()
{
    Person rahim("rahim", 5.9, 25);
    Person karim("karim", 5.7, 22);

    if (karim.age>rahim.age)
    {
        cout<<karim.name;
    }
    else
    {
        cout<<rahim.name;
    }
    return 0;
}