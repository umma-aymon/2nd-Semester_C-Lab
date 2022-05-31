#include<bits/stdc++.h>
int main()
{
    int r,c,i,j,m[100][100];
    scanf("%d%d",&r,&c);
    for(i=1; i<=r; i++)
    {
        for(j=1;j<=c; j++)
            scanf("%d",&m[i][j]);
    }

    for(j=1; j<=c; j++)
    {
        for(i=1; i<=r; i++)
            printf("%d \n",m[i][j]);
            printf("\n");
    }
    return 0;
}
