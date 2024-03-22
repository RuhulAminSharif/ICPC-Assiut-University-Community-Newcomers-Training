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
    ll left = 0, right = s.size()-1;
    bool fg = true;
    while(left<right){
        if(s[left] != s[right]){
            fg = false;
        }
        left += 1;
        right -= 1;
    }
    if( fg ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}