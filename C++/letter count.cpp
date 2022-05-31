#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    int c = 0, count[26] = {0}, count1[26] = {0}, f = 0;
    printf("Enter a string\n");
    getline(cin, s);
    getline(cin, s1);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    while (s[c] != '\0')
    {
        /* Considering characters from 'a' to 'z' only */
        if (s[c] >= 'a' && s[c] <= 'z')
            count[s[c] - 'a']++;
        c++;
    }
    /* for ( c = 0 ; c < 26 ; c++ )
    {
       if( count[c] != 0 )
          printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
    }*/
    c = 0;
    while (s1[c] != '\0')
    {
        /* Considering characters from 'a' to 'z' only */
        if (s1[c] >= 'a' && s1[c] <= 'z')
            count1[s1[c] - 'a']++;
        c++;
    }
    for (c = 0; c < 26; c++)
    {
        if (!(count[c] != 0 && count1[c] != 0))
            // printf("%c occurs %d times in the entered string.\n",c+'a',count1[c]);
            f = 0;
        break;
    }
    if (f)
        cout << "y" << endl;
    else
        cout << "n" << endl;

    return 0;
}
