#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int tkase=0;
    while (cin>>tkase && tkase)
    {
        int x=0, y=0 , a=0,b=0;
        cin>>x>>y;
        while (tkase--)
        {
            cin>>a>>b;
            if(a == x || b == y)
                cout<<"divisa"<<endl;
            else if(a > x && b > y)
                cout<<"NE"<<endl;
            else if(a < x && b > y)
                cout<<"NO"<<endl;
            else if(a < x && b < y)
                cout<<"SO"<<endl;
            else
                cout<<"SE"<<endl;
        }
    }
    return 0;
}
