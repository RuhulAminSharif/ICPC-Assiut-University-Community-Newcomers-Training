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
    ll tt = 1; cin >> tt;
    while(tt--){
        string s, t; cin >> s >> t;
        string ans = "";
        ll i=0, j=0;
        while( i < s.size() && j < t.size() ) {
            ans += s[i];
            ans += t[j];
            i += 1;
            j += 1;
        }
        while( i < s.size() ) {
            ans += s[i];
            i += 1;
        }
        while( j < t.size() ) {
            ans += t[j];
            j += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
