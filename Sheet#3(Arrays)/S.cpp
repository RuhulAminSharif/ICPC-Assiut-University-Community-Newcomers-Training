#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin  >> n >> m;
    ll arr[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    ll x; cin >> x;
    bool fg = false;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(arr[i][j]==x){
                fg = true;
                break;
            }
        }
        if(fg) break;
    }
    if(fg) cout << "will not take number" << endl;
    else cout << "will take number" << endl;
    return 0;
}
