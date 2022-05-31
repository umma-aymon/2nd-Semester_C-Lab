#include<bits/stdc++.h>
using namespace std;
class publication
{
public:
    string title;
    float price;
    void getdata(void)
    {
        cout<<"Enter title & price:\n";
        cin>>title>>price;
    }
    void putdata(void)
    {
        cout<<"Publication title: "<<title<<endl<<"Publication price: "<<price<<endl;
    }
};
class book:public publication
{
    int pagecount;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter page count:\n";
        cin>>pagecount;
    }
    void putdata(void)
    {
        publication::putdata();
        cout<<"Book page count: "<<pagecount<<endl;
    }
};
class tape:public book
{
    int ptime;
public:
    void getdata()
    {
        book::getdata();
        cout<<"Enter tap's playing time\n";
        cin>>ptime;
        cout<<endl;
    }
    void putdata()
    {
        book::putdata();
        cout<<"Tap's playing time: "<<ptime<<endl;
    }
};
int main()
{
    book b;
    tape t;
    b.getdata();
    b.putdata();
    t.getdata();
    t.putdata();
    return 0;
}
