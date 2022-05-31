#include <iostream>
using namespace std;
int i;
inline void f1()
{
    for (i = 0; i < 5; i++)
        cout << i << endl;
}
int main()
{
    f1();
}
/* 0
1
2
3
4 */
