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

int main()
{
    Student Nirob(29, 'A', 7, "Nirob Barman");
    cout << Nirob.roll << endl;
    cout << Nirob.section << endl;
    cout << Nirob.cls << endl;
    cout << Nirob.name << endl;

    Student Karim(19, 'B', 7, "Orin Barman");
    cout << Karim.roll << endl;
    cout << Karim.section << endl;
    cout << Karim.cls << endl;
    cout << Karim.name << endl;
    return 0;
}