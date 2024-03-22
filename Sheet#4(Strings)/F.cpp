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
    while(t--) {
        string s; cin >> s;
        ll len = s.size();
        if( len > 10 ) {
            cout << s[0] << len-2 << s[len-1] << endl;
        }
        else {
            cout << s << endl;
        }
    }
    return 0;
}