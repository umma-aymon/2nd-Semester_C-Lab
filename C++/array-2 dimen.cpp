#include<bits/stdc++.h>
int main()
{
    int r,c,i,j,a[100][100];
    scanf("%d%d",&r,&c); // 2 2
    for(i=1; i<=r; i++)
        for(j=1; j<=c; j++)
            scanf("%d",&a[i][j]); // 1 2 3 4
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
/* output
          1 2
          3 4 */
