#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c, ans;
    char p, q; cin >> a >> p >> b >> q >> c;
    if(p=='+') ans = a+b;
    else if(p=='-') ans = a-b;
    else ans = a*b;
    if(ans==c) cout << "Yes" << endl;
    else cout << ans << endl;
    return 0;
}