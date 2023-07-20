#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100; 
    d %= 100;
    ans = (a*b*c*d)%100;
    if(ans<10) cout << 0;
    cout << ans << endl;
    return 0;
}