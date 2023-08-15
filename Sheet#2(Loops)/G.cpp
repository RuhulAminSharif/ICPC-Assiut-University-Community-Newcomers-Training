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
        ll n, ans=1; cin >> n;
        for(ll i=2; i<=n; i++) ans *= i;
        cout << ans << endl;
    }
    return 0;
}