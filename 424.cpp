#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char digit[201];
    int number[201]={0} , length=0;


    while (gets(digit))
    {
        if (!strcmp(digit, "0"))
        {
            break;
        }
         length = strlen(digit);

        for (int i=0 , j =length-1; i<length; i++, j--)
        {
            number[i] = number[i]+digit[j] - '0'; ///reversing the actual number and new number will be add in here reversely.
        }
    }
        for (int i=0; i<200; i++)
        {
            if (number[i]>=10)
            {
                int carry = number[i] /10;


                //number[i+1] = number[i+1]+ (number[i] / 10);

                number[i+1] = number[i+1] + carry;

                number[i] = number[i] % 10;
            }
        }
         int i = 200;
        while(number[i] == 0 && i >= 0) i--;
        if(i == -1) cout<<"0";
        for(; i >= 0; i--)
    {
        cout<<number[i];
    }
    cout<<endl;
return 0;
}
