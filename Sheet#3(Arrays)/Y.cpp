#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q; cin >> n >> q;
    ll a[n+1], preSum[n+1]={0};
    for(ll i=1; i<=n; i++){
        cin >> a[i];
        preSum[i] = preSum[i-1]+a[i];
    }
    while(q--){
        ll l, r; cin >> l >> r;
        cout << preSum[r]-preSum[l-1] << endl;
    }
    return 0;
}
