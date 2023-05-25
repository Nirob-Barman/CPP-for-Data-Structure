#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d\n", &n);
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch;
        scanf("%c", &ch);
        if (ch >= 'a')
        {
            int t = ch - 'a';
            freq[t]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] != 0)
        {
            printf("%c", i + 97);
            freq[i]--;
        }
    }
    return 0;
}