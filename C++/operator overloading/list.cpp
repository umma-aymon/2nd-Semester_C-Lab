#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>lst;
    lst.push_back(12);
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(7);
    lst.push_back(2);
    list<int>:: iterator p;
    for( p=lst.begin(); p!=lst.end(); p++)
        cout<<*p<<endl;
    lst.pop_front();
    cout<<"printing after removing 1st element"<<endl;
    for( p=lst.begin(); p!=lst.end(); p++)
        cout<<*p<<endl;
    lst.push_front(10);
    cout<<"Printing after insertion "<<endl;
    for( p=lst.begin(); p!=lst.end(); p++)
        cout<<*p<<endl;
        cout<<"Finding 5 and replacing it with 6"<<endl;
    p= find(lst.begin(),lst.end(),5);

    lst.insert(p,6);
      lst.erase(p);
    for( p=lst.begin(); p!=lst.end(); p++)
        cout<<*p<<endl;


}
