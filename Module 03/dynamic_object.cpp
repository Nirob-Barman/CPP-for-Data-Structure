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
    char name[100] = "Nirob Barman";
    // Student rahim(100, 'A', 7, name);
    // int *p = new int;
    Student *rahim = new Student(100, 'A', 7, name);
    (*rahim).roll = 55;

    // cout << (*rahim).name << endl;
    // cout << (*rahim).roll << endl;
    // cout << (*rahim).cls << endl;
    // cout << (*rahim).section << endl;

    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->section << endl;
    cout << rahim->cls << endl;

    // delete an object
    delete rahim;

    cout << "Garbage collection" << endl;
    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->section << endl;
    cout << rahim->cls << endl;
    return 0;
}