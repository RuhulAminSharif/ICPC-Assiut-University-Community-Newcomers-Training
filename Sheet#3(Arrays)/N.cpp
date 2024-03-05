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
    ll a, b; cin >> a >> b;
    string s; cin >> s;
    bool fg = true;
    if( s[a] != '-' ){
        fg = false;
    }
    for(ll i=0; i<a && i<s.size(); i++){
        if( s[i]<'0' || s[i]>'9'){
            fg = false;
        }
    }
    for(ll i = a+1; i<s.size(); i++){
        if( s[i]<'0' || s[i]>'9'){
            fg = false;
        }
    }
    if(fg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
