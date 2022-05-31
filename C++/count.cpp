#include <bits/stdc++.h>
int main()
{
    int a[300];
    int s[100];
    int l, i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &s[i]);
    // for(i=0; i<300; i++)
    //   a[i]=0;
    memset(a, 0, sizeof(a));
    for (i = 1; i <= 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n; i++)
        a[s[i]]++;
    for (i = 0; i < 300; i++)
        if (a[i] > 0)
            printf("%d - %d\n", i, a[i]);
    return 0;
}
