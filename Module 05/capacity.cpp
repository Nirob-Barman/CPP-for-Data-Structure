#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    if (s.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    cout << "\n----------------------------------------------------------------" << endl;
    string a = "ABCDEFGHIJKLM";
    cout << a.capacity() << endl;

    a = "abcdefghijklmnopqrstuvwxyzABCDEF";
    cout << a.capacity() << endl;
    a.clear();
    cout << a << endl;
    cout << a.size() << endl;
    if (a.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
    if (a.size() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    string b = "Hello_world";
    cout << b << endl;
    cout << b.size() << endl;

    b.resize(5);
    cout << b.size() << endl;

    cout << "Checking carefully..." << endl;
    // b.resize(8);
    cout << b << endl;
    b.resize(8, 'X');
    cout << b << endl;
    cout << "----------------------------------------------------------------" << endl;
    string c = "Hello World";
    // c.resize(5);
    // cout << c << endl;
    c.resize(20, 'x');
    cout << c << endl;

    return 0;
}