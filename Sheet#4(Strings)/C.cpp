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
    cin >> s >> t;
    if( s <= t ) {
        cout << s << endl;
    }
    else {
        cout << t << endl;
    }
    return 0;
}
