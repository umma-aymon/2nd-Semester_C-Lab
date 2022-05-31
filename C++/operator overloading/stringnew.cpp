#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="I love",s1=" C Programming",s2;
    cout<<s<<endl;
    s2=s+s1;
    cout<<s2<<endl;
    s2.erase(6,s2.length());
    cout<<s2<<endl;
    s2.insert(6," C++ Programming");
    cout<<s2<<endl;
    s2.replace(7,3,"Python");
    cout<<s2<<endl;
    cout<<s2.size()<<endl;
    int i= s2.find("Python");
    cout<<i<<endl;
}
