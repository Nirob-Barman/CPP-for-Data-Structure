#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[10] = "Hello";
    cout << a << endl;
    cout << strlen(a) << endl;

    string str = "Hello";
    // str = "Gello koi hello";
    cout << str << endl;
    string str2 = "Hello";
    if (str == str2)
    {
        cout << "Same string" << endl;
    }
    else
        cout << "Different string" << endl;
    return 0;
}