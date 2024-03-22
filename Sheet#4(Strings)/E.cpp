#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define inf 1e18
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, t;
    cin >> s;
    ll sum = 0;
    for( auto it : s ){
        sum += ( it - '0' );
    }
    cout << sum << endl;
    return 0;
}
