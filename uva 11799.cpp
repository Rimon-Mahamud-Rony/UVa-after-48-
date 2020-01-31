#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int tkase=0, number=0;
	cin>>tkase;
	for (int i=1; i<=tkase; i++) {
		cin>>number;
		int mx = 0, input;
		while(number--) {
			cin>>input;
			if(mx < input)
				mx = input;
		}
		cout<<"Case "<<i<<": "<<mx<<endl;
	}
    return 0;
}
