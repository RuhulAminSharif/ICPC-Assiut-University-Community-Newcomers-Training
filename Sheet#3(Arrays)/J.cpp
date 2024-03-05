#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; /// cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        ll ans = count(a,a+n,a[0]);
        if(ans&1) cout << "Lucky" << endl;
        else cout << "Unlucky" << endl;
    }
    return 0;
}