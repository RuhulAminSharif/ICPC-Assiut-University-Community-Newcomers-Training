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
    ll a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    bool fg = true;
    ll left = 0, right = n-1;
    while(left<right){
        if(a[left]!=a[right]){
            fg = false;
            break;
        }
        left += 1;
        right -= 1;
    }
    if(fg) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}