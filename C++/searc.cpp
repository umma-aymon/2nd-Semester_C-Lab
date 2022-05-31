#include<bits/stdc++.h>
using namespace std;
int ab;
int main()
{
    int n,m,a[100],loc=0,i;
    cin>>n; // 5
    for(i=1; i<=n; i++)
        cin>>a[i]; // 5 6 7 2 4
    cin>>m; // 1
    for(i=1; i<=n; i++)
    {
        if(a[i]==m){
                loc=i;
            cout<<i<<endl<<a[i];
           break;
        }
    }
    if(loc==0)
        cout<<"not found"; // not found
            return 0;
}
