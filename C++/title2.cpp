#include <bits/stdc++.h>
using namespace std;
class card
{
    char title[100], author[100];
    int num;

public:
    void store()
    {

        cin >> title >> author >> num;
    }
    void show()
    {
        cout << title << endl;
        cout << author << endl;
        cout << num << endl;
    }
};
int main()
{
    char title[100], author[100];
    int num;
    card ob;
    ob.store();
    cout << endl;
    ob.show();
    return 0;
}
