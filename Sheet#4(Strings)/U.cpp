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
    ll freq[26] = {0};
    for (char &ch : s)
    {
        ch = tolower(ch);
        freq[ch - 'a'] += 1;
    }
    ll ans = s.size() / 5;
    ans = min(ans, freq['e' - 'a']);
    ans = min(ans, freq['g' - 'a']);
    ans = min(ans, freq['y' - 'a']);
    ans = min(ans, freq['p' - 'a']);
    ans = min(ans, freq['t' - 'a']);
    cout << ans << endl;
    return 0;
}
