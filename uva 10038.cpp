#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int times=0;
    while (cin>>times)
    {
        int flag=1;
        vector<int>vec;
        int number=0;
        for (int i=0; i<times; i++)
        {
            cin>>number;
            vec.push_back(number);
        }

        /*
        for (int i=0; i<vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        */

        int l = vec.size();

        int arr[l]={0};

        for (int i=1; i<l; i++)
        {
            arr[i] = abs(vec[i]-vec[i-1]);
        }

        /*
        for (int i=0; i<l-1; i++)
        {
            cout<<arr[i]<<" ";
        }*/
        sort(arr,arr+l);
        //int flag=0;

        for (int k=1; k<l; k++)
        {
            if (arr[k] != k)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            cout<<"Not jolly"<<endl;
        }
        else
        {
            cout<<"Jolly"<<endl;
        }
    }
    return 0;
}
