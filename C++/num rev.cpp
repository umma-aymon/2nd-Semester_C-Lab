#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,rs=0;
    cin>>n; // 62
    while(n!=0)
    {
        r=n%10;
        rs=rs*10+r;
        n=n/10;
    }
    cout<<rs; // 26
}
