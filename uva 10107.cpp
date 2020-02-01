#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number=0;

    vector<int>vec;
    int result = 0;
    int mid = 0;


    while (cin>>number)
    {
        vec.push_back(number);

        sort(vec.begin(), vec.end());

        int sz = vec.size();

        //cout<<"first size="<<sz<<endl;
        //cout<<"total value"<<vec[sz-1]<<endl;
        if (sz == 1)
        {
            //cout<<"size=="<<sz<<endl;
            //cout<<"value =="<<vec[sz-1]<<endl;
            cout<<vec[0]<<endl;
            //cout<<"result=="<<vec[sz-1]<<endl;
        }
        else
        {

            if (sz % 2 ==0)
            {
                //cout<<"size=="<<sz<<endl;
                //cout<<"value =="<<vec[sz-1]<<endl;
                mid = sz/2;
                //cout<<"mid for even "<<mid<<endl;

                result = (vec[mid] + vec [mid-1])/2;
                //cout<<"result=="<<result<<endl;
                cout<<result<<endl;
            }

            if (sz % 2 == 1)

            {
                //cout<<"size=="<<sz<<endl;
                //cout<<"value =="<<vec[sz-1]<<endl;
                result = vec[ceil((sz/2))];
                //cout<<"result=="<<result<<endl;

                cout<<result<<endl;
            }
        }
    }
    return 0;
}
