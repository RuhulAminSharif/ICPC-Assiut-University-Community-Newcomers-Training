#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void Bubble_Sort(ll *a, ll start, ll end)
{
    for(ll i=start; i<end-1; i++){
        bool fg = true;
        for(ll j=0; j<end-i-1; j++){
            if(a[j]>a[j+1]){
                fg = false;
                swap(a[j], a[j+1]);
            }
        }
        if(fg){
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    Bubble_Sort(a, 0, n);
    for(ll i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}