#include<iostream>
using namespace std;
class add{
public:
    int i;
    int sum(add a)
    {
        return a()+a();
    }
};
int main()
{
    add a=2;
    a.sum(a);
    cout<<sum(a);
}
