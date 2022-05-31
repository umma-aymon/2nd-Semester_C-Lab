#include<bits/stdc++.h>
using namespace std;
int i;
class publication
{
public:
    char t[1000];
    float p;
    void getdata(char *n,float m)
    {
        strcpy(t,n);
        p=m;
    }
    void putdata()
    {
        cout<<t<<" "<<p<<endl;
    }
};
class sales
{
public:
    float a[4];
    void getdata(int i)
    {
        cin>>a[i];
    }
    void putdata(int i)
    {
        cout<<a[i]<<" ";
        cout<<endl;
    }
};
class book:public publication,sales
{
    int c;
public:
    void getdata()
    {
        cin>>t>>p;
        for(i=0;i<3;i++)
            cin>>a[i];
        cin>>c;
    }
    void putdata()
    {
        cout<<t<<" "<<p<<endl;
        for(i=0;i<3;i++)
            cout<<a[i]<<" ";
            cout<<endl;
        cout<<c<<endl;
    }
};
class tape:public publication,sales
{
    int p1;
public:
    void getdata()
    {
        cin>>t>>p;
        for(i=0;i<3;i++)
            cin>>a[i];
        cin>>p1;
    }
    void putdata()
    {
        cout<<t<<" "<<p<<endl;
        for(i=0;i<3;i++)
            cout<<a[i]<<" ";
            cout<<endl;
        cout<<p1<<endl;
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
    return 0;
}
