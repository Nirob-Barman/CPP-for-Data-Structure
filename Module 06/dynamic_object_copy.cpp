#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *Rakib = new Person("Rakib", 25);
    Person *Sakib = new Person("Sakib", 23);

    Rakib = Sakib;
    // delete Sakib;
    cout << Rakib->name << " " << Rakib->age << endl;
    // delete Sakib;
    return 0;
}