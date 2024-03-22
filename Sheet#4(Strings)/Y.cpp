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
    ll cost[26];
    for (ll i = 0; i < 26; i++)
        cin >> cost[i];
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        cnt = 0;
        if (s[i] == '?')
        {
            for (ll j = i; j < s.size(); j++)
            {
                if (s[j] == '?')
                    cnt += 1;
                else
                    break;
            }
            /// ?????
            if (cnt == s.size())
                for (ll idx = 0; idx < s.size(); idx++)
                    s[idx] = 'a';
            else if (i == 0) /// ????csdkl
            {
                ll mn_cost = inf;
                char mn_ch;
                for (ll idx = 0; idx < (s[cnt] - 'a') + 1; idx++)
                {
                    ll curr_cost = abs(cost[s[cnt] - 'a'] - cost[idx]);
                    if (mn_cost > curr_cost)
                    {
                        mn_ch = char(idx + 'a');
                        mn_cost = curr_cost;
                    }
                }
                for (ll j = 0; j < cnt; j++)
                    s[j] = mn_ch;
                i += cnt;
            }
            /// sdlfj????
            else if (i + cnt == s.size())
            {
                ll mn_cost = inf;
                char mn_ch;
                for (ll idx = 0; idx < (s[i - 1] - 'a') + 1; idx++)
                {
                    ll curr_cost = abs(cost[s[i - 1] - 'a'] - cost[idx]);
                    if (mn_cost > curr_cost)
                    {
                        mn_ch = char(idx + 'a');
                        mn_cost = curr_cost;
                    }
                }
                for (ll j = i; j < cnt + i; j++)
                    s[j] = mn_ch;
                break;
            }
            /// sdfj???sfsdg
            else
            {
                ll mn_cost = inf;
                char mn_ch;
                for (ll idx = 0; idx < 26; idx++)
                {
                    ll curr_cost = abs(cost[s[i - 1] - 'a'] - cost[idx]) + abs(cost[idx] - cost[s[i + cnt] - 'a']);
                    if (mn_cost > curr_cost)
                    {
                        mn_ch = char(idx + 'a');
                        mn_cost = curr_cost;
                    }
                }
                for (ll j = i; j < i + cnt; j++)
                    s[j] = mn_ch;
                i += cnt;
            }
        }
    }
    ll tot_cost = 0;
    for (ll i = 0; i < s.size() - 1; i++)
    {
        tot_cost += abs(cost[s[i] - 'a'] - cost[s[i + 1] - 'a']);
    }
    cout << tot_cost << endl;
    cout << s << endl;
    return 0;
}
