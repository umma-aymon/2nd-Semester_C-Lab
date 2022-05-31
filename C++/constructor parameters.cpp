#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a;
public:
   myclass(int x);
    void show();
};
myclass::myclass(int x)
{
    cout<<"In constructor\n";
    a=x;
}
void myclass::show()
{
    cout<<a<<"\n";
}
int main()
{
    myclass ob(4);
    ob.show();
}
/* In constructor
4
*/
