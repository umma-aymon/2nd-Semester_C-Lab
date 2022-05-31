#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    int n,i,j;
    triangle(int h)
    {
        n=h;
    }
    friend ostream &operator<<(ostream &stream, triangle ob);
};
ostream &operator<<(ostream &stream, triangle ob)
{
    int i,j;
    for(i=1; i<=ob.n; i++)
    {
        for(j=ob.n; j>i; j--)
            stream<<" ";
        for(j=1; j<=i; j++)
            stream<<"*";
        for(j=1; j<i; j++)
           stream <<"*";
        stream<<endl;
    }
    return stream;
}
int main()
{
    triangle t(4),t1(10);
    cout<<t<<endl<<t1;
}
