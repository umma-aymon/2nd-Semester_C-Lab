#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout.unsetf(ios::dec);
    cout.setf(ios::showbase | ios::hex | ios::uppercase);
    cout<<"hex: "<<100<<endl; //64
    cout.unsetf(ios::hex);
    cout.setf(ios::oct);
    cout<<"oct: "<<100<<endl; //144
    cout.setf(ios::dec);
    cout<<"dec: "<<100<<endl;
}

