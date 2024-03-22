#include <bits/stdc++.h>
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
    cin >> s;
    ll l = 0, r = 0;
    vector<string> ans;
    string tmp;
    for (ll i = 0; i < s.size(); i++)
    {
        if (l == r && l && r)
        {
            ans.push_back(tmp);
            tmp = "";
            l = r = 0;
        }
        if (s[i] == 'L')
        {
            l += 1;
            tmp = tmp + 'L';
        }
        else if (s[i] == 'R')
        {
            r += 1;
            tmp = tmp + 'R';
        }
    }
    if (l == r && l && r)
    {
        ans.push_back(tmp);
    }
    cout << ans.size() << endl;
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
