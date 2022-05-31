#include<bits/stdc++.h>
using namespace std;
class card
{
    int a;
public:
    card();
    ~card();
    void show();
};
card::card()
{
    cout<<"In constructor\n";
    a=10;
}
card::~card()
{
    cout<<"In destructor\n";
}
void card::show()
{
    cout<<a<<"\n";
}
int main()
{
    card ob;
    ob.show();
    return 0;
}
/* In constructor
10
In destructor */
