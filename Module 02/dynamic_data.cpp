#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *a = new int; // syntax
    *a = 10;
    cout << a << endl;
    cout << *a << endl;

    float *f = new float;
    *f = 3.14;
    cout << *f << endl;

    delete f; // delete
    return 0;
}