#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    // a = a + b;
    // a += b; // operator overloading
    // a.append("World");
    a.append(b);
    cout << a << endl;
    cout << b << endl;

    // not appending anything. use above method
    string c = "Hello";
    c[5] = 'A';
    cout << c << endl;
    cout << "Push and pop methods" << endl;
    c.push_back('A');
    cout << c << endl;
    c.pop_back();
    c.pop_back();
    cout << c << endl;

    cout << "String assigning method" << endl;
    string d;
    d.assign("Hello");
    cout << d << endl;
    string e = "Hello";
    cout << e << endl;

    cout << "String Erasing method" << endl;
    string aa = "HelloWorld";
    aa.erase(4);
    cout << aa << endl;

    string bb = "HelloWorld";
    bb.erase(4, 3);
    cout << bb << endl;
    cout << "String Replace method" << endl;
    string k = "HelloWorld";
    k.replace(4, 3, "so");
    cout << k << endl;
    return 0;
}