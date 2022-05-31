#include<bits/stdc++.h>
int main()
{
    int r,c,i,j,matrix[100][100],transpose[100][100];
    scanf("%d%d",&r,&c);
    for(i=1; i<=r; i++)
        for(j=1; j<=c; j++)
            scanf("%d",&matrix[i][j]);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
    for (i = 0; i < r; i++)
      for(j = 0; j < c; j++)
         transpose[c][r] = matrix[r][c];

   printf("Transpose of the matrix:\n");

   for (i = 0; i < c; i++) {
      for (j = 0; j < r; j++)
         printf("%d\t", transpose[r][c]);
      printf("\n");
   }
    return 0;
}
