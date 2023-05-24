#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    switch (number % 2)
    {
    case 0:
        cout << "Even" << endl;
        break;
    default:
        cout << "Odd" << endl;
        break;
    }
    return 0;
}