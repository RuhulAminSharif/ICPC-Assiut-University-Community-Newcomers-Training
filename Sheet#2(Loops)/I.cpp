#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll tmp = n, rev=0;
    while(tmp){
        rev = rev*10 + tmp%10;
        tmp /= 10;
    }
    cout << rev << endl;
    if(rev==n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}