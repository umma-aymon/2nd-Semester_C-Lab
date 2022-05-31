#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    char ch;
    m.insert(pair<char,int>('A',1));
    m.insert(pair<char,int>('B',2));
  //  m.insert(pair<char,int>('C',5));
    m.insert(pair<char,int>('C',3));
    map<char,int>::iterator p;
    for(p=m.begin(); p!=m.end(); p++)
        cout<<p->first<<" : "<<p->second<<endl;
    cout<<"Size of map:"<<m.size()<<endl;
    p=m.find('C');
    cout<<p->first<<" : "<<p->second<<endl;

}
