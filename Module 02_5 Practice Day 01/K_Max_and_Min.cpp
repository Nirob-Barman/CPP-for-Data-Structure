#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maximum, minimum;
    printf("%d %d\n", min(a, min(b, c)), max(a, max(b, c)));
    return 0;
}