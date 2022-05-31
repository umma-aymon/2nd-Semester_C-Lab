#include<bits/stdc++.h>
using namespace std;
class info
{
    char name[100],street[100],city[100];
public:
    int store(char *n,char *s,char *c)
    {
        strcpy(name,n);
        strcpy(street,s);
        strcpy(city,c);
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Street: "<<street<<endl;
        cout<<"City: "<<city<<endl;
    }
};
int main()
{
    info ob;
    ob.store("XYZ","abc","Ctg");
    ob.show();
}
