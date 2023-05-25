#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int maximum = -1;
    while (n--)
    {
        int x;
        scanf("%d", &x);
            maximum = max(maximum, x);
    }
    printf("%d\n", maximum);
    return 0;
}