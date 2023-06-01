#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello World";
    string::iterator it;
    // for(int i=0; i<s.size(); i++)
    //     cout<<s[i]<<endl;

    cout << *s.begin() << endl;
    cout << *s.end() << endl;
    cout << *(s.end() - 1) << endl;

    cout << "Using string iterator" << endl;
    // for (it = s.begin(); it != s.end(); it++)
    //     cout << *it << endl;
    cout << "Using auto iterator" << endl;
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << endl;
    return 0;
}