#include<bits/stdc++.h>
int main()
{
    int a[300];
    char s[100];
    int l,i,j;
    gets(s);
    l=strlen(s);
    for(i=0; i<300; i++)
        a[i]=0;
    for(i=0; i<l; i++)
        a[s[i]]++;
    for(i='a'; i<='z'; i++)
        if(a[i]>0)
        printf("%c==%d\n",i,a[i]);
    return 0;
}
