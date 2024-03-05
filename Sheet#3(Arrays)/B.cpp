#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
    ll x; cin >> x;
    for(ll i=0; i<n; i++){
        if(a[i]==x){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}