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
    string ans = s;
    string firstSplit = "", secondSplit = "", combine = "";
    string tmp = s;
    for (ll i = 0; i < s.size() - 1; i++)
    {
        firstSplit += s[i];
        tmp.erase(0, 1);
        secondSplit = tmp;
        sort(firstSplit.begin(), firstSplit.end());
        sort(secondSplit.begin(), secondSplit.end());
        combine = firstSplit + secondSplit;
        ans = min(ans, combine);
    }
    cout << ans << endl;
    return 0;
}
