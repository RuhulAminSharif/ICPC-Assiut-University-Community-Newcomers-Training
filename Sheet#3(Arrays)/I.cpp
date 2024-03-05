#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        ll mn = LLONG_MAX;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                ll x = a[i]+a[j]+j-i;
                mn = min(mn, x);
            }
        }
        cout << mn << endl;
    }
    return 0;
}