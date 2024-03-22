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
    bool multiLineComment = false;
    while (getline(cin, s))
    {
        bool notComment = false;
        if (s.size() == 0 || s == " ")
            continue;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '/' && s[i + 1] == '/' && multiLineComment == false)
            {
                break;
            }
            else if (s[i] == '/' && s[i + 1] == '*')
            {
                i += 1;
                multiLineComment = true;
            }
            else if (s[i] == '*' && s[i + 1] == '/' && multiLineComment == true)
            {
                i += 1;
                multiLineComment = false;
            }
            else if (multiLineComment == false)
            {
                cout << s[i];
                notComment = true;
            }
        }
        if (notComment && multiLineComment == false)
        {
            cout << endl;
        }
    }
    return 0;
}
