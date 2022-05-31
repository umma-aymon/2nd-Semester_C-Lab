#include <bits/stdc++.h>
using namespace std;
class stopwatch
{
    int t1, t2, t;

public:
    stopwatch()
    {
        t2 = 0;
    }
    void start()
    {
        cin >> t1;
    }
    void stop()
    {
        cin >> t2;
    }
    void show()
    {
        t = t2 - t1;
        cout << t << endl;
    }
    ~stopwatch()
    {
        cout << t;
    }
};
int main()
{
    stopwatch ob;
    ob.start();
    ob.stop();
    ob.show();
    return 0;
}
