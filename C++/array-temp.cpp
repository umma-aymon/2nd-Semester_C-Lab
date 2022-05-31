#include<bits/stdc++.h>
int main()
{
int i,j,temp,n,a[100];
scanf("%d",&n); // 4
for(i=1;i<=n;i++)
    scanf("%d",&a[i]); // 4 3 2 1
for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
    if(a[j]<a[i]){
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
}
for(i=1;i<=n;i++)
    printf("%d ",a[i]); // 1 2 3 4
    return 0;
}
