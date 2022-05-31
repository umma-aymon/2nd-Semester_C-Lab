#include<bits/stdc++.h>
using namespace std;
class coord
{
public:
    int x,y;
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
    void get_xy(int &i,int &j)
    {
        i=x;j=y;
    }
    coord operator++();
    coord operator--();
};
coord coord::operator++()
{
    x++;
    y++;
    return *this;
}
coord coord::operator--()
{
    //x=-x;
    //y=-y;
    x--;y--;
    return *this;
}
int main()
{
    coord ob1(10 ,10);
    int x,y;
    ++ob1;
    ob1.get_xy(x,y);
    cout<<x<<" "<<y<<endl;
    //cout<"(++ob1) X:"<<x<<" ,Y:"<<y<<endl;
    //ob1=-ob1;
    --ob1;
    ob1.get_xy(x,y);
    cout<<x<<" "<<y<<endl;
    //cout<"(-ob1) X:"<<x<<" ,Y:"<<y<<endl;
}
