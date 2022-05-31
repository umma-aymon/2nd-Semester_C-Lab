#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i;
    for(i=2; i<=20; i++)
    {
        cout<<setw(10)<<setprecision(5)<<setfill('0')<<i<<" ";
        cout<<setw(10)<<setprecision(5)<<setfill('0')<<log(i)<<" ";
        cout<<setw(10)<<setprecision(5)<<setfill('0')<<log10(i)<<" "<<endl;
    }
    return 0;
}
