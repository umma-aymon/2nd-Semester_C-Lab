#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c;
    getline(cin,s);
    c=count(s.begin(), s.end(),'i');
    reverse(s.begin(),s.end());
    cout<<c<<"\n"<<s;
    return 0;
}
