#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1e9+7;
bool is_found(ll a[], ll n,  ll x)
{
    ll low=0, high = n-1;
    while(low<=high){
        ll mid = (low+high)/2;
        if(a[mid] == x){
            return true;
        }
        else if(a[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q; cin >> n >> q;
    ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    while(q--){
        ll x; cin >> x;
        if(is_found(a, n, x)){
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }
    }
    return 0;
}
