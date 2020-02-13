#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    typedef long long ll;
    ll n;
    cin>>t;
    while(t--) {
        cin>>n;
        printf("%lld\n", (long long)floor(sqrt( 2.0 * n + 0.25 ) + 0.5) - 1);
    }
    return 0;
}
