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
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        if(x==0) cout << x << " ";
        else if(x>0) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;
    return 0;
}