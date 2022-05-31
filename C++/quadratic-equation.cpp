#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,x,x1,x2,d;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d<0)
    {
    cout<<"no solution";
    }
    else if(d==0)
    {
    x=-b/(2*a);
    cout<<x;
    }
    else{
    x1=(-b-d)/(2*a);
    x2=(-b+d)/(2*a);
    cout<<x1<<endl<<x2;
    }
    return 0;
}
