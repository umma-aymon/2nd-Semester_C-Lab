#include<bits\stdc++.h>
using namespace std;
class A
{
public:
    int x;
    A(int a)
    {
        x=a;
    }
    A(const A &a2)
    {
        x=a2.x;
    }
};
int main()
{
    A a1(10);
    A a2(a1); // or A a2=a1
    cout<<a1.x<<endl<<a2.x; // 10 10
}
