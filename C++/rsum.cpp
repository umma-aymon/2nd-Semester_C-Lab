#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100][100], i, j, n, rsum = 0, rodd = 0, csum, codd;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &ar[i][j]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", ar[i][j]);
        cout << endl;
    }
}
