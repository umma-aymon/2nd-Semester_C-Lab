#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=0,f1,f2=1,i,n;
    while(1)
    {
        cin>>n; //10
        if(n==0)
            cout<<f<<endl;
        for(i=2; i<=n; i++)
        {
            f1=f+f2;
            f=f2;
            f2=f1;
        }
        cout<<f2<<endl; //55
    }
    return 0;
}
