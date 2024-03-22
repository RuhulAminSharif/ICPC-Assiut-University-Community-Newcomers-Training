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
    string s; cin >> s;
    ll freq[27] = { 0 };
    for( auto it : s ) {
        freq[ it-'a' ] += 1;
    }
    for( ll i=0; i<27; i++){
        if( freq[i] ) {
            cout << char(i+'a') << " : " << freq[i] << endl;
        }
    }
    return 0;
}