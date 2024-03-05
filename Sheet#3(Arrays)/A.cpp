#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, sum=0; cin >> n;
    for(ll i=1; i<=n; i++){
        ll x; cin >> x;
        sum += x;
    }
    cout << abs(sum) << endl;
    return 0;
}