#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, even=0, odd=0, pos=0, neg=0;
    cin >> n;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        if(x%2==0) even += 1;
        else odd += 1;
        if(x>0) pos += 1;
        else if(x<0) neg += 1;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}