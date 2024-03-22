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
    string s;
    getline(cin, s);
    s.push_back('.');
    ll cnt = 0;
    for(ll i=0; i<s.size(); i++) {
        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
            if( s[i+1]==' ' || s[i+1]=='.' || s[i+1]=='?' || s[i+1]==',' || s[i+1]=='!' ) {
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
