#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b, ans;
    char op;
    cin >> a >> op >> b;
    if(op=='+') ans = a+b;
    else if(op=='-') ans = a-b;
    else if(op=='*') ans = a*b;
    else ans = a/b;
    cout << ans << endl;
    return 0;
}