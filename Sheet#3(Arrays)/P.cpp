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
    ll ans = LLONG_MAX;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        ll cnt = 0;
        while(!(x&1)){
            x >>= 1;
            cnt += 1;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
