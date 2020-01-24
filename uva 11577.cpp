#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tkase;
    char streng[1000+1];
    cin>>tkase;
    cin.ignore();
    int i=0;
    while(tkase--)
    {
        gets(streng);
        int has[26] = {0};
         for(i = 0; streng[i]; i++)
            {
            if(streng[i] >= 'a' && streng[i] <= 'z')
                has[streng[i]-'a']++;
            if(streng[i] >= 'A' && streng[i] <= 'Z')
                has[streng[i]-'A']++;
            }
        int mx = 0;
        for(i = 0; i < 26; i++)
            mx = mx > has[i] ? mx : has[i];
        for(i = 0; i < 26; i++)
            if(has[i] == mx)
                printf("%c", i+'a');
        puts("");
    }
    return 0;
}
