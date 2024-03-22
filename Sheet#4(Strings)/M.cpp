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
    string ans;
    for(ll i=0; i<s.size(); i++){
        if( s[i] == 'h' && ans.size() == 0 ) {
            ans += s[i];
        }
        else if( s[i] == 'e' && ans.size() == 1 ) {
            ans += s[i];
        }
        else if( s[i] == 'l' && ans.size() == 2 ) {
            ans += s[i];
        }
        else if( s[i] == 'l' && ans.size() == 3 ) {
            ans += s[i];
        }
        else if( s[i] == 'o' && ans.size() == 4 ) {
            ans += s[i];
            break;
        }
    }
    if( ans == "hello" ) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
