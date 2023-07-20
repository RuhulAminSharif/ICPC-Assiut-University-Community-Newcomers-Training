#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a[3];
    for(ll i=0; i<3; i++) cin >> a[i];
    sort(a, a+3);
    cout << a[0] << " " << a[2] << endl;
    return 0;
}