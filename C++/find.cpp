#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int d=0,d1=0;
    getline(cin,s);
    cin>>s1;
    d =s.find(s1);
    d1=s.rfind(s1);
    /*d=s.find("dent");
    if(s.find("dent")!=string::npos)
        cout<<"yes"<<"\n";
    else
        cout<<"no"<<"\n";*/
    cout<<d<<endl<<d1;
    return 0;
}
