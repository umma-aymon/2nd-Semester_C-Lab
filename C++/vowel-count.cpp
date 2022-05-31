#include<bits/stdc++.h>
int main()
{
    char s[100];
    int c=0,i,l,a=0,e=0,o=0,u=0,x=0;
    gets(s);
    l=strlen(s);
    for(i=1; i<=l; i++)
    {
        if(s[i]=='a')
            a++;
        else if(s[i]=='e')
            e++;
        else if(s[i]=='i')
            x++;
        else if(s[i]=='o')
            o++;
        else if(s[i]=='u')
            u++;
    }
    printf("%d\n%d\n%d\n%d\n%d\n",a,e,x,o,u);
    return 0;
}
