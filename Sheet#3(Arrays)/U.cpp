#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define inf 1e18
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    ll a[n], b[m];
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<m; i++) cin >> b[i];
    ll idx = 0;
    for(ll i=0; i<n; i++){
        if( a[i] == b[idx] ) {
            idx += 1;
        }
    }
    if( idx == m ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
