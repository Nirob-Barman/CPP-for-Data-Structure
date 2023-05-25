#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; ++i)
        scanf("%d", &A[i]);
    sort(A, A + N);

    for (int i = 0; i < N; ++i)
        if (i != N - 1)
            printf("%d ", A[i]);
        else
            printf("%d\n", A[i]);

    return 0;
}