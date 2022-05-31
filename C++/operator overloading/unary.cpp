#include<bits/stdc++.h>
using namespace std;
class distance
{
public:
    int feet,inches;
    distance()
    {
        feet=0;
        inches=0;
    }
    distance(int ff,int ii)
    {
        feet=ff;
        inches=ii;
    }
    void get(int &ff,int &ii)
    {
        ff=feet;
        ii=inches;
    }
    distance operator-();
};
distance distance::operator-()
{
    feet=-feet;
    inches=-inches;
    return *this;
}
int main()
{
    int feet,inches;
    distance d(10,20);
    d=-d;
    d.get(feet,inches);
    cout<<feet<<" "<<inches<<endl;
    return 0;
}
