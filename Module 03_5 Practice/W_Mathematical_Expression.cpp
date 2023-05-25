#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    char m, n;
    scanf("%d %c %d %c %d", &a, &m, &b, &n, &c);
    /// printf("%d %d %d\n",a,b,c);
    if (m == '+')
    {
        if (a + b == c)
            printf("Yes\n");
        else
            printf("%d\n", a + b);
    }
    else if (m == '-')
    {
        if (a - b == c)
            printf("Yes\n");
        else
            printf("%d\n", a - b);
    }
    else if (m == '*')
    {
        if (a * b == c)
            printf("Yes\n");
        else
            printf("%d\n", a * b);
    }
    return 0;
}