#include <bits/stdc++.h>
using namespace std;
class stopwatch
{
    double begin, end;

public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
};
stopwatch::stopwatch()
{
    begin = end = 0.0;
}
stopwatch::~stopwatch()
{
    cout << "Stopwatch being destroyed.." << endl;
    show();
}
void stopwatch::start()
{
    begin = (double)clock() / CLOCKS_PER_SEC;
}
void stopwatch::stop()
{
    end = (double)clock() / CLOCKS_PER_SEC;
}
void stopwatch::show()
{
    cout << "Elapsed time: " << end - begin << endl;
}
int main()
{
    stopwatch ob;
    long i;
    ob.start();
    for (i = 0; i < 320000; i++)
        ob.stop();
    ob.show();
    return 0;
}
