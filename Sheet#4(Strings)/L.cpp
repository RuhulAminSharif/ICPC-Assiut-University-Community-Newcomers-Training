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
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    while( q-- ) {
        string x;
        cin >> x;
        if( x == "pop_back" ) {
            s.pop_back();
        }
        else if( x == "front" ) {
            cout << s.front() << endl;
        }
        else if( x == "back" ) {
            cout << s.back() << endl;
        }
        else if( x == "sort" ) {
            ll l, r; cin >> l >> r;
            if( l > r) swap(l,r);
            l--;
            sort( s.begin()+l, s.begin()+r );
        }
        else if( x == "reverse" ) {
            ll l, r; cin >> l >> r;
            if( l > r) swap(l,r);
            l--;
            reverse( s.begin()+l, s.begin()+r );
        }
        else if( x == "print" ) {
            ll pos; cin >> pos;
            cout << s[pos-1] << endl;
        }
        else if( x == "substr" ) {
            ll l, r; cin >> l >> r;
            if( l > r) swap(l,r);
            l--;
            for(ll k = l; k<r; k++) {
                cout << s[k];
            }
            cout << endl;
        }
        else if( x == "push_back" ) {
            char ch; cin >> ch;
            s.push_back(ch);
        }
    }
    return 0;
}
