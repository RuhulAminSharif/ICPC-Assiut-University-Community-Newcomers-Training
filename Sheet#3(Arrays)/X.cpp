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
    ll n, m; cin >> n >> m;
    char arr[n+5][m+5];
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin >> arr[i][j];
        }
    }
    ll x, y; cin >> x >> y;
    bool fg = true;
    ll dx[] = {-1,-1,-1,0,0,1,1,1};
    ll dy[] = {-1,0,1,-1,1,-1,0,1};
    for(ll i=0; i<8; i++){
        ll newRow = x+dx[i], newCol = y+dy[i];
        if( arr[newRow][newCol] == '.' ) {
            fg = false;
            break;
        }
    }
    if(fg) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
