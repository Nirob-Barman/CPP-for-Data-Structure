#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool asc_cmp(Student a, Student b)
{
    if (a.marks < b.marks)
        return true;
    else
        return false;
}
bool desc_cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        // getchar();
        cin.ignore();
    }

    cout << "Marks descending order" << endl;
    int n = 3;
    sort(a, a + n, asc_cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    cout << "Marks ascending order" << endl;
    sort(a, a + n, desc_cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}