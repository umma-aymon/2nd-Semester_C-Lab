#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,max,loc,i,min,loc2;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    loc=1;
    loc2=2;
    max=a[1];
    min=a[1];
    for(i=2; i<=n; i++)
    {
        if(a[i]<min)
        {
            loc=i;
            min=a[i];
        }
          if(a[i]>max)
        {
            loc2=i;
            max=a[i];
        }
        }
    cout<<loc<<endl<<min<<endl<<loc2<<endl<<max;
    return 0;
}
