#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student s;
    s.roll = 29;
    s.cls = 9;
    s.section = 'A';
    char name[100] = "Orin";
    strcpy(s.name, name);
    cout << s.name << endl;
    cout << s.roll << endl;
    cout << s.cls << endl;
    cout << s.section << endl;

    Student Nirob;
    Nirob.roll = 29;
    Nirob.cls = 9;
    char nm[100] = "Nirob";
    strcpy(Nirob.name, nm);
    Nirob.section = 'B';
    cout << Nirob.name << endl;
    cout << Nirob.roll << endl;
    cout << Nirob.cls << endl;
    cout << Nirob.section << endl;

    Student Karim;
    Karim.roll = 29;
    Karim.cls = 9;
    char nam[100] = "Karim";
    strcpy(Karim.name, nam);
    Karim.section = 'C';
    cout << Karim.name << endl;
    cout << Karim.roll << endl;
    cout << Karim.cls << endl;
    cout << Karim.section << endl;
    return 0;
}