#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int _roll, char _section, int _cls, char *_name)
    {
        roll = _roll;
        section = _section;
        cls = _cls;
        strcpy(name, _name);
    }
};

Student fun()
{
    char name[100] = "Nirob Barman";
    Student desired_object(29, 'A', 7, name);
    return desired_object;
}

int main()
{
    Student Nirob = fun();
    cout << Nirob.name << endl;
    cout << Nirob.roll << endl;
    cout << Nirob.section << endl;
    cout << Nirob.cls << endl;
    return 0;
}