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
    ll n; cin >> n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll j=0; j<n; j++) cin >> b[j];
    sort(a,a+n);
    sort(b,b+n);
    bool fg = true;
    for(ll i=0; i<n; i++){
        if( a[i] != b[i] ){
            fg = false;
            break;
        }
    }
    if(fg) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
