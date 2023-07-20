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
    cout << n/365 << " years" << endl;
    n%=365;
    cout << n/30 << " months" << endl;
    n%=30;
    cout << n << " days" << endl;
    return 0;
}