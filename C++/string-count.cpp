#include <bits/stdc++.h>
int main()
{
    char s[100];
    int i, j, l, c = 0, m = 0;
    gets(s);
    l = strlen(s);

    for (i = 0; i < l; i++)
    {
        m = 0;
        for (j = 0; j < l; j++)
            if (s[i] == s[j])
                m++;
        printf("%c-%d\n", s[i], m);
    }
    return 0;
}
