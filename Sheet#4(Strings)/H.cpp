#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define inf 1e18
void solve()
{
    string s; cin >> s;
    if( s.size() <= 2 ) {
        cout << "Bad" << endl;
        return ;
    }
    for(ll i=0; i<=s.size()-3; i++){
        if( s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' ){
            cout << "Good" << endl;
            return ;
        }
        else if( s[i] == '1' && s[i+1] == '0' && s[i+2] == '1' ) {
            cout << "Good" << endl;
            return;
        }
    }
    cout << "Bad" << endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}