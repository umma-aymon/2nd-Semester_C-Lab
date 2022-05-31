#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s=0;
    cin>>n; // 286
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"sum= "<<s; //16
}
