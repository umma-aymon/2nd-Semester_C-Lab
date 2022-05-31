#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,l,temp;
     char s[100],a[100];
     cin>>s;
     l=strlen(s);
     cout<<l<<endl;
     for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
            if(s[j]<s[i])
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
    }
    for(i=0; i<l; i++)
        printf("%c ",s[i]);
}
