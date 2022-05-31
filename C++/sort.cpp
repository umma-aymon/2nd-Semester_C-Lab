#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],n,i;
    scanf("%d",&n); /* n=5 */
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]); /* 9 5 1 7 3 */
    sort(a+1,a+n+1);
    for(i=1; i<=n; i++)
        printf("%d ",a[i]); /* 1 3 5 7 9 */
    return 0;
}
