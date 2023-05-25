#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i, j;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int min = INT_MAX;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if ((a[i] + a[j] + j - i) < min)
                {
                    min = a[i] + a[j] + j - i;
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}