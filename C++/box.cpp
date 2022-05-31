#include <bits/stdc++.h>
using namespace std;
class box
{
    double l1, l2, l3, v;

public:
    box(double l1, double l2, double l3);
    void vol();
};
box::box(double l1, double l2, double l3)
{
    v = l1 * l2 * l3;
}
void box::vol()
{
    cout << v;
}
int main()
{
    double l1, l2, l3;

    cin >> l1 >> l2 >> l3;
    box ob(l1, l2, l3);
    ob.vol();
    return 0;
}
