#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int tkase;
    char s[50];
    cin>>tkase;
    for (int i=1; i<=tkase; i++)
    {
        cin>>s;
        if(strlen(s)==5)
        {
            cout<<"3"<<endl;
        }
        else if(s[0]=='o'&&s[1]=='n'||s[0]=='o'&&s[2]=='e'||
                 s[1]=='n'&&s[2]=='e')
                {
                    cout<<"1"<<endl;
                }
        else
            cout<<"2"<<endl;
    }

    return 0;
}
