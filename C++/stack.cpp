#include <bits/stdc++.h>
using namespace std;
class Stack
{
    char *stck;
    int top, size;

public:
    Stack(int s)
    {
        cout << "Constructing a Stack" << endl;
        top = 0;
        char *stck = new char;
        if (!stck)
        {
            cout << "Allocation error" << endl;
            exit(1);
        }
        size = s;
    }
    ~Stack()
    {
        delete stck;
    }
    void push(char ch)
    {
        if (top > size)
        {
            cout << "Stack is full" << endl;
            return;
        }
        stck[top] = ch;
        top++;
    }
    char pop()
    {
        if (top <= 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        top--;
        return stck[top];
    }
};
int main()
{
    Stack s1(10), s2(10);
    int i;
    s1.push('a');
    s2.push('z');
    s1.push('b');
    s2.push('y');
    for (i = 0; i < 3; i++)
        cout << s1.pop() << endl;
    for (i = 0; i < 3; i++)
        cout << s2.pop();
}
