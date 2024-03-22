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
    string tmp;
    for(ll i=0; i<s.size(); i++){
        if( s[i] == ' ' ) {
            reverse(tmp.begin(), tmp.end());
            cout << tmp << " ";
            tmp = "";
        }
        else {
            tmp += s[i];
        }
    }
    reverse(tmp.begin(), tmp.end());
    cout << tmp << endl;
    return 0;
}
