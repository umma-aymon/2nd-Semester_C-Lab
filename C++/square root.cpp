#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    s=sqrt(n);
    if(s*s==n)
        cout<<"square root of "<<n<<" is "<<s;
    else
        cout<<n<<" is not a square root number";
}
