#include <iostream>
#include <algorithm>

using namespace std;

int my_min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int my_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int minimum = my_min(a, b);
    cout << minimum << endl;
    int maximum = my_max(a, b);
    cout << maximum << endl;

    cout << "Using Built in Functions" << endl;
    cout << "Minimum value: " << min(a, b) << endl;
    cout << "Maximum value: " << max(a, b) << endl;

    return 0;
}