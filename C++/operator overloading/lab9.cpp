#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i;
    for(i=2; i<=20; i++)
    {
        cout.width(10);
        cout.precision(5);
        cout<<i<<" ";
        cout.width(10);
        cout.precision(5);
        cout<<log(i)<<" ";
        cout.width(10);
        cout.precision(5);
        cout<<log10(i)<<" "<<endl;
    }
    return 0;
}
