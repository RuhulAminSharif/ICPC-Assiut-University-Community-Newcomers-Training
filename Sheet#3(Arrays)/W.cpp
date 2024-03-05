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
    for(ll i=0; i<n; i++){
        ll l=0, r=m-1;
        while(l<r){
            arr[i][l] ^= arr[i][r];
            arr[i][r] ^= arr[i][l];
            arr[i][l] ^= arr[i][r];
            l++, r--;
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
