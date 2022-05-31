#include<bits/stdc++.h>
using namespace std;
class Publication
{

public:
    string title;
    float price;
    void getdata()
    {
        cin>>title>>price;
    }
    void putdata()
    {
        cout<<title<<" "<<price<<endl;
    }
};
class book:public Publication
{
    public:
    int count;
    void getdata()
    {
        cin>>count;
    }
    void putdata()
    {
        cout<<count<<endl;
    }
};
class tape:public Publication
{
public:
    float minute;
    void getdata()
    {
        cin>>minute;
    }
    void putdata()
    {
        cout<<minute<<endl;
    }
};
int main()
{
    book ob;
    tape ob1;
    ob.getdata();
    ob.putdata();
    ob1.getdata();
    ob1.putdata();
}
