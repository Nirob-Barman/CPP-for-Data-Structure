#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello_World";
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << "Last element accessing: " << endl;
    cout << s[s.size() - 1] << endl;
    cout << s.back() << endl;
    cout << "First element accessing: " << endl;
    cout << s.front() << endl;
    // Note
    // use s[0] to access the first element
    // use s.back() to access the last element
    return 0;
}