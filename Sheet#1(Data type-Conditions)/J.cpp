#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b; cin >> a >> b;
    if(a%b==0 || b%a==0) cout << "Multiples" << endl;
    else cout << "No Multiples" << endl;
    return 0;
}