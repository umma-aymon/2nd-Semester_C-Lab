#include<bits\stdc++.h>
using namespace std;
class A
{
    int i;
public:
   // A():i(0){}
    friend void Set(A,int);
};
void Set(A ob,int x)
{
    ob.i=x;
    //return ob.i;
    cout<<ob.i;
}
int main()
{
    A ob;
    Set(ob,6);
  //  cout<<Set(6);
    return 0;
}
