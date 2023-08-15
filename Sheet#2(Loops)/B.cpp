#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    bool fg = true;
    for(ll i=2; i<=n; i+=2){
        fg = false;
        cout << i << endl;
    }
    if(fg) cout << -1 << endl;
    return 0;
}