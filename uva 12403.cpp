#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int tkase=0, sum =0, number=0;
    cin>>tkase;
    string donate;
    string s2="donate";

    for (int i=1; i<=tkase; i++)
    {
        cin>>donate;
        if((donate.compare(s2)) == 0)
        {
            cin>>number;
            sum = sum + number;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
