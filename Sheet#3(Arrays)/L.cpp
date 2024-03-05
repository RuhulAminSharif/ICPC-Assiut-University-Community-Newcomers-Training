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
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll mx = -inf;
        for(ll i=0; i<n; i++){
            mx = -inf;
            for(ll j=i; j<n; j++){
                if( j == i ){
                    cout << a[j] << " ";
                    mx = max(mx, a[j]);
                }
                else{
                    mx = max(mx, a[j]);
                    cout << mx << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
