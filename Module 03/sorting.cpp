#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // sorting the array
    // ascending order
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    // sorting the array
    // descending order
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}