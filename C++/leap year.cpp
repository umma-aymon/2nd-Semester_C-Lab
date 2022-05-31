#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    //cin>>y;
    while(scanf("%d",&y)==1){
    if(y%4==0 && y%100!=0 || y%400==0)
        cout<<y<<" is a leap year\n";
    else
        cout<<y<<" is not a leap year\n";
    }
}
