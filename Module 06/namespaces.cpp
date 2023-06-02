#include <bits/stdc++.h>

using namespace std;

namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Rakib namespace" << endl;
    }
}
namespace Sakib
{
    int age = 30;
    void hello()
    {
        cout << "Sakib namespace" << endl;
    }
}

using namespace Rakib;
// using namespace Sakib;

int main()
{
    // cout << Rakib::age << endl;
    cout << age << endl;

    // cout << Sakib::age2 << endl;
    // cout << age2 << endl;

    hello();
    Sakib::hello();
    return 0;
}