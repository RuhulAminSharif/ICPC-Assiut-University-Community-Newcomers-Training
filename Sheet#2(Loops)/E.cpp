#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, ans=-1;
    cin >> n;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        ans = max(ans, x);
    }
    cout << ans << endl;
    return 0;
}