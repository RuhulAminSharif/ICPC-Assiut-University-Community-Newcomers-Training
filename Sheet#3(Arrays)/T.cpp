#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin  >> n;
    ll arr[n][n];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    ll d1 = 0, d2 = 0;
    bool fg = false;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(i==j){
                d1 += arr[i][j];
                d2 += arr[i][n-j-1];
            }
        }
    }
    cout << llabs(d1-d2) << endl;
    return 0;
}
