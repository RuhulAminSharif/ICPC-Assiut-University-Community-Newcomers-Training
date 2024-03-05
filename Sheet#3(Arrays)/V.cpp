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
    ll freq[m+1]={0};
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        freq[x] += 1;
    }
    for(ll i=1; i<=m; i++){
        cout << freq[i] << endl;
    }
    return 0;
}
