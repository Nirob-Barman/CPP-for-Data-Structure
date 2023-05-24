#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10;
    if (x % 2 == 0)
        cout << "Even number detected" << endl;
    else
        cout << "Odd number detected" << endl;

    (x % 2 == 0) ? cout << "Even number" << endl : cout << "Odd Number" << endl;

    return 0;
}