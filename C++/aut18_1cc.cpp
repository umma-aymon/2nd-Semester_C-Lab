#include<iostream>
using namespace std;
class AccessSpecifier
{
    double m;
public:
    double n;
    void display()
    {
        m=n;
        cout<<m<<endl; // 6.3
    }
};
int main()
{
    AccessSpecifier val;
    val.n=6.3;
    val.display();
}
