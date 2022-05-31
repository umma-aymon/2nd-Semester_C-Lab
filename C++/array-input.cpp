#include<bits/stdc++.h>
int main()
{
    int a[5],s=0,n,i,av;
    scanf("%d",&n); // 4
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]); // 1 2 3 4
        s=s+a[i];
    }
    av=s/n;
    printf("%d %d ",s,av); // 10 2
    return 0;
}
