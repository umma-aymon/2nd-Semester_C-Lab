#include<bits/stdc++.h>
using namespace std;
int i;
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
class sales
{
public:
    float a[4];
    void getdata(void)
    {
        cout<<"Enter sales amount\n";
        for(i=0; i<3; i++)
            cin>>a[i];
    }
    void putdata(void)
    {
        cout<<"Sales amount:\n";
        for(i=0; i<3; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
};
class book:public publication,sales
{
    int pagecount;
public:

    void getdata()
    {
        publication::getdata();
        sales::getdata();
        cout<<"Enter page count:\n";
        cin>>pagecount;
    }
    void putdata(void)
    {
        publication::putdata();
        sales::putdata();
        cout<<"Book page count: "<<pagecount<<endl;
    }
};
class tape:public book,sales,publication
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
    tape t;
    t.getdata();
    t.putdata();
    return 0;
}
/* Publication title: bangla
Publication price: 250
Sales amount:
10 20 30
Book page count: 50
Tap's playing time: 60 */
