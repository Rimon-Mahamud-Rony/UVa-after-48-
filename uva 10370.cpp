#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main()
{
    int tkase =0 ;
    cin>>tkase;
    for (int i=1; i<=tkase; i++)
    {
        double times=0 , number=0 , total=0.00 , avg=0.00;
        vector<double>vec;
        cin>>times;

        for (int i=0; i<times; i++)
        {
            cin>>number;
            vec.push_back(number);

            total = total+number;
        }
        //cout<<"total="<<total<<endl;

        int l=vec.size();

        //cout<<"l="<<l<<endl;


        avg = (double)total/ (double)times;
        //cout<<"avg="<<avg<<endl;

        //printf("%.3lf",avg);
            //cout<<"vector value:->";
            
        for (int v=0; v<l; v++)
        {
            //cout<<vec[v]<<" ";
        }
        //cout<<endl;
        
        int cnt=0;

        for (int v=0; v<l; v++)
        {
            if (vec[v]>avg)
            {
                cnt++;
                //cout<<"cnt="<<cnt<<" ";
            }
        }

       // printf("%.3lf%\n", (cnt/times)*100.00);
       //double ans=0.00;

       //ans = (double)cnt/(double)times;
       //cout<<setprecision(4)<<ans<<endl;

        //double t=8.909009889908;
        printf("%.3lf",(double)((double)cnt/(double)times)*100.0);
        cout<<"%"<<endl;
        //cout<<setprecision(5)<<((double)cnt/(double)times)*100.00<<"%"<<endl;

    }
    return 0;
}
