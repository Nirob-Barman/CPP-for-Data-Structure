#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bool checking = true;
    for (i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            checking = false;
            break;
        }
    }
    if (checking == true)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}