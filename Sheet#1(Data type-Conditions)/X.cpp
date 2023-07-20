#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    if(max(l1,l2)>min(r1,r2)) cout << -1 << endl;
    else cout << max(l1,l2) << " " << min(r1,r2) << endl;
    return 0;
}