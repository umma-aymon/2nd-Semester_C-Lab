#include<bits/stdc++.h>
int a[110];
int main()
{
    char s[110],s2[110];
    int len,len2,i,j;
    gets(s);
    gets(s2);
    len=strlen(s);
    len2=strlen(s2);
    for(i=0; i<len; i++)
        a[s[i]]++;
    for(i='a' ; i<='z'; i++)
        if(a[i]>0)
            printf("%c==%d\n",i,a[i]);
    return 0;
}
