#include <bits/stdc++.h>

using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        // cout << word << endl; // for sequential printing
        print(ss);
        cout << word << endl; // for reverse printing
    }
}

int main()
{
    string s = "Hello I am a string";
    stringstream ss(s);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    print(ss);
    return 0;
}