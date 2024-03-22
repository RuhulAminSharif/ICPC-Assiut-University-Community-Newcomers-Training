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
    ll n; cin >> n;
    ll freq[27] = {0};
    char ch;
    for(ll i=0; i<n; i++) {
        cin >> ch;
        freq[ch-'a'] += 1;
    }
    for(ll i=0; i<27; i++){
        if( freq[i] != 0 ) {
            for(ll p=0; p<freq[i]; p++){
                cout << char(i+'a');
            }
        }
    }
    cout << endl;
    return 0;
}
