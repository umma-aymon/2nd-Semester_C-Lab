#include<bits/stdc++.h>
using namespace std;
class FLOAT
{
public:
    float f;
    FLOAT() {}
    float get()
    {
        cin>>f;
    }
    FLOAT operator+(FLOAT ob)
    {
        FLOAT temp;
        temp.f=f+ob.f;
        return temp;
    }
    FLOAT operator-(FLOAT ob)
    {
        FLOAT temp;
        temp.f=f-ob.f;
        return temp;
    }
    FLOAT operator*(FLOAT ob)
    {
        FLOAT temp;
        temp.f=f*ob.f;
        return temp;
    }
    FLOAT operator/(FLOAT ob)
    {
        FLOAT temp;
        temp.f=f/ob.f;
        return temp;
    }
    void display()
    {
        cout<<f<<endl;
    }
};
int main()
{
    FLOAT ob,ob2;
    ob.get();
    ob2=ob+ob;
    cout<<"Sum: ";
    ob2.display();
    ob2=ob-ob;
    cout<<"Sub: ";
    ob2.display();
    ob2=ob*ob;
    cout<<"Mul: ";
    ob2.display();
    ob2=ob/ob;
    cout<<"Div: ";
    ob2.display();
    return 0;
}
