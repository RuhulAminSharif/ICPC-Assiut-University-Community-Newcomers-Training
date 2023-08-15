#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
bool luck(ll n)
{
    while(n){
        if(n%10!=4 && n%10!=7){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b; cin >> a >> b;
    bool fg = true;
    for(ll i=a; i<=b; i++){
        if(luck(i)){
            fg = false;
            cout << i << " ";
        }
    }
    if(fg) cout << -1;
    cout << endl;
    return 0;
}