#include <bits/stdc++.h>
using namespace std;
class t_and_d
{
    time_t systime;

public:
    t_and_d(time_t t);
    void display();
};
t_and_d::t_and_d(time_t t)
{
    systime = t;
}
void t_and_d::display()
{
    cout << ctime(&systime); // ctime() used to give the present time
}
int main()
{
    time_t x;
    x = time(NULL); // declaring argument of time()
    t_and_d ob(x);
    ob.display();
}
