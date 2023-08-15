#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e6;
vector<bool>vis(mx);
vector<ll>prime;

void sieve()
{
    vis[0]=vis[1] = true;
    for(ll i=3; i*i<=mx;i+=2){
        if(vis[i]==false){
            for(ll j=i*i; j<=mx; j+=2*i){
                vis[j]=true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n; cin >> n;
    cout << 2;
    for(ll i=3; i<=n; i+=2){
        if(vis[i]==false){
            cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}