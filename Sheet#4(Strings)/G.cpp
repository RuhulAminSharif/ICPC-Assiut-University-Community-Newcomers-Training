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
    for(ll i=0; i<s.size(); i++){
        if( s[i] == ',') {
            s[i] = ' ';
        }
        else {
            if( s[i] >= 'a' ){
                s[i] -= 32;
            }
            else{
                s[i] += 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}