#include <bits/stdc++.h>
using namespace std;
class card
{
    char title[100], author[100];
    int num;

public:
    void store(char *t, char *a, int n)
    {
        strcpy(title, t);
        strcpy(author, a);
        num = n;
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
    card ob;
    ob.store("Math", "M.K", 10);
    ob.show();
    return 0;
}
