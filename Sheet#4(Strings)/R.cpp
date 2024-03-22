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
    ll ans = 0;
    for(ll i=0; i<s.size(); i++){
        if( s[i] == 'V' ) {
            ans += 5;
        }
        else if( s[i] == 'W' ) {
            ans += 2;
        }
        else if( s[i] == 'X' && i != (s.size()-1) ) {
            i++;
        }
        else if( s[i] == 'Y' && i != (s.size()-1) ) {
            i += 1;
            s.push_back(s[i]);
        }
        else if( s[i] == 'Z' && i != (s.size()-1) ) {
            if( s[i+1] == 'V' ) {
                ans /= 5;
                i += 1;
            }
            else if( s[i+1] == 'W' ) {
                ans /= 2;
                i += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
