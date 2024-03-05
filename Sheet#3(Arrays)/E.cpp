#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, mn=LLONG_MAX, idx; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
        mn = min(a[i],mn);
    }
    for(ll i=0; i<n; i++){
        if(a[i]==mn){
            idx = i+1;
            break;
        }
    }
    cout << mn << " " << idx << endl;
    return 0;
}