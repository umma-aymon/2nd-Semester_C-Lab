#include <iostream>
using namespace std;
class cse
{
    int a;

public:
    cse() {}
    cse(int x)
    {
        a = x;
        cout << a; // 6
    }
};
main()
{
    cse a, a2(6);
}
