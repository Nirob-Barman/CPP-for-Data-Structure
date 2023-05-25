#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    int cls;

    Student(string _name, int _roll, string _section, int _math_marks, int _cls)
    {
        name = _name;
        roll = _roll;
        section = _section;
        math_marks = _math_marks;
        cls = _cls;
    }
};

Student findHighestMathMarksStudent(Student student1, Student student2, Student student3)
{
    if (student1.math_marks >= student2.math_marks && student1.math_marks >= student3.math_marks)
    {
        return student1;
    }
    else if (student2.math_marks >= student1.math_marks && student2.math_marks >= student3.math_marks)
    {
        return student2;
    }
    else
    {
        return student3;
    }
}

int main()
{

    Student student1("Alice", 1, "A", 85, 10);
    Student student2("Bob", 2, "B", 92, 10);
    Student student3("Charlie", 3, "C", 78, 10);

    Student highest_scoring_student = findHighestMathMarksStudent(student1, student2, student3);

    cout << "The student with the highest math marks is: " << highest_scoring_student.name << endl;

    // Student students[3] = {
    //     Student("Alice", 1, "A", 85, 10),
    //     Student("Bob", 2, "B", 92, 10),
    //     Student("Charlie", 3, "C", 78, 10)};

    // int highest_marks = students[0].math_marks;
    // int highest_index = 0;

    // for (int i = 1; i < 3; i++)
    // {
    //     if (students[i].math_marks > highest_marks)
    //     {
    //         highest_marks = students[i].math_marks;
    //         highest_index = i;
    //     }
    // }

    // cout << "The student with the highest math marks is: " << students[highest_index].name << endl;

    return 0;
}