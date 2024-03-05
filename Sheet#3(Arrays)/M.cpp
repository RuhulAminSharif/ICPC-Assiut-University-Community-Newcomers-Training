#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; /// cin >> t;
    for(ll test=1; test<=t; test++){
        ll n; cin >> n;
        ll a[n], mx = LLONG_MIN, mn = LLONG_MAX;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
        bool fg=true, fg1=true;
        for(ll i=0; i<n; i++){
            if(!fg && !fg1){
                break;
            }
            if(a[i]==mx && fg){
                a[i] = mn;
                fg = false;
            }
            else if(a[i]==mn && fg1){
                a[i] = mx;
                fg1 = false;
            }
        }
        for(ll i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
