#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1, marks2;
    Person(string _name, int _age, int _marks1, int _marks2)
    {
        name = _name;
        age = _age;
        marks1 = _marks1;
        marks2 = _marks2;
    }
    void hello()
    {
        cout << "Hello inside the object" << endl;
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person Nirob("Nirob Barman", 24, 95, 85);
    cout << Nirob.name << " " << Nirob.age << endl;
    Nirob.hello();
    cout << "Total Marks = " << Nirob.total_marks() << endl;
    return 0;
}