#include<bits/stdc++.h>
using namespace std;

int list_of_prime(int lastnumber)
{
    int i=0 , j=0,sum=0,k=0,l=0,c=0;
    int primelist[lastnumber+1];

    memset(primelist, -1, sizeof(primelist));

    for(int i=2; i<=lastnumber; i++)
    {
        if(primelist[i] == -1)
        {
            for (j=2; i*j<=lastnumber; j++)
            {
                //cout<<i*j<<endl;
                primelist[i*j] = 0;
            }
        }
    }
    vector <int> vec;
    //cout<<"lsit of the prime number: "<<endl;
    for (int i=2; i<=lastnumber; i++)
    {
        if (primelist[i] != 0)
        {
            //cout<<i<<" "<<endl;
            vec.push_back(i);
        }
    }
    /*
    for (int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }*/

    for (k=0; k<vec.size(); k++)
    {
        sum=0;
        for (l=k; l<vec.size(); l++)
        {
            sum = sum + vec[l];
            if (sum==lastnumber)
            {
                c++;
            }
            if (sum>=lastnumber)
            {
                break;
            }
        }
    }
    cout<<c<<endl;
    return c;
}

int main()
{
    int number;
    //cout<<"give your last number: "; cin>>number;

    while(scanf("%d",&number)==1)
    {
    if(number==0)
        break;
    list_of_prime(number);
    }
    return 0;
}

