#include<iostream>
using namespace std;
class AccessSpecifier
{
public:
    double m;
    double n;
    void display()
    {
        cout<<m<<" "<<n<<endl; // 3.5 4.5
    }
};
int main()
{
    AccessSpecifier val;
    val.m=3.5;
    val.n=4.5;
    val.display();
}
