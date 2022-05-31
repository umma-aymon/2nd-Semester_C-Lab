#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    cin>>s;
    x=s;
    reverse(x.begin(),x.end());
    if(s==x)
        cout<<"pelindrome";
    else
        cout<<"not pelindrome";
    return 0;
}
