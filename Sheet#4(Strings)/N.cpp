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
    string s; cin >> s;
    char last = s[0];
    ll ans = 1;
    for(ll i=1; i<n; i++){
        if( last != s[i] ) {
            ans += 1;
            last = s[i];
        }
    }
    cout << ans << endl;
    return 0;
}
