#include<bits/stdc++.h>
using namespace std;
class info
{
    char name[100],address[100];

public:
    void store()
    {

        cin>>name>>address;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<address<<endl;
    }
};
int main()
{
    info ob;
    ob.store();
    cout<<endl;
    ob.display();
    return 0;
}

