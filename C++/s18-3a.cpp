#include<bits\stdc++.h>
using namespace std;
int volume(int s)
{
    return(s*s);
}
double volume(double d,int s)
{
    return(d*s);
}
int main()
{
    cout<<volume(2)<<" "<<volume(6,2); // 4 12
    return 0;
}
