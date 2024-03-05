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
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        ll cnt = n;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                if(a[j]<a[j-1]){
                    break;
                }
                cnt += 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
